#include <iostream>

//50
//由題目可知輸入的字串算成sum後不大於90000, 所以後續可用int去判斷即可 
using namespace std;

//多形: 字串 是否為9的倍數 
bool is9Multiple(string & num, int & sum)
{
	for(int i=0; i<num.length(); i++)
		sum+=num[i]-'0';
	if(sum%9==0)return true;
	else return false;
}
//多形: int 是否為9的倍數 
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
		//下個num 
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
		//判斷 9的倍數 
		if(is9Multiple(s_num, sum))
		{
			if(sum==9)
			{
				cout<<s_num<<" is a multiple of 9 and has 9-degree "<<1<<"."<<endl;	
			}
			else
			{
				//算degree 
				degree++;
				while(is9Multiple(sum))
				{
					degree++;
					//degree計算完成 
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
