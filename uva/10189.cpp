#include <iostream>
//36
using namespace std;

//¬Û¾F 
int main()
{
	int n, m;
	int f=0;
	while(cin>>m>>n)
	{
		if(m==0 && n==0) break;
		f++;
		if(f!=1) cout<<endl;
		cout<<"Field #"<<f<<":"<<endl;
		char g[m][n];
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>g[i][j];
			}
		}
			
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				//ÀË¬d8Ãä
				int cnt=0;
				if(g[i][j]!='*')
				{
					for(int k=-1; k<=1; k++)
					{
						for(int l=-1; l<=1; l++)
							if(i+k>=0 && i+k<m && j+l>=0 && j+l<n)
							{ 
								if(g[i+k][j+l]=='*')
								{
									cnt++;
								}
							}
					}
					
					cout<<cnt; 
				}
				else cout<<"*";
			}
			cout<<endl;
		}
	}
} 
