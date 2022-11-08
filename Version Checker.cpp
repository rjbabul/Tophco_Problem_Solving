
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, st;
    cin>>str>>st;
    int a[5],b[5];
    int c =0,r=0,k=0,kk=0;

    for(int i=0;i < str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            r=r*10+(str[i]-'0');
        }
        else{
            a[k++]=r;
            r=0;
        }
    }
    if(r>0)a[k++]=r;
      r=0;
     for(int i=0;i < st.length();i++){
        if(st[i]>='0' && st[i]<='9'){
            r=r*10+(st[i]-'0');
        }
        else{
            b[kk++]=r;
            r=0;
        }
    }
    if(r>0)b[kk++]=r;
    c=0;
    int i;
    for(  i=0;i<k && i<kk;i++) {
        if(a[i]>b[i]){
            c=1;
            break;
        }
        else if(b[i]>a[i]){
            c=2;
            break;
        }
    }
    if(c==0 && i<k)c=1;
    else if(c==0 && i<kk)c=2;
    else if(c==0 && str.length()>st.length()) c=1;
    else if(c==0 && str.length()<st.length()) c=2;

    if(c==1)cout<<str<<endl;
    else cout<<st<<endl;


    return 0;
}
