
#include<bits/stdc++.h>
using namespace std;

  int main() {
     long long int n,sum,x,m;
     while(cin>>n){
        sum= n*(n+1);
        sum = sum/2;
        cin>>m;
        while(m--){
            cin>>x;
            sum-=x;
        }
        cout<<sum<<endl;
     }

    return 0;
}
