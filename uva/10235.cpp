#include <iostream>
#include <map>
#include <math.h>
//90
using namespace std;

void makePrimes(long long n, long long &max, map<long long, bool>& M)
{
	map<long long, bool>::iterator it;
	if(max<sqrt(n))
	{
		int j;
		for(int i=max+1; i<=sqrt(n); i++)
		{
			for(it=M.begin(); it!=M.end() && it->first<=sqrt(i); it++)
			{
				if(it->second)
				{
					if(i%(it->first)==0)
					{
						M[i]=false;
						break;
					}
				}
			}
			//prime
			if(it==M.end() ||  it->first>sqrt(i)) M[i]=true;
		}
		max=sqrt(n);
	}
}

bool checkPrimes(long long n, map<long long, bool>& M)
{
	map<long long, bool>::iterator it;
	for(it=M.begin(); it!=M.end() && it->first<=sqrt(n); it++)
	{
		if(it->second)
		{
			if(n%(it->first)==0)
			{
				break;
			}
		}
	}
	if(it==M.end() ||  it->first>sqrt(n)) return true;
	else return false;
}
int main()
{
	map<long long, bool> M;	//存是否為質數 
	long long n;
	long long max=2; //質數檢查到哪數
	M[0]=false;
	M[1]=false;
	M[2]=true;
	while(cin>>n)
	{
		if(n<=1)
		{
			cout<<n<<" is not prime."<<endl;
		}
		else
		{
			//生產質數
			makePrimes(n, max, M);
			if(checkPrimes(n, M))
			{
				//reverse
				long long tmp=n;
				long long rvs=0;
				while(tmp!=0)
				{
					rvs=rvs*10+tmp%10;
					tmp/=10;
				}
				//emirp
				if(rvs==n) cout<<n<<" is prime."<<endl;
				else
				{
					makePrimes(rvs, max, M);
					if(checkPrimes(rvs, M))	cout<<n<<" is emirp."<<endl;
					else cout<<n<<" is prime."<<endl;
				}
				
			}
			else
				cout<<n<<" is not prime."<<endl;
		}
	} 
	
	 
} 
