
#include<bits/stdc++.h>
using namespace std;
int main()
{
          double n, a,p;
     while(cin>>n>>a){
        double sum =0;

        if(n-a>a) p=a;
        else p=n-a;
        for(double i=1;i<=p;i++){
            sum+= log10((n-p+i)/i);
        }
        if(a==1){
                cout<<(int)log10(n)+1<<endl;

        }
        else
        if(n==a)cout<<1<<endl;
        else
        if(sum==(int)sum)cout<<(int)sum<<endl;
        else
        cout<<(int)sum+1<<endl;

     }
    return 0;
}
