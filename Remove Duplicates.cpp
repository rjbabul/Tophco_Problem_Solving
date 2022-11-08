
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,st;
    int t;
    cin>>t;
    int k =1;
    while(k<=t && cin>>str){
        map<char, int> mp;
        for(int i=0;i<str.length();i++)mp[str[i]]++;


        cout<<"Case #"<<k++<<":\n";
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]>0){cout<<str[i]<<" "<<mp[str[i]]<<endl; mp[str[i]]=0;}
        }

    }

    return 0;
}
