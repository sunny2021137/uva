#include <iostream>
#include <algorithm>
#include <map>
//jolly jumper定義:給n個數，此n個數的差值在1~n-1之間，且不重複
//用map去記數 
using namespace std;

int main()
{
	string s;
	int pre=0, cur=0;
	int n;
	int num=0;
	while(cin>>n)
	{
		map<int, int> cnt;
		
		for(int i=0; i<n; i++)
		{
			cin>>cur;
			
			//有前值 算差值 差值對應cnt++ 
			if(num!=0)
			{
				cnt[abs(pre-cur)]++;
			}

			//更新 
			pre=cur; 
			cur=0;
			num++;
		}
		//判斷差值範圍是否符合 
		map<int, int>::iterator it;	
		for(it=cnt.begin(); it!=cnt.end(); it++)
		{			
			//範圍要小心 n-1可能<1		
			if((it->first)<1 && n-1>=1 || (it->first)>n-1 && n-1>=1 || (it->second)>1)
				break;
		}
		//輸出
		//字串長度1定義為jolly
		if(n<=1)
			cout<<"Jolly"<<endl;
		else if(it==cnt.end())
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	//歸零		
		cur=0;
		pre=0;
		num=0;
	}
	
 } 
