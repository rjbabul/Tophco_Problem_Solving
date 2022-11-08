
#include<bits/stdc++.h>
#include<queue>
using namespace std;
long long int x[1000004];
int main()
{
    long long int n,r;

    while(cin>>n>>r){
            for(int i=0;i<n;i++){
                cin>>x[i];
            }
            r=r%n;
            if(r==0) cout<<x[0]<<" "<<x[n-1]<<endl;
            else cout<<x[r]<<" "<<x[r-1]<<endl;
            //cout<<c<<endl;
    }
    return 0;
}
