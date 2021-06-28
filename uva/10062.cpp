#include <iostream>
#include <map>
#include <vector>
#include <algorithm>	//為了sort 
//44
using namespace std;
//頻率-ASCII 的struct，方便排序 
struct af {
	int ascii;
	int f;
};
//由f小排到大，f相等依ascii由大排到小 
bool cmp(af a, af b)
{
	if(a.f<b.f) return true;
	else if(a.f==b.f)
	{
		if(a.ascii<b.ascii) return false;
		else return true;	
	}
	else return false;
}
int main()
{
	bool first=true;
	string s;
	map<int, int> m;	//1st map: asc, f
	vector<af> v;	
	while(getline(cin,s))
	{
		/*注意，最後一個沒有空一行!!!*/
		if(!first) cout<<endl;
		else first=false;
			
		m.clear();
		v.clear();
		for(int i=0; i<s.length(); i++)
			m[(int)s[i]]++;
		
		map<int, int>::iterator it;
		for(it=m.begin(); it!=m.end(); it++)
		{
			af tmp;
			tmp.ascii=it->first;
			tmp.f=it->second;
//			cout<<"t:"<<tmp.ascii<<" "<<tmp.f<<endl;
			v.push_back(tmp);
		}
		//排列
		sort(v.begin(), v.end(), cmp); 	
		
		for(int i=0; i<v.size(); i++)
			cout<<v[i].ascii<<" "<<v[i].f<<endl;
	}
} 
