//13

#include <iostream>

using namespace std;

void add(long long& n)	//用函式降低複雜度 
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
	long long n;	//題目提到最大數為2,000,000,000，用long long 
	while(cin>>n)
	{
		if(n==0) break;
		while(n>=10)	//大於2位數 
		{
			add(n);	//各位數相加	
		}
		cout<<n<<endl;
	}
	 
} 
