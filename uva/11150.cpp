#include <iostream>

using namespace std;

//�̫�@���A�Y�h��~�i�֪Ų~�A�i�H�h�ɤ@�~�Ų~�A�̫��٦^�h1�~ 
//�`�@�ɶW�L�@�~���|��!!

int main()
{
	int n;
	int cnt;
	int notused=0;
	while(cin>>n)
	{
		cnt=n;
		notused=0;
		//��i���X�~�i��
		while(n>=3)
		{
			//�s�i��
			cnt+=n/3;
			//�s�ŪM
			n=n%3+n/3;	
		}
		//�ŪM==2�A�ɤ@�ӪŲ~��A�h�@�~�s�i�� 
		if(n==2)
		{
			cnt++;
		}
		cout<<cnt<<endl;
	}
}
