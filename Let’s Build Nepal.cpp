
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin>>t;
    while(t-- && cin>>str){
        map<char , int > mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        if(mp['n']>0 && mp['e']>0 && mp['p']>0 && mp['a']>0 && mp['l']>0)
            cout<<"Maile Nepal banauna sakchhu!!"<<endl;
        else cout<<"Hami sabai milera Nepal Banau hai!!"<<endl;
    }

    return 0;
}
