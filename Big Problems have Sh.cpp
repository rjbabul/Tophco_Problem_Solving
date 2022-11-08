
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,sum,k;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0)
        k=n/2;
        else k= n/2 +1;
        sum = (n*(n+1))/2;

            sum  =sum + (k*(2+(k-1)*2))/2;

        cout<<sum<<endl;
    }
    return 0;
}
