#include <iostream>

//50
//���D�إi����J���r��⦨sum�ᤣ�j��90000, �ҥH����i��int�h�P�_�Y�i 
using namespace std;

//�h��: �r�� �O�_��9������ 
bool is9Multiple(string & num, int & sum)
{
	for(int i=0; i<num.length(); i++)
		sum+=num[i]-'0';
	if(sum%9==0)return true;
	else return false;
}
//�h��: int �O�_��9������ 
bool is9Multiple(int &num)
{
	int sum=0;
	while(num!=0)
	{
		sum+=num%10;
		num/=10;
	}	
	if(sum%9==0)
	{
		//�U��num 
		num=sum;
		return true;
	}
	else return false;
} 
int main()
{
	string s_num;
	while(cin>>s_num)
	{
		if(s_num=="0")break;
		int degree=0;
		int sum=0;
		//�P�_ 9������ 
		if(is9Multiple(s_num, sum))
		{
			if(sum==9)
			{
				cout<<s_num<<" is a multiple of 9 and has 9-degree "<<1<<"."<<endl;	
			}
			else
			{
				//��degree 
				degree++;
				while(is9Multiple(sum))
				{
					degree++;
					//degree�p�⧹�� 
					if(sum==9)break;
				}
				cout<<s_num<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;	
			}
		}
		else
		{
			cout<<s_num<<" is not a multiple of 9."<<endl;
		}
	}
}
