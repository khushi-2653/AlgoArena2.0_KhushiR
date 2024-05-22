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
    return res % MOD;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll result = 0;
    for (ll i = 1, j; i <= n; i = j){
        ll q = n / i;
        j = n / q + 1;
        ll one = (((i % MOD) * ((i - 1) % MOD) % MOD) * binpow(2,MOD-2)) % MOD;  
        ll two = (((j % MOD) * ((j - 1) % MOD) % MOD) * binpow(2,MOD-2)) % MOD;
        ll add = (two - one + MOD) % MOD;
        result = (result + (((q % MOD) * add) % MOD)) % MOD;
    }
    cout << result % MOD;
    return 0;
}
// ans is d * [n/d] for all d from 1 to 5
