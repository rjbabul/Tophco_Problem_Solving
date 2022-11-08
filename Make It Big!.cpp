
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string str, st, ans;
     int t;
     cin>>t;
     while(t-- && cin>>str){
        st=str;
        sort(st.begin(), st.end());
        reverse(st.begin(), st.end());

        int c=0;
        char d='1';int dd=-1;
        for(int i=0;i<st.length() && c<2;i++){
            if(st[i]!=str[i]){
                    int j=0;
                for( j=str.length()-1;j>=0;j--) if(str[j]== st[i])break;
                  swap(str[j],str[i]);
                  if(d=='1' && dd==-1){d=str[i]; dd=j;}
                  else{
                    if(d== str[i] && (str[j]< str[dd]))swap(str[j], str[dd]);
                  }
                  c++;
            }
        }
        bool flag=false;
        if(c==1){
            for(int i=1;i<str.length();i++)if(str[i]== str[i-1])flag=true;
        }
        if(c==1 && !flag)
            swap(str[str.length()-1], str[str.length()-2]);

        cout<<str<<endl;
     }

    return 0;
}
