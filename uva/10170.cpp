//24
#include <iostream> 
using namespace std;

//���t�ż�: �����ӳ·Ъ����� 
int main()
{
	long long s, d;
	long long num=0;	//�Ѽ� 
	long long ss;	//�Y�ΤH�� 
	while(cin>>s>>d)
	{
		num=0;
		ss=s;
		while(num<d)
		{
			num+=ss;
			ss+=1; //�C�Φh1�H 
		}
		cout<<ss-1<<endl;
	}
}

