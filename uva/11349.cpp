#include <iostream>

using namespace std;

/*Definition: 1. elements of it are non-negative
			  2.symmetric with relation to the center of this matrix.
			  3. Any other matrix is considered to be non-symmetric.
*/
int main()
{
	int t;
	string s1, s2;
	long long n;
	double center;
	double add;
	while(cin>>t)
	{
		for(int k=1; k<=t; k++)
		{
						
			cin>>s1>>s2>>n;
			long long matrix[n][n];
//			判斷奇偶 
			if(n%2)
			{
				center=n/2;
				add=0;
			}
			else
			{
				center=n/2-0.5;
				add=0.5;
			}
//			flag=1, 非對稱 
			int flag=0;	
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					cin>>matrix[i][j];
//					檢查是否有負數 
					if(matrix[i][j]<0)
					{
						flag=1;
					}
				}
			}
//			檢查對稱 
			for(int i=0; i<=n/2; i++)
			{
				if(flag) break;
				for(int j=0; j<=n/2; j++)
				{
					cout<<center<<endl;
//					++ && -- (檢查右下左上)
					if(matrix[(int)(center-(i-add))][(int)(center-(j-add))]!=matrix[(int)(center+(i-add))][(int)(n/2-add+(j-add))])
					{
						flag=1;
						break;
					}
//					+- && -+ (檢查右上左下) 
					if(matrix[(int)(center-(i*(-1)+add))][(int)(center-(j-add))]!=matrix[(int)(center+(i*(-1)+add))][(int)(center+(j-add))])
					{
						flag=1;
						break;
					}
				}
				
			}
			if(flag) cout<<"Test #"<<k<<": Non-symmetric."<<endl;
			else cout<<"Test #"<<k<<": Symmetric."<<endl;
		}
	}
 } 
