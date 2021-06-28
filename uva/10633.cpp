#include <iostream>
#include <stack>

using namespace std;

//ア计Τ0~9 10贺
//X计, A计 M奔程计N计-计 
//X=10M+A, X-M=N  => 10M+A-M=N  => 9M+A=N  => M=(N-A)/9, "N-A9计" 
 
int main()
{
	long long int n, m;
	int cnt;
	while(cin>>n)
	{
		cnt=0;
		if(n==0) break;
		for(int a=9; a>=0; a--)	//琵挡狦 
		{
			if((n-a)%9==0)
			{
				m=(n-a)/9;	
				if(cnt!=0)
				{
					cout<<" ";
				}
				else cnt++;
				cout<<n+m;	//X=M+N;
			}
		 } 
		cout<<endl;		
	}

} 
