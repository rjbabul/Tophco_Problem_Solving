#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1003],b[1003];
    while(cin>>n){

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a, a+n);
        sort(b, b+n);
        int j=0;
        for(int i=n-1;i>=0;i--){
            b[j]+= a[i];
            j++;
        }
        for(int i=0;i<n;i++){
            cout<<b[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
