#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset2 tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

#define pb push_back
//#define int int64_t
#define loop(n) for(int i = 0 ; i < n ; i++)
#define nest(m) for(int j = 0 ; j < m ; j++)
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define INF 1000000001
// const ll MOD=1000000007;
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int dp[a + 1][b + 1];
        //state represemts number of cuts needed for i x j 
        for (int i = 0; i <= a; i++) {
            for (int j = 0; j <= b; j++) {
                if (i == j) dp[i][j] = 0;
                else{
                    dp[i][j] = INF;
                    for (int k = 1; k < i; k++) {
                        dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
                    }
                    for (int k = 1; k < j; k++) {
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
                    }
                }
            }
        }
        cout << dp[a][b] << endl;
            }
    return 0;
}
