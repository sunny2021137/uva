//16
#include <iostream>
using namespace std;
int main()
{
	long int max=0;
	long int count;
	long int i, j;
	long long int s, b;
	while(cin>>i>>j)
	{
		max=0;
		s=i<j?i:j;	//���F�O�di�Aj��X���ǡA�t�~���ܼƥh�s�d�� 
		b=i<j?j:i;
		for(long long int k=s; k<=b; k++)
		{
			count=0;
			long long int n=k;
			while(n!=1)
			{
				count++;
				if(n%2==1)
				{
					n=3*n+1;
				}
				else
				{
					n/=2;
				}
			}
			count++;
			if(max<count) max=count;
		}
		cout<<i<<" "<<j<<" "<<max<<endl;
		
	}
}

