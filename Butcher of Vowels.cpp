
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t;
    map<char, int > mp;
    mp['a']=mp['e']=mp['i']=mp['o']=mp['u']=1;
    int sum ;
    while(t-- && cin>>str){
            sum =0;
        for(int i=0;i<str.length();i++){
            sum+= mp[str[i]];
        }
        if(sum>0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
