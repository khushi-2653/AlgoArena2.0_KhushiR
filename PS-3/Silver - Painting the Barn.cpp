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
    int n, k;
    cin >> n >> k;
    int x1, x2, y1, y2;
    int barn[1001][1001] = {0};
    for(int i = 0 ; i < n ; i ++){
        cin >> x1 >> y1 >> x2 >> y2;
        barn[x1][y2] -= 1;
        barn[x1][y1] += 1;
        barn[x2][y2] += 1;
        barn[x2][y1] -= 1;
    }
    int ans = 0 ;
    for(int i = 0 ; i <= 1000 ; i ++){
        for(int j = 0 ; j <= 1000 ; j ++){
            if(i) barn[i][j] += barn[i - 1][j];
            if(j) barn[i][j] += barn[i][j - 1];
            if(i && j) barn[i][j] -= barn[i - 1][j - 1];
            if(barn[i][j] == k) ans++;
        }    
    }
    cout << ans;
    return 0;
}
