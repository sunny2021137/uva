//50
//�i�H���i���ΰ}�C�s�A������X�� 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[100];
	int index=0;
	int longest=0;
	while(getline(cin,s[index]))
	{
		if(s[index].length()>longest) longest=s[index].length();	
		index++;
		if(index>=100) break;	//�O�o�n�[�o��A���M�|runtime error!!! 
	}
	
	for(int i=0; i<longest; i++)
	{
		for(int j=index-1; j>=0; j--)
		{
			if(s[j].length()<=i)
			{
				cout<<" ";	//�r����פ����A��X�Ů� 
			}
			else
			{
				cout<<s[j][i];
			}
		}
		cout<<endl;
	}
}
