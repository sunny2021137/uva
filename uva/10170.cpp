//24
#include <iostream> 
using namespace std;

//等差級數: 公式太麻煩直接算 
int main()
{
	long long s, d;
	long long num=0;	//天數 
	long long ss;	//某團人數 
	while(cin>>s>>d)
	{
		num=0;
		ss=s;
		while(num<d)
		{
			num+=ss;
			ss+=1; //每團多1人 
		}
		cout<<ss-1<<endl;
	}
}

