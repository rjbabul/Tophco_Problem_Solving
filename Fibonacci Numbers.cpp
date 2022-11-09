#include<bits/stdc++.h>
using namespace std;
long long int fib[60];
void seive()
{
    fib[1]= fib[2]=1;
    for(int i=2;i<=51;i++) fib[i]= fib[i-1]+fib[i-2];
}
int main()
{

    seive();
    int n;
    while(cin>>n)
    {
        cout<<fib[n]<<endl;
    }
    return 0;
}
