//#include <iostream>
//#include <vector>
//45 .35
using namespace std;

//不夠右，往左上到底，才能往右一步
//左上到底仍不夠高，往右一步繼續 
//int main()
//{
//	long long n, flag, cnt, sx, sy, dx, dy;
//	while(cin>>n)
//	{
//		for(int i=0; i<n; i++)
//		{
//			cin>>sx>>sy>>dx>>dy;
//			long long x=sx;
//			long long y=sy;
//			long long r=sy;
//			flag=0;
//			cnt=0;
//			
//			while(true)
//			{
//				if(y==dy && x==dx)
//				{
//					break;
//				}
//				if(y>0)
//				{
//					x++;
//					y--;
//				}
//				else
//				{
//					r++;
//					x=0;
//					y=r;
//				}
//				cnt++;
//			}
//			cout<<"Case "<<i+1<<": "<<cnt<<endl;	
//		}
//	}		
//}

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int main()
{
	int T,x1,y1,x2,y2;
	while (~scanf("%d",&T))
	{
		for (int t = 1 ; t <= T ; ++ t) {
		scanf("%d%d%d%d",&y1,&x1,&y2,&x2);
		
		long long n = (x1+y1)*(x1+y1+1LL)/2LL+y1;
		long long m = (x2+y2)*(x2+y2+1LL)/2LL+y2;
		
		printf("Case %d: %lld\n",t,m-n);
	}
	}
    return 0;
}
