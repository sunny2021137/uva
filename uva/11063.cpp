#include <iostream>
//21
using namespace std;

//�ϥ�����map���}�C 

/*A B2-Sequence 
				1. a sequence of positive integers 1 <= b1 < b2 < b3 . . . 
				2. all pairwise sums bi +bj ,where i <= j, are different.*/
int main(){
//	��J 
	int count=0;
	int n;
	int flag;
	while(cin>>n)
	{
		 
		count++;
//		�k�s
//		b>=1 && b<=10000
		int map[20001]={0};
		int num[n];
		flag=0; 
		for(int i=0; i<n; i++)
		{
			cin>>num[i];
//			�ˬd�O�_�ŦXb�n�D!!!!
			if(num[i]<1)
			{
				flag=1;
			} 
//			�M (�`�N�O <= �r)
			if(!flag)
			{
				for(int j=0; j<=i; j++)
				{
	//				�ˬd�ɧ�
					if(num[i]>num[j] || i==j)
					{
//						�ˬd���� 
						if(map[num[i]+num[j]]==0)
						{
							map[num[i]+num[j]]++;
						}
						else
						{	
							flag=1;
							break;
						}	
					}
					else
					{
						flag=1;
						break;
					}
				}	
			}
		}
		if(flag) cout<<"Case #"<<count<<": It is not a B2-Sequence."<<endl;
		else cout<<"Case #"<<count<<": It is a B2-Sequence."<<endl;
		cout<<endl;
		
	}
} 
