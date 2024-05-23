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
// const ll MOD2=MOD-1;
bool good(int m, int a[], int n, int o){
    for(int i = 0; i <= 20; i++){
        
        int b = (o >> i) & 1;
        
        int cnt = 0;
        
        for(int j = 0; j < m; j++){
            cnt += ((a[j] >> i) & 1);
        }
        if((cnt > 0) != b) return 0;
        for(int j = m; j < n; j++){
            
            cnt -= ((a[j - m] >> i) & 1);
            cnt += ((a[j] >> i) & 1);
            
            if((cnt > 0) != b) return 0;
        }
    }
    return 1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int o = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            o |= a[i];
        }
        int l = 1, r = n;
        while(r - l > 0){
            int m = (l + r) / 2;
            if(good(m, a, n, o)){ 
                r = m;
            }
            else l = m + 1;
        }
        cout << l << "\n";
    }
    return 0;
}
