//51
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	long long pos=0, n=0;
	long long x, sum=0;
	vector<long long> a;
	long long tmp=0;
	
	while(cin>>x)
	{
		//讀數字		
		do
		{
			cin>>tmp;
			a.push_back(tmp);
			n++;
		}while(cin.get()!='\n');
		n--;
//			if(x==0)	//避免未定義錯誤 
//			{
//				if(n==0) cout<<"0"<<endl;
//				else cout<<a[n-1]<<endl;
//			}
//			else
//			{
				for(long long i=0; i<a.size(); i++)
				{					
					sum+=a[i]*n*pow(x,n-1);
					n--;
				}
				//輸出
				cout<<sum<<endl;
//			} 
		
		//歸0
		sum=0;
		pos=0; 
		n=0;
		a.clear();
	}
}
