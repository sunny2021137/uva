#include <iostream>

//6 
using namespace std;

int main()
{
	int start;
	int end;
	int sum;
	int n;
	while(cin>>n)
	{
		for(int i=1; i<=n; i++)
		{
			sum=0;
			cin>>start;
			cin>>end;
			int j=start;
			if(j%2==0) j++;
			for(; j<=end; j+=2)
			{
				sum+=j;
			}
			cout<<"Case "<<i<<": "<<sum<<endl;
		}
	}
	 
 } 
