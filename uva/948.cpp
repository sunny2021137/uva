#include <iostream>
#include <vector>
//95 
using namespace std;

int num1=1, num2=1;
vector<long long> v;

 //�ͦ� 
 void generate()
 {
// 	�ͦ��O��ƦC 
 	long long newNum=num1+num2;
 	v.push_back(newNum);
 	num1=num2;
 	num2=newNum;
 }
 
int main()
{
	int n;
	string s;
	long long num, number;
	v.push_back(num1);
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>num;
//			�Ƥ�
			number=num;
 
//			�M0 
			s="";
//			�ͦ��������O��ƦC
			while(num>num2) generate();

			//��h:���j�O�ƴN�D�j=>�N���|���s�� 
			int flag=0;		//flag==1�N��w�g���}�Y��1 
			int j=v.size()-1;			
			while(j>=0)
			{
				while(v[j]>num && j>=0)
				{
					if(flag==1)s+='0';
					j--;
				}
//				����e�̤j
				if(num!=0)
				{
					flag=1;
					s+='1';
					num=num-v[j];
	//				���e�������A�קK���Ƥ�� 
					j--;		
				} 
			}
			cout<<number<<" = "<<s<<" (fib)"<<endl;
		}
	}
 }

