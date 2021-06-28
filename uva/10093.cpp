#include <iostream>
#include <string> 
//狦N秈计abc琌 (N-1) 计玥 (a + b + c) 琌(N-1) 计!!!
using namespace std;

int main()
{
	string snum;
	int flag;
	while(getline(cin, snum))
	{
		//	禲62秈 
		for(int i=1; i<=62; i++)
		{
//			衡
			int sign=0;
			long long num=0;
			int tmp=0;
			flag=0;
			sign=0;
			for(int j=snum.length()-1; j>=0; j--)
			{
//				癸莱 
				if(snum[j]>='0' && snum[j]<='9') tmp=snum[j]-'0';
				else if(snum[j]>='A' && snum[j]<='Z') tmp=snum[j]-'A'+10;
				else if(snum[j]>='a' && snum[j]<='z')  tmp=snum[j]-'a'+36;
				else continue;
//				耞琌base 
				if(tmp>=i)
				{
					flag=1;
				}
//				(a+b+c) 
				num+=tmp;
//				cout<<num<<endl;
			}
			//挪﹚琌才(猔種ぃ%0!!!) 
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
