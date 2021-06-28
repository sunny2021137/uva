#include <iostream>
///15
using namespace std;

/* 物體做等加速直線運動，現在已知在t時刻物體的速度v,求物體在2t時間內的總位移。
	題目分析：由於是等加速直線運動，在2t內物體的平均
			  速度就是t(時間終點的瞬時速度)時刻時物體的速度。*/ 
//displacement: 位移=平均速度*時間 
	
int main()
{
	int v, t;
	int x;
	while(cin>>v>>t)
	{
		x=v*2*t;
		cout<<x<<endl;
	} 
 } 
