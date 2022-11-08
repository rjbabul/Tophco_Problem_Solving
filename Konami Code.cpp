
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st = "UUDDLRLRBA", str;
    while(cin>>str){

        int c =0;
        if(str.length()<10){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<str.length()-9;i++){
            if(str.substr(i,10)==st)c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
