#include <iostream>

using namespace std;

//最後一次，若多兩瓶可樂空瓶，可以多借一瓶空瓶，最後還回去1瓶 
//總共借超過一瓶都會虧!!

int main()
{
	int n;
	int cnt;
	int notused=0;
	while(cin>>n)
	{
		cnt=n;
		notused=0;
		//算可換幾瓶可樂
		while(n>=3)
		{
			//新可樂
			cnt+=n/3;
			//新空杯
			n=n%3+n/3;	
		}
		//空杯==2，借一個空瓶湊，多一瓶新可樂 
		if(n==2)
		{
			cnt++;
		}
		cout<<cnt<<endl;
	}
}
