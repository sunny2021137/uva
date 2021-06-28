//37 
#include <iostream>

using namespace std;

int cost[36];

//��Ybase cost 
int baseCost(int base, int q)
{
	int c=0;
	while(q!=0)
	{
		c+=cost[q%base];
		q/=base;
	}
	return c;
}
int main()
{
	int n, m, q;
	int c[37];
	int min;
	
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<4; j++)
				for(int k=0; k<9; k++)
					cin>>cost[9*j+k];
			cout<<"Case "<<i+1<<":"<<endl;
			cin>>m;
			for(int j=0; j<m; j++)
			{
				cin>>q;
				//�@�ӭ�base�� �Dmin
				for(int k=2; k<=36; k++)
				{
					c[k]=baseCost(k, q);
					//min
					if(k==2||c[k]<min) min=c[k];
				}
				cout<<"Cheapest base(s) for number "<<q<<":";
				for(int k=2; k<=36; k++)
				{
					//�Lcost=min��base 
					if(c[k]==min)
					{
						cout<<" "<<k;	//�L�k�o���̫�@�ղŦX�̡A�ҥH��" "�bk�e���覡�קK�P�_ 
					}
				}
				cout<<endl;
			}
			//�̫�@�դ��঳���� 
			if(i!=n-1)
				cout<<endl;
		}	
	} 
}
