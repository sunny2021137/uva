#include <iostream>
#include <algorithm>
//50 
using namespace std;

//ㄌmodネ 
//mod案案案 

int m;
bool cmp(int x, int y) {
	if(x%m==y%m)
	{
		if(x%2==0 && y%2==0) return x<y;
		else if(x%2!=0 && y%2!=0) return x>y;	//硂柑ぃ璶糶x%2==1 && y%2==1璽计%2-1!!!!!! 
		else return (y%2==0);	//硂柑琌ぃ璶糶x%2==1!!! 
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
