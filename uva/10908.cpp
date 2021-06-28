#include <iostream>
//60
using namespace std;

int main()
{
	int t, q, m, n;
	while(cin>>t)
	{
		for(int i=0; i<t; i++)
		{
			cin>>m>>n>>q;
			char matrix[m][n];
			for(int j=0; j<m; j++)
				for(int k=0; k<n; k++)
					cin>>matrix[j][k];
			cout<<m<<" "<<n<<" "<<q<<endl;		
			int r, c;
			for(int j=0; j<q; j++)
			{
				cin>>r>>c;
				//連自己都不能算1的情況!!! 
				if(r<0||r>=m||c<0||c>=n)
				{
					cout<<0<<endl;
					continue;
				}
				int cnt=0;	//cnt:外圈數 
				int flag=0;
				
				while(true)
				{
					//檢查新的外圈 
					for(int k=-cnt-1; k<=cnt+1; k++)
					{
						if(r+k>=m || c-cnt-1<0 ||matrix[r+k][c-cnt-1]!=matrix[r][c])
						{
							flag=1;
							break;
						}
						if(r+k>=m || c+cnt+1>=n ||matrix[r+k][c+cnt+1]!=matrix[r][c])
						{
							flag=1;
							break;
						}
						if(r-cnt-1<0 || c+k>=n ||matrix[r-cnt-1][c+k]!=matrix[r][c])
						{
							flag=1;
							break;
						}
						if(r+cnt+1>=m || c+k>=n ||matrix[r+cnt+1][c+k]!=matrix[r][c])
						{
							flag=1;
							break;
						}
					}
					if(flag) break;
					cnt++;
				}
				//算邊長 
				cout<<cnt*2+1<<endl;
			}
			
		} 
	} 
} 
