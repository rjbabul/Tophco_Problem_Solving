
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    while(cin>>str){
            int c =0;
        for(int i=str.length()-1;i>=0;i--){
            st+=str[i];
            c++;
            if(c==3 && i!=0){
                st+=',';
                c=0;
            }
        }
         for(int i=st.length()-1;i>=0;i--){
          cout<<st[i];
        }
        cout<<endl;
        st.clear();


    }
    return 0;
}
