#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, s,d,x,y ;
    cin>>t;
    while(t-- && cin>>n>>m){
            vector<int > vt[10005];
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        cin>>s>>d;
        int level[10005],visit[10005];
        memset(visit, 0 ,sizeof(visit));
        level[s]=0;

        queue<int> p;
        p.push(s);
        while(!p.empty()){
            x=p.front();
            visit[x]=1;
            p.pop();
            for(int i=0;i<vt[x].size();i++){
                if(visit[vt[x][i]]==0){
                    level[vt[x][i]]=level[x]+1;
                    //cout<<vt[x][i]<<" ";
                    p.push(vt[x][i]);
                    visit[vt[x][i]]=1;
                }
            }
        }
        cout<<level[d]<<endl;
    }
    return 0;
}
