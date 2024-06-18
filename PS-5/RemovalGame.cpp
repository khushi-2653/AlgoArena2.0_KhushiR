#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset2 tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

#define pb push_back
#define int int64_t
#define loop(n) for(int i = 0 ; i < n ; i++)
#define nest(m) for(int j = 0 ; j < m ; j++)
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define INF 1000000001
#define MOD 1000000007
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        int n; cin >> n;
        vi x(n);
        int tot = 0;
        loop(n){
            cin >> x[i];
            tot += x[i];
        }
        vector<vi> dp(n, vi(n, 0));
        // dp[i][j] = max possible diff of scores in i to j
        for(int i = n - 1 ; i >= 0 ; i--){
            for(int j = i ; j < n ; j++){
                if(i == j) dp[i][j] = x[i];
                else{
                    if(i < n - 1 && j > 0) dp[i][j] = max(x[i] - dp[i + 1][j], x[i] - dp[i][j - 1]);
                }
            }
        }
        int score = tot + dp[0][n - 1];
        cout << score / 2 << "\n";
    }
    return 0;
}
