
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    while(cin>>str){
            int c =0;
        for(int i=str.length()-1;i>=0;i--){
            st+=str[i];

        }
         if(st==str)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
        st.clear();


    }
    return 0;
}
