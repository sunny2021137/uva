#include <iostream>
#include <algorithm>
//50 
using namespace std;

//依mod生序 
//同mod，奇先於偶，大奇先於小奇，小偶先於大偶 

int m;
bool cmp(int x, int y) {
	if(x%m==y%m)
	{
		if(x%2==0 && y%2==0) return x<y;
		else if(x%2!=0 && y%2!=0) return x>y;	//這裡不要寫x%2==1 && y%2==1，因為負奇數%2為-1!!!!!! 
		else return (y%2==0);	//這裡也是，不要寫x%2==1!!! 
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
