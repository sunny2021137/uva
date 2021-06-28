//17
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int>b2;
	int sum;
	while(cin>>n)
	{
		if(n==0) break;
		//	base 2
		while(n!=0)
		{
			b2.push_back(n%2);
			n/=2;
		}
		//sum
		sum=0;
		for(int i=0; i<b2.size(); i++)
		{
			sum+=b2[i];
		}
//		¦L
		cout<<"The parity of ";
		for(int i=b2.size()-1; i>=0; i--)
		{
			cout<<b2[i];
		}
		cout<<" is "<<sum<<" (mod 2)."<<endl;
//		clear
		b2.clear();
	}
}

