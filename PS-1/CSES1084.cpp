#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    multiset<int> a;
    multiset<int> b;
    int x;
    while(n--){
        cin>>x;
        a.insert(x);
    }
    int c=0;
    while(m--){
        cin>>x;
        b.insert(x);
    }
    for(auto itr=b.begin();itr!=b.end();itr++){
        x=*itr;
        auto i=a.lower_bound(x-k);
        if(i!=a.end()){
            if((*i)<=x+k){
                c++;
                a.erase(i);
            }
        }
    }
    cout<<c;
    return 0;
}
