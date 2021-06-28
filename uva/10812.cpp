//20
#include <iostream>

using namespace std;

int main()
{
	long long n;
	long long s,d;	//s分數和，d分數差 
	long long smin, smax;	//較高得分smax,較低得分smin 
	//2*smin+d=s;
	//smin=(s-d)/2;
	//smax=s-smin;
	while(cin>>n)
	{
		for(long long i=0; i<n; i++)
		{
			cin>>s;
			cin>>d;
			//不可能的情況:1. sum<d(會造成smin為負數，smax>s)), 2.s-d為奇數(造成smin,smax不為整數)			
			if(s-d<0||(s-d)%2!=0)
			{
				cout<<"impossible"<<endl;
				continue;
			}
			//合法情況
			//2*smin+d=s;
			//smin=(s-d)/2;
			//smax=s-smin; 
			smin=(s-d)/2;
			smax=s-smin;
			cout<<smax<<" "<<smin<<endl;
		}
		
	}
 } 
