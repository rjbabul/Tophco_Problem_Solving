
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,st;
    int t;
    cin>>t;
    int k =1;
    while(k<=t && cin>>str>>st){
        vector<char>vt;
        int i, j,c=0;
        for(i=str.length()-1,j=st.length()-1;i>=0 && j>=0 ;i--,j--){
            c+= (str[i]-'0' + st[j]-'0');
            char p = (c%10)+'0';

            vt.push_back(p);
            c=c/10;
        }

        if(i>=0){
            while(i>=0){

            c+= str[i]-'0';
            vt.push_back((c%10)+'0');
            c=c/10;
            i--;
        }
        if(c>0)
        while(c){
            char p = c%10+'0';
            vt.push_back(p);
            c=c/10;
        }
        }
        if(j>=0){
            while(j>=0){
            c+= st[j]-'0';
            vt.push_back((c%10)+'0');
            c=c/10;
            j--;
        }
        if(c>0)
         while(c){
            char p = c%10+'0';
            vt.push_back(p);
            c=c/10;
        }

        }
         if(c>0)
         while(c){
            char p = c%10+'0';
            vt.push_back(p);
            c=c/10;
        }

        i=vt.size()-1;
        while(vt[i]=='0')i--;

        cout<<"Case #"<<k++<<": ";
         if(vt.size()==1){
            cout<<vt[0]<<endl;
            continue;
        }
        for(int ii=i;ii>=0;ii--)cout<<vt[ii];
        cout<<endl;
    }

    return 0;
}
