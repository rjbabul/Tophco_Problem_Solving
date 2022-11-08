
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;

       cin>>n>>m;

        string str;
        vector < int > vt;
        getchar();
        for(int ii=1;ii<=2*n;ii++){
            getline(cin ,str);
            int c =0;
            for(int i=0;i<str.length();i++)if(str[i]>='a' && str[i]<='z')c++;

            vt.push_back(c);
        }
        bool flag=true;
       sort(vt.begin(), vt.end());
       for(int i=0,j=vt.size()-1;i<j; i++,j--){
            if(vt[i]+vt[j]>m)flag=false;

       }
       if(flag)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    return 0;
}
