//�ϥ�toupper()
//33
#include <iostream>
#include <algorithm>
#include <cctype> //���Ftoupper
#include <map>
#include <vector>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
	return a.second > b.second;
}
int main()
{
	map<char, int> m;
	vector<pair<char, int> >v; 
	int n;
	string s;
	while(cin>>n)
	{
		getline(cin, s);	//�h���d�U��"\n" 
		for(int i=0; i<n; i++)
		{
			getline(cin, s);
			for(int j=0; j<s.length(); j++)
			{
				if(s[j]>='A'&&s[j]<='Z' || s[j]>='a'&&s[j]<='z')
				{
					s[j]=toupper(s[j]);
					m[s[j]]++;	//��map�h�O�� 
				}
			}
		}
		//�N��r�P�ƥ� ���� pair ��ivector���Ƨ� 
		map<char, int>::iterator it;
		for(it=m.begin(); it!=m.end(); it++)	
		{
			v.push_back(make_pair(it->first, it->second));
		}
		sort(v.begin(), v.end(), cmp);
		
		//��X�Ƨǫ᪺���G 
		for(int i=0; i<v.size(); i++)
			cout<<v[i].first<<" "<<v[i].second<<endl;
			
		m.clear();
		v.clear();
	}
} 

