#include <iostream>
#include <string> 
//�p�G�@��N�i���ơiabc�j�O (N-1) �����ơA�h (a + b + c) �]�O(N-1) ������!!!
using namespace std;

int main()
{
	string snum;
	int flag;
	while(getline(cin, snum))
	{
		//	�]62�i�� 
		for(int i=1; i<=62; i++)
		{
//			��
			int sign=0;
			long long num=0;
			int tmp=0;
			flag=0;
			sign=0;
			for(int j=snum.length()-1; j>=0; j--)
			{
//				���� 
				if(snum[j]>='0' && snum[j]<='9') tmp=snum[j]-'0';
				else if(snum[j]>='A' && snum[j]<='Z') tmp=snum[j]-'A'+10;
				else if(snum[j]>='a' && snum[j]<='z')  tmp=snum[j]-'a'+36;
				else continue;
//				�P�_�O�_�i�ର��base 
				if(tmp>=i)
				{
					flag=1;
				}
//				(a+b+c) 
				num+=tmp;
//				cout<<num<<endl;
			}
			//Ų�w�O�_�ŦX(�`�N����%0!!!) 
			if((i-1!=0) && num%(i-1)==0 && !flag)
			{
				cout<<i<<endl;
				flag=2;
				break;
			}
		}
		if(flag!=2)
			cout<<"such number is impossible!"<<endl;
	} 
 } 
