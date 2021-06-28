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
		注意: 以下為boring!!! 
		n=1, m=1 (題目的2.規定 i>1, 所以只有一項1是不行的)
		n!=1, m=1 (相除結果只可能是自己,無法脫離迴圈)
		n=0, (0與任何數相除皆為0) 
		m=0, 為定義 
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
