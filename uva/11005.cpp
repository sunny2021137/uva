//37 
#include <iostream>

using namespace std;

int cost[36];

//算某base cost 
int baseCost(int base, int q)
{
	int c=0;
	while(q!=0)
	{
		c+=cost[q%base];
		q/=base;
	}
	return c;
}
int main()
{
	int n, m, q;
	int c[37];
	int min;
	
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<4; j++)
				for(int k=0; k<9; k++)
					cin>>cost[9*j+k];
			cout<<"Case "<<i+1<<":"<<endl;
			cin>>m;
			for(int j=0; j<m; j++)
			{
				cin>>q;
				//一個個base算 求min
				for(int k=2; k<=36; k++)
				{
					c[k]=baseCost(k, q);
					//min
					if(k==2||c[k]<min) min=c[k];
				}
				cout<<"Cheapest base(s) for number "<<q<<":";
				for(int k=2; k<=36; k++)
				{
					//印cost=min的base 
					if(c[k]==min)
					{
						cout<<" "<<k;	//無法得知最後一組符合者，所以用" "在k前的方式避免判斷 
					}
				}
				cout<<endl;
			}
			//最後一組不能有換行 
			if(i!=n-1)
				cout<<endl;
		}	
	} 
}
