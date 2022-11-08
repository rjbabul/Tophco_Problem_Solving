#include<bits/stdc++.h>
#include<iterator>
#include<vector>
#include<map>
using namespace std;

long int father[500000];
long int people[500000];

typedef pair< int, pair< int, int > > pi;
priority_queue< pi ,vector<pi>, greater<pi> > node;

set<int > st,st1;
map< int , int > mp;
int fnd(int n)
{
    if(father[n]==n)
        return n;
    else
      return father[n]= fnd(father[n]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n,m,d,x;
    int u,v,w,mark;
    vector<long int > vt;
    cin>>n>>m>>d;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        father[i]=i;
        people[i]=x;
        if(x>0)
        vt.push_back(i);
    }
    while(m--)
    {
        cin>>u>>v>>w;
        if(people[u]>0 && people[v]>0)
        {
            node.push(make_pair(w,make_pair(u,v)));
        }
    }

    int xx,yy;

    int sum =0;
    while(!node.empty())
    {
        u = node.top().second.first ;
        v= node.top().second.second;
        w= node.top().first;
        xx=fnd(u);
        yy= fnd(v);
        if(xx!=yy)
        {
            sum+=w;
            father[yy]=xx;
        }
        node.pop();
    }
    int c=0;
    for(int i=1;i<=n;i++) {
        if(people[i]!=0) {
            u= fnd(i);
            if(mp[u]==0){
                c++;
                mp[u]=1;
            }
        }
    }
    c--;
    if(c>0)
        sum+= (c)*d;
    cout<<sum<<endl;

    st.clear();

    return 0;
}
