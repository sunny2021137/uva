#include <iostream>
#include <algorithm>
//50 
using namespace std;

//��mod�ͧ� 
//�Pmod�A�_���󰸡A�j�_����p�_�A�p������j�� 

int m;
bool cmp(int x, int y) {
	if(x%m==y%m)
	{
		if(x%2==0 && y%2==0) return x<y;
		else if(x%2!=0 && y%2!=0) return x>y;	//�o�̤��n�gx%2==1 && y%2==1�A�]���t�_��%2��-1!!!!!! 
		else return (y%2==0);	//�o�̤]�O�A���n�gx%2==1!!! 
	}
	else
	{
		return ((x%m)<(y%m));
	}
}
int main()
{
	int n;
	while(cin>>n>>m)
	{
		cout<<n<<" "<<m<<endl;
		if(n==0 && m==0) break;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n, cmp);
		for(int i=0; i<n; i++)
			cout<<a[i]<<endl; 
	}
} 
