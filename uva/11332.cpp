//13

#include <iostream>

using namespace std;

void add(long long& n)	//�Ψ禡���C������ 
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
	long long n;	//�D�ش���̤j�Ƭ�2,000,000,000�A��long long 
	while(cin>>n)
	{
		if(n==0) break;
		while(n>=10)	//�j��2��� 
		{
			add(n);	//�U��Ƭۥ[	
		}
		cout<<n<<endl;
	}
	 
} 
