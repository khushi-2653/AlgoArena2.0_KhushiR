#include <bits/stdc++.h>
#define pb push_back
#define int int64_t
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ll;
ll binpow(ll a, ll b, ll m) {
    if(a==0 && b==0) return 1;
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll a,b,c;
    ll m=1000000007;
    while(n--){
        cin>>a>>b>>c;
        ll p=binpow(b,c,m-1);
        cout<<binpow(a,p,m)<<endl;
    }
    return 0;
}
