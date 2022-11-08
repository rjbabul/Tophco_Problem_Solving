
#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int t,a,b,c,num,n,x,nn;
    set<int>st;

    set<int> :: iterator it;
    cin>>t;
    while(t--){
        cin>>num>>a>>b>>c;
        n=num;
        if(num%50==0) {
            st.insert((num/50)*c);
        }
        else if(num>50){
            st.insert(((num/50)+1)*c);
             if(num%2==0) {
            st.insert((num/2)*a+c);
        }
        else st.insert(((num/2)+1)*a+c);
        if(num%4==0) {
            st.insert((num/4)*b+c);
        }
        else {
            st.insert(((num/4)+1)*b+c);
            if(num>4){
                x = (num/4)*b;
                nn= num%4;
                if(n>2) st.insert((2*a)+x+c);
                else st.insert(x+a+c);
            }
        }

        }
        else if(num<50) st.insert(c);

        if(num%2==0) {
            st.insert((num/2)*a);
        }
        else st.insert(((num/2)+1)*a);
        if(num%4==0) {
            st.insert((num/4)*b);
        }
        else {
            st.insert(((num/4)+1)*b);
            if(num>4){
                x = (num/4)*b;
                n= num%4;
                if(n>2) st.insert((2*a)+x);
                else st.insert(x+a);
            }
        }

        it= st.begin();
        cout<<*it<<endl;
        st.clear();

    }
    return 0;

}
