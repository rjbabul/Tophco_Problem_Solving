
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{

    long int a,b,c;
    while(cin>>a>>b>>c){
        priority_queue<long int > p;
        p.push(a);
        p.push(b);
        p.push(c);
        cout<<p.top()<<endl;

    }
    return 0;
}
