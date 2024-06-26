#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset2 tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

#define pb push_back
//#define int int64_t
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ll;
#define INF 1000000001
const ll MOD=1000000007;
const ll MOD2=MOD-1;
long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll x[n],k[n];
    ll sum = 1 , prod = 1 , num = 1;
    int flag = 1; 
    ll cnt = 1;
    for(int i=0;i<n;i++){
        cin>>x[i]>>k[i];
        num = num * (k[i] + 1) % MOD;
        sum = sum * (binpow(x[i],k[i] + 1) - 1) % MOD * binpow(x[i] - 1,MOD - 2) % MOD;
        if(k[i] % 2 && flag){ 
            cnt = cnt * ((k[i] + 1)/2) % MOD2;
            flag = 0;
        }
        else cnt = cnt * (k[i] + 1) % MOD2;
    }
    if (flag == 1) {
        for(int i = 0; i < n; i++) k[i]/=2;    
    }
    ll num1 = 1;
    for (int i = 0; i < n; i++){
        num1 = num1 * binpow(x[i],k[i]) % MOD;    
    }
    prod = binpow(num1,cnt);
    cout << num << " " << sum << " " << prod ;
    return 0;
}
