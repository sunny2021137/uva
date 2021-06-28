//12 .40 
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

//記住:一行中除了第一個單字是地名，其餘的為"一個名字"!!!! 
int main()
{
	vector<set<string> > v;	//用set過濾重複 
	map<string, int> m; //map紀錄對應set的index 
	int n;
	string s, country, sub, tmp;
	int numOfC;
	while(cin>>n)
	{
		numOfC=1;	//為了區別是否已有編號，編號從1開始(沒有為0) 
		getline(cin, tmp);
		for(int i=0; i<n; i++)
		{
			int cnt=0;
			getline(cin, s);	//讀取 包含空白的整行 
			int beg=0;
			for(int i=0; i<s.length(); i++)
			{
				if(s[i]==' ')	//分段 
				{
					country=s.substr(beg, i-beg);	//地名部分 
					cnt++;
					if(m[country]==0)	//之前尚未出現此地名 
					{
						//新增一個set加入vector 
						set<string> tmp_set;
						v.push_back(tmp_set);
						//設編號 
						m[country]=numOfC;
						numOfC++;
					}
					v[m[country]-1].insert(s.substr(i+1, s.length()-(i+1)));	//後半為人名，加入set中 
					break;
				}	
			}
		}
		map<string, int >::iterator it;
		for(it=m.begin(); it!=m.end(); it++)
		{
			if((it->second)!=0)
				cout<<it->first<<" "<<v[(it->second)-1].size()<<endl;	//回傳對應set大小 為該地不重複人數 
		}
		m.clear();	//清空
		v.clear(); 
 } 
}
