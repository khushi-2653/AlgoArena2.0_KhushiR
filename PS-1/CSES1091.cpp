#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    multiset<int> price;
    int h,t;
    for(int i=0;i<n;i++){
        cin>>h;
        price.insert(h);
    }
    while(m--){
        cin>>t;
        auto i=price.upper_bound(t);
        if(i!=price.begin()){
            i--;
            cout<<*i<<endl;
            price.erase(i);
        }
        else cout<<"-1\n";
    }
    return 0;
}
