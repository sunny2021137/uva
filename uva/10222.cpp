//52 
//�ϥΰ}�C�s��L�ϡAfind()�h��
//�`�N: ���D��decode�������u���r�������A�ϥi�H�٥h�ܦh�����n������ 
#include <iostream>
#include <vector>
#include <algorithm>	//���Ffind
 
using namespace std;

int main()
{
	vector<char> tmp;
	vector<vector<char> > v;
	char tmp1[12]={'q', 'w', 'e','r','t','y','u','i','o','p','[',']'};
	char tmp2[11]={'a','s','d','f','g','h','j','k','l',';','\''};
	char tmp3[9]={'z','x','c','v','b','n','m',',','.'};
	string s;
	
//	�N�ȩ�Jvector
	for(int i=0; i<12; i++)
	{
		tmp.push_back(tmp1[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	for(int i=0; i<11; i++)
	{
		tmp.push_back(tmp2[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	for(int i=0; i<9; i++)
	{
		tmp.push_back(tmp3[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	
	vector<char>::iterator it;
	while(getline(cin, s))
	{
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);	//����p�g 
			int j;
			for(j=0; j<3; j++)
			{
				it=find(v[j].begin(), v[j].end(), s[i]);	//�Q��vector��find�h�� 
				if(it!=v[j].end())
				{
					cout<<*(it-2);	//����2 
					break;
				} 
			}
			if(j>=3) cout<<s[i];	//�S���A��X��� 
		}
		cout<<endl;
	}
		
}

