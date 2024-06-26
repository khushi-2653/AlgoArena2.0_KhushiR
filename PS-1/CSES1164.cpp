#include <bits/stdc++.h>
#define pb push_back
#define int int64_t
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(3));
    vector<int> alloc(n,0);
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v[i][0]=a;
        v[i][1]=b;
        v[i][2]=i;
    }
    sort(v.begin(),v.end());
    int rooms=1;
    alloc[v[0][2]]=1;
    pq.push({v[0][1],1});
    pi p;
    for(int i=1;i<n;i++){
        p=pq.top();
        //cout<<p.fr<<endl;
        if(v[i][0]>p.fr){
            pq.pop();
            pq.push({v[i][1],p.sc});
            alloc[v[i][2]]=p.sc;
        }  
        else{
            rooms++;
            pq.push({v[i][1],rooms});
            alloc[v[i][2]]=rooms;
        }
    }
    cout<<rooms<<endl;
    for(int i=0;i<n;i++){
        cout<<alloc[i]<<" ";
    }
    return 0;
}
