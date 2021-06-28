//13

#include <iostream>

using namespace std;

void add(long long& n)	//ノㄧΑ狡馒 
{
	long long sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	n=sum;
}
int main()
{
	long long n;	//肈ヘ矗程计2,000,000,000ノlong long 
	while(cin>>n)
	{
		if(n==0) break;
		while(n>=10)	//2计 
		{
			add(n);	//计	
		}
		cout<<n<<endl;
	}
	 
} 
