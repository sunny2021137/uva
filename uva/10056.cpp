//33 重點在導公式 !!! 
//設p為成功機率 ，q為失敗機率 
//在第一回合中，第 i個人贏的機率是 q^(i - 1) * p。
//
//在第二回合中，第 i個人贏的機率是 q^n * q^(i- 1) * p。
//
//在第三回合中，第 i個人贏的機率是 q^2n * q^(i - 1) * p。
//...
//在第r(趨於無限)回合中，第 i個人贏的機率是 q^(r-1)n * q^(i - 1) * p。
//可以看出是等比數列，而我們要求等比級數和。等比級數
//
//等比級數和    =    (首項 * (1 - 公比^(r-1)) )    /    (1 - 公比)
//首項： (q^(i - 1)*p， 公比：q^n 
//P=(q^(i - 1) * p)*(1)/(1-q^n)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int s;
	int n, i;
	double p, q, result;
	while(cin>>s)
	{
		for(int j=0; j<s; j++)
		{
			cin>>n>>p>>i;
//			先將會造成為定義結果可能排除 !!!! 
			if(p==0)
			{
				cout<<"0.0000"<<endl;
				continue;
			}else if(p==1)
			{
				if(i==1) cout<<"1.0000"<<endl;
				else cout<<"0.0000"<<endl;
				continue;
			}
	//		算p
			q=1.0-p; 
			
	//		代公式算機率
			 result=(pow(q,(i-1))*p)/(1-pow(q,n));
	//		轉四位小數輸出
			cout<<fixed<<setprecision(4)<<result<<endl;
		}
}
	return 0;
}
