
#include<bits/stdc++.h>
using namespace std;
long long int ar[1000000];
int main()
{
    int n, q,num;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar, ar+n);
    cin>>q;
    while(q--){
        cin>>num;
        cout<<ar[num-1]<<endl;
    }
    return 0;
}
