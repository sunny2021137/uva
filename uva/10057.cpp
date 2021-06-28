#include <iostream>
#include <vector>
#include <algorithm>	//sort 
//34 
//―い计 
using namespace std;

int main()
{
	vector<int> v;
	int n, tmp;
	while(cin>>n)
	{
		if(n!=0)
		{
			v.clear();
			for(int i=0; i<n; i++)
			{
				cin>>tmp;
				v.push_back(tmp);
			}
			//逼ぃ璶糶bubble sort穦禬 
			sort(v.begin(), v.end());
		
			//氮 
			//ans1块い程い计(案计块Τㄢい计珼)
			//ans2块いΤ碭い计(㎝い计)
			//ans3┮Τ俱计い才A(案计块ざㄢい计;┪计块い计) 
			int ans1, ans2, ans3; 
			if(n%2)	// 
			{
				ans1=v[n/2];
				ans3=1;
				int cnt=0;
				for(int i=0; i<v.size(); i++)
				{
					if(v[i]==v[n/2])
					{
						cnt++;
					}
				}
				ans2=cnt;
			}
			else
			{
				ans1=v[n/2-1];
				ans3=v[n/2]-v[n/2-1]+1;
				int cnt=0;
				for(int i=0; i<v.size(); i++)
				{
					if(v[i]==v[n/2]||v[i]==v[n/2-1])
					{
						cnt++;
					}
				}
				ans2=cnt;
			}
			cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
		}
	}
}
