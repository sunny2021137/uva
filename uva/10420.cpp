//12 .40 
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

//�O��:�@�椤���F�Ĥ@�ӳ�r�O�a�W�A��l����"�@�ӦW�r"!!!! 
int main()
{
	vector<set<string> > v;	//��set�L�o���� 
	map<string, int> m; //map��������set��index 
	int n;
	string s, country, sub, tmp;
	int numOfC;
	while(cin>>n)
	{
		numOfC=1;	//���F�ϧO�O�_�w���s���A�s���q1�}�l(�S����0) 
		getline(cin, tmp);
		for(int i=0; i<n; i++)
		{
			int cnt=0;
			getline(cin, s);	//Ū�� �]�t�ťժ���� 
			int beg=0;
			for(int i=0; i<s.length(); i++)
			{
				if(s[i]==' ')	//���q 
				{
					country=s.substr(beg, i-beg);	//�a�W���� 
					cnt++;
					if(m[country]==0)	//���e�|���X�{���a�W 
					{
						//�s�W�@��set�[�Jvector 
						set<string> tmp_set;
						v.push_back(tmp_set);
						//�]�s�� 
						m[country]=numOfC;
						numOfC++;
					}
					v[m[country]-1].insert(s.substr(i+1, s.length()-(i+1)));	//��b���H�W�A�[�Jset�� 
					break;
				}	
			}
		}
		map<string, int >::iterator it;
		for(it=m.begin(); it!=m.end(); it++)
		{
			if((it->second)!=0)
				cout<<it->first<<" "<<v[(it->second)-1].size()<<endl;	//�^�ǹ���set�j�p ���Ӧa�����ƤH�� 
		}
		m.clear();	//�M��
		v.clear(); 
 } 
}
