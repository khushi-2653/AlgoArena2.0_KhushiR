#include <bits/stdc++.h>
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
        int n, x;
        cin >> n >> x;
        vi h(n); 
        vi s(n);
        loop(n) cin >> h[i];
        loop(n) cin >> s[i];
        vector<vi> dp(n + 1, vi(x + 1, 0));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j<= x ; j++){
                dp[i][j] = dp[i - 1][j]; //did not buy curr book
                if(h[i - 1] <= j){
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i - 1]] + s[i - 1]);
                }
            }
        }
        cout << dp[n][x] << "\n";
    }
    return 0;
}
