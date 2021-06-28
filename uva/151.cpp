//uva 151 ¬ù·æªâ(¼É¤O)
//13
#include <iostream>
using namespace std;

int main ()
{
	int n, i=0;
	int cnt=0;
	while(cin>>n)
	{
		if(n==0) break;
		for(int m=1; ; m++)
		{
			i=0;
			int mark[n]={0};
			int choose=0;
			cnt=m-1;
			while(choose!=n-1)
			{
				if(mark[i]==0)
				{
					cnt++;
					if(cnt==m)
					{
						cnt=0;
						mark[i]=1;
						choose++;
					}
				}
				i++;
				if(i==n)i=0;				
			}
			if(mark[12]==0)
			{
				cout<<m<<endl;
				break;
			}
		}

	}		
	return 0;	
}
