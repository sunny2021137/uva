#include <iostream>
#include <vector>
//95 
using namespace std;

int num1=1, num2=1;
vector<long long> v;

 //生成 
 void generate()
 {
// 	生成費氏數列 
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
//			備分
			number=num;
 
//			清0 
			s="";
//			生成足夠的費氏數列
			while(num>num2) generate();

			//原則:有大費數就挑大=>就不會有連續 
			int flag=0;		//flag==1代表已經找到開頭的1 
			int j=v.size()-1;			
			while(j>=0)
			{
				while(v[j]>num && j>=0)
				{
					if(flag==1)s+='0';
					j--;
				}
//				找到當前最大
				if(num!=0)
				{
					flag=1;
					s+='1';
					num=num-v[j];
	//				把當前的略掉，避免重複比較 
					j--;		
				} 
			}
			cout<<number<<" = "<<s<<" (fib)"<<endl;
		}
	}
 }

