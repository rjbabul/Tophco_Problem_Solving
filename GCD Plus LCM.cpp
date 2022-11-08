
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0)
            cout<<"true"<<endl;
        else if(b%a==0)
            cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }

    return 0;
}
