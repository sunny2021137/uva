#include <iostream>
#include <stack>

using namespace std;

//���h���Ӧ�ƥu��0~9�A 10�إi��
//X�G��Ʀr, A�G��Ӧ�ơA M�G�h���̫�@��᪺�ơAN�G���-��� 
//X=10M+A, X-M=N  => 10M+A-M=N  => 9M+A=N  => M=(N-A)/9, "N-A��9�����ơI�I�I" 
 
int main()
{
	long long int n, m;
	int cnt;
	while(cin>>n)
	{
		cnt=0;
		if(n==0) break;
		for(int a=9; a>=0; a--)	//���F�����G�˧� 
		{
			if((n-a)%9==0)
			{
				m=(n-a)/9;	
				if(cnt!=0)
				{
					cout<<" ";
				}
				else cnt++;
				cout<<n+m;	//X=M+N;
			}
		 } 
		cout<<endl;		
	}

} 
