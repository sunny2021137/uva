#include <iostream>

//35
using namespace std;

int main()
{
	//%7=0 or =6 :weekend
	//%hi=0 && (%7!=0 or 6):

	int t, days, p, h;
	while(cin>>t)
	{
		for(int i=0; i<t; i++)
		{	
			cin>>days;
			int day[days+1]={0};//1-days
			cin>>p;
			
			for(int j=0; j<p; j++)
			{
				cin>>h;
				int mul=1;
				while(true)
				{
					if(h*mul>days) break;
					if(day[h*mul]==0 && (h*mul)%7!=0 && (h*mul)%7!=6) day[h*mul]=1;
					mul++;
				}
			}
			int cnt=0;
			//sun-thurs
			for(int j=1; j<=days; j++)
			{
				if(day[j]) cnt++;
			}
			//cout
			cout<<cnt<<endl;
		}
	}
} 
