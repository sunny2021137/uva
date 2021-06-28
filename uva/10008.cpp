//使用toupper()
//33
#include <iostream>
#include <algorithm>
#include <cctype> //為了toupper
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
		getline(cin, s);	//去掉留下的"\n" 
		for(int i=0; i<n; i++)
		{
			getline(cin, s);
			for(int j=0; j<s.length(); j++)
			{
				if(s[j]>='A'&&s[j]<='Z' || s[j]>='a'&&s[j]<='z')
				{
					s[j]=toupper(s[j]);
					m[s[j]]++;	//用map去記數 
				}
			}
		}
		//將單字與數目 做成 pair 放進vector做排序 
		map<char, int>::iterator it;
		for(it=m.begin(); it!=m.end(); it++)	
		{
			v.push_back(make_pair(it->first, it->second));
		}
		sort(v.begin(), v.end(), cmp);
		
		//輸出排序後的結果 
		for(int i=0; i<v.size(); i++)
			cout<<v[i].first<<" "<<v[i].second<<endl;
			
		m.clear();
		v.clear();
	}
} 

