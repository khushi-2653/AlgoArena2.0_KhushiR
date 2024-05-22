#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fr pair<int,int>::first
#define sc pair<int,int>::second
#define loop(n) for(int i= 0; i< n; ++i)
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>x>>n;
    int p;
    set<int> pos{0,x};
    multiset<int> dist{x};
    for(int i=0;i<n;i++){
        cin>>p;     
        auto it1=pos.upper_bound(p);
        auto it2=it1;
        it2--;
        dist.erase(dist.find(*it1-*it2));
        dist.insert(p - *it2);
		dist.insert(*it1 - p);
		pos.insert(p);
		cout<<*dist.rbegin()<<" ";
    }
    return 0;
}
