#include <iostream>
#include <vector>
//37
using namespace std;

int main()
{
	int n, m;
	int flag;
	vector<int> a;
	
	while(cin>>n>>m)
	{
		a.clear(); 
		flag=0;
		/*
		�`�N: �H�U��boring!!! 
		n=1, m=1 (�D�ت�2.�W�w i>1, �ҥH�u���@��1�O���檺)
		n!=1, m=1 (�۰����G�u�i��O�ۤv,�L�k�����j��)
		n=0, (0�P����Ƭ۰��Ҭ�0) 
		m=0, ���w�q 
		n<m
		*/
		if(n==0 || m==0 || m==1 || n<m) cout<<"Boring!"<<endl;
		else
		{
			a.push_back(n);
				//divide
			while(n!=1)
			{
				//check divide
				if(n%m==0)
				{
					n/=m;
					a.push_back(n);
				}
				else
				{
					cout<<"Boring!"<<endl;
					flag=1;
					break; 
				} 
			}
			//not boring
			if(!flag)
			{
				for(int i=0; i<a.size(); i++)
				{
					cout<<a[i];
					if(i==a.size()-1) cout<<endl;
					else cout<<" ";
				}
			}
		}
	}
 } 
