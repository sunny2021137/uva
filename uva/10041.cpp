//23 uva10041 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int sum=0;
    int num;
    int temp;
    int mid;
    vector<int> addr;
    cin>>n;
    for(int i=0; i<n; i++)
   {
        sum=0;
        cin>>num;
        mid=num/2;
        for(int j=0; j<num; j++)
       {
             cin>>temp;
             addr.push_back(temp);
        }
        sort(addr.begin(), addr.end());
        for(int j=0; j<num; j++)
       {
              sum+=abs(addr[j]-addr[mid]);
       }
        cout<<sum<<endl;
        addr.clear();
   }
   return 0;
}
