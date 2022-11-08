
#include<bits/stdc++.h>
using namespace std;

#define md 1000000007

long long int  typedef i64;
int BigMod(i64 n,i64 p, i64 m){
    i64 num;
    if(p==0) return 1%m;
    if(p%2==0){
        num = BigMod(n,p/2,m);
        return ((num%m)*(num%m))%m;
    }
    else{
        return ((n%m)*BigMod(n,p-1,m)%m)%m;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     long long int t, n,   s,d,x,y ;
    cin>>t;
    while(t-- && cin>>n){

       cout<<BigMod(2,n,md)-1<<endl;
    }
    return 0;
}
