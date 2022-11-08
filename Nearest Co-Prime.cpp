 #include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    while(cin>>n){
        x=n+1;
        while(__gcd(x,n)!=1)x++;
        cout<<x<<endl;
    }
    return 0;
}
