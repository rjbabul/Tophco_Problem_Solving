
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    while(cin>>n>>m){
            int c=0;
            int f=1;
        for(int i=0;i<n;i++){
            cin>>x;
             if(m<=x) c+=m;
             else{
                f=0;
             }
        }
        if(f==1)
        if(c==60)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
