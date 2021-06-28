//46
//先算其為當年第幾天，加上位移值%7，即是當天月份 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int m, d;
	int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string s[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//	1/10mon. -> 1/3mon. -> 1/0fri. 
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			int day=0;
			cin>>m>>d;
			for(int i=0; i<m-1; i++)
			{
				day+=days[i];
			}
			day+=d;
			int nd=(day+4)%7;
			cout<<s[nd]<<endl;
		}			
	}
 } 
