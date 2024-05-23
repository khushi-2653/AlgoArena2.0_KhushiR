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
typedef long long ll;
#define INF 1000000001
// const ll MOD=1000000007;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    int a[n];
    int p[n];
    int s[n];
    for(int i = 0 ; i < n ; i ++)  cin >> a[i];
    p[0] = a[0];
    s[n - 1] = a[n - 1];
    for(int i = 1 ; i < n ; i ++) p[i] = __gcd(p[i - 1], a[i]);
    for(int i = n - 2 ; i >= 0 ; i --) s[i] = __gcd(s[i + 1], a[i]);
    int ans = s[1];
    ans = max(ans, p[n - 2]);
    for(int i = 1 ; i < n - 1; i ++){
        int g = __gcd(p[i - 1], s[i + 1]);
        ans = max(ans, g);    
    }
    cout << ans << "\n";
    return 0;
}
