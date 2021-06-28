#include <iostream>
//20 bbs
using namespace std;
 
int main()
{
	int t, n;
	while(cin>>t)
	{
		for(int k=0; k<t; k++)
		{
			cin>>n;
			int item[n];
			for(int i=0; i<n; i++)
			{
				cin>>item[i];
			}
			int cnt=0;
			for(int i=0; i<n-1; i++)
				for(int j=0; j<n-i-1; j++)
					if(item[j]>item[j+1])
					{
						cnt++;
						int tmp=item[j];
						item[j]=item[j+1];
						item[j+1]=tmp;
					}
			cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
		}
	}
}
