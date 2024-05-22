#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset2 tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

#define pb push_back
#define int int64_t
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[n];
        map<int, int> m;
        int p = 0;
        m[0]++;
        for(int i = 0; i < n; i++){
            a[i] = (int)(s[i] - '0');
            p += a[i];
            m[(p - i - 1)]++;
        }
        int ans = 0;
        for(auto itr = m.begin(); itr != m.end(); itr++){
            int x = itr -> second;
            ans += (x * (x - 1)) / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
