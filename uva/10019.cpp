// 7 ���D�S���t�ƿ�J�A���ΦҼ{�ɼ�!!! 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	long long binary, hex;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>m;
//			��l�� 
			binary=0;
			hex=0;

			//2
			int temp=m;
			while(temp!=0)
			{
				if(temp%2) binary++;
				temp/=2;
			}
			//16
			while(m!=0)
			{
				int tmp=m%10;
				m/=10;
				while(tmp!=0)
				{
					if(tmp%2) hex++;
					tmp/=2;
				}
			}
			//cout
			cout<<binary<<" "<<hex<<endl;
		}
		
			
	}
 } 
