//33 ���I�b�ɤ��� !!! 
//�]p�����\���v �Aq�����Ѿ��v 
//�b�Ĥ@�^�X���A�� i�ӤHĹ�����v�O q^(i - 1) * p�C
//
//�b�ĤG�^�X���A�� i�ӤHĹ�����v�O q^n * q^(i- 1) * p�C
//
//�b�ĤT�^�X���A�� i�ӤHĹ�����v�O q^2n * q^(i - 1) * p�C
//...
//�b��r(�ͩ�L��)�^�X���A�� i�ӤHĹ�����v�O q^(r-1)n * q^(i - 1) * p�C
//�i�H�ݥX�O����ƦC�A�ӧڭ̭n�D����żƩM�C����ż�
//
//����żƩM    =    (���� * (1 - ����^(r-1)) )    /    (1 - ����)
//�����G (q^(i - 1)*p�A ����Gq^n 
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
//			���N�|�y�����w�q���G�i��ư� !!!! 
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
	//		��p
			q=1.0-p; 
			
	//		�N��������v
			 result=(pow(q,(i-1))*p)/(1-pow(q,n));
	//		��|��p�ƿ�X
			cout<<fixed<<setprecision(4)<<result<<endl;
		}
}
	return 0;
}
