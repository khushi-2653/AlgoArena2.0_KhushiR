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
#define MOD 1000000007
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        //dp[i][j] - probability of j coins in first i flips
        int n;
        cin >> n;
        vector<long double> p(n);
        loop(n) cin >> p[i];
        int m = n / 2 + 1; //min these number of head reqd
        vector< vector<long double> > dp(n + 1, vector<long double>(m + 1));
        loop(n + 1) dp[i][0] = 1;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]) + dp[i - 1][j - 1] * p[i - 1];
            }
        }
        cout << setprecision(10) << dp[n][m] << "\n";
    }
    return 0;
}
