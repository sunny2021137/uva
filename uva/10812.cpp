//20
#include <iostream>

using namespace std;

int main()
{
	long long n;
	long long s,d;	//s���ƩM�Ad���Ʈt 
	long long smin, smax;	//�����o��smax,���C�o��smin 
	//2*smin+d=s;
	//smin=(s-d)/2;
	//smax=s-smin;
	while(cin>>n)
	{
		for(long long i=0; i<n; i++)
		{
			cin>>s;
			cin>>d;
			//���i�઺���p:1. sum<d(�|�y��smin���t�ơAsmax>s)), 2.s-d���_��(�y��smin,smax�������)			
			if(s-d<0||(s-d)%2!=0)
			{
				cout<<"impossible"<<endl;
				continue;
			}
			//�X�k���p
			//2*smin+d=s;
			//smin=(s-d)/2;
			//smax=s-smin; 
			smin=(s-d)/2;
			smax=s-smin;
			cout<<smax<<" "<<smin<<endl;
		}
		
	}
 } 
