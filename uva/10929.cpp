//9 .21 
//�g�b�D...�Y�Ʀr�e����0�A0�]�o�L�X��;�Y���Ů�h���L 
//11���ƺ�k�G(�_�Ƭ��M-���Ƭ��M)������Ȭ�11������ 

//1�����ơG����ƬҬ�1�����ơC
//2�����ơG�Ӧ�Ʀr������(�t0)�C
//3�����ơG�U�ӼƦr�M��3�����ơC
//4�����ơG���G��Ƭ�4�����ơC
//5�����ơG�Ӧ�Ʀr��5��0�C
//6�����ơG�U�ӼƦr�M��6������(�P�ɬO2�M3������)�C
//7�����ơG�ѭӼư_�C�T��Ʀr�@�`�A�U�_�Ƹ`�M �P ���Ƹ`�M �۴�A��t�O7�����ơC
//8�����ơG���T��Ƭ�8�����ơC
//9�����ơG�U�ӼƦr�M��9�����ơC
//10�����ơG�Ӧ�Ʀr��0�C
//11�����ơG�_�Ʀ�Ʀr�M�P���Ʀ�Ʀr�M�ۮt��11�����ơC
//12�����ơG�P�ɬO3�M4�����ơC
//13�����ơG�ѭӼư_�C�T��Ʀr�@�`�A�U�_�Ƹ`�M �P ���Ƹ`�M�۴�A��t�O13�����ơC


#include<iostream>

using namespace std;

int main()
{
	string s;
	long long int sum;
	while(cin>>s)
	{
		sum=0;
		for(int i=0; i<s.length(); i++)
		{
			if(i%2==0) sum+=(int)(s[i]-'0');	//�_��
			else  sum-=(int)(s[i]-'0');
		}
		if(s=="0") break; //�O�o�n�Φr��ӧP�_�A�קK'000000000'���� 
		if(sum%11==0)
		{
			cout<<s<<" is a multiple of 11."<<endl;
		}
		else
		{
			cout<<s<<" is not a multiple of 11."<<endl;
		}
	}
}
