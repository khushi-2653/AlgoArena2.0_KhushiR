#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<list<int>> adj(n+1);
    int m,a,b;
    cin>>m;
    while(m--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        //adj[b][a]=1;
    }
    vector<int> side(n+1, 0);
    queue<int> q;
    int flag=0;
    for (int st = 1; st <=n; ++st) {
        
        if (side[st] == 0) {
            q.push(st);
            side[st] = 1;
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (auto u : adj[v]) {
                    //cout<<u<<" "<<v<<endl;
                        //cout<<u<<" "<<v<<endl;
                        if (side[u] == 0) {
                            side[u] = side[v]*(-1);
                            //cout<<side[u]<<endl;
                            q.push(u);
                        } 
                        else if(side[u]==side[v]){
                            flag=1;
                        }
                }
            }
        }
    }
    //cout<<side[n-1]<<endl;
    if(flag) cout<<"IMPOSSIBLE";
    else{
        for(int i=1;i<=n;i++){
            if(side[i]==-1) cout<<2<<" ";
            else cout<<side[i]<<" ";
        }
    }
 return 0;
}
