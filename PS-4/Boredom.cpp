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
        int n; cin >> n;
        int freq[100001] = {0};
        int a[n];
        int m = 0;
        loop(n){
            cin >> a[i];
            freq[a[i]]++;
            m = max(a[i], m);
        }
        int dp[m + 1] = {0};
        dp[1] = freq[1];
        for(int i = 2 ; i <= m ; i++){
            dp[i] = max(dp[i - 1], i * freq[i] + dp[i - 2]);
        }
        cout << dp[m] << "\n";
    }
    return 0;
}
