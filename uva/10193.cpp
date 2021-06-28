#include <iostream>
//23
using namespace std;

//輾轉相除法 
long gcd(long x, long y)
{
	if(y==0) return x;
	return gcd(y, x%y);	
} 
int main()
{
	// 目標: 找公因數
	
	int n;
	long long n1, n2;
	string s1, s2;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			//clear
			n1=0;
			n2=0;
			
			cin>>s1;
			cin>>s2;
			//轉10進位 
			for(int j=0; j<s1.length(); j++)
			{
				n1=n1*2+s1[j]-'0';
			}
			for(int j=0; j<s2.length(); j++)
			{
				n2=n2*2+s2[j]-'0';
			}
			
			//cout
			if(gcd(n1, n2)!=1) cout<<"Pair #"<<i+1<<": All you need is love!"<<endl;
			else cout<<"Pair #"<<i+1<<": Love is not all you need!"<<endl;  
		}
	}
}
