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
int check(string x, string y, int a, int b){
    vi A;
    int flag = 1;
    for(int i = a ; i <= b ; i++){
        if(x[i] == 'A') A.pb(i);
    }
    int z = 0;
    for(int i = a ; i <= b ; i++){
        if(y[i] == 'A'){
            if(A[z] > i){
                flag = 0;
                break;
            }
            z++;
        }
    }
    if(z != A.size()) flag = 0;
    return flag;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        string x, y;
        cin >> x >> y;
        int flag = 1;
        int a[2] = {0}, c[2] = {0};
        for(int i = 0 ; i < n ; i++){
            if(y[i] == 'C' && x[i] != 'C'){
                flag = 0;
                break;
            }
            if(y[i] == 'A') a[1]++;
            else if(y[i] == 'C') c[1]++;
            if(x[i] == 'A') a[0]++;
            else if(x[i] == 'C') c[0]++;
        }
        if(a[0] > a[1]) flag = 0;
        if(flag){
            c[0] -= c[1];
            int convert = a[1] - a[0];
            int i = 0;
            while(convert > 0){
                if(y[i] != 'C' && x[i] == 'C'){ 
                    x[i] = 'A';
                    convert--;
                }
                i++;
            }
            while(i < n){
                if(y[i] != 'C' && x[i] == 'C'){ 
                    x[i] = 'B';
                }
                i++;
            }
            // cout << x << "\n";
            // int nextA[n] = {0};
            // int next = -1;
            // for(int i = n - 1 ; i < n ; i++){
            //     if(x[i] == 'A') next = i;
            //     nextA[i] = next;
            // }
            // vi A;
            // loop(n){
            //     if(x[i] == 'A') A.pb(i);
            // }
            // int x = 0;
            // loop(n){
            //     if(y[i] == 'A'){
            //         if(A[x] > i){
            //             flag = 0;
            //             break;
            //         }
            //         x++;
            //     }
            // }
            // if(x != A.size()) flag = 0;
            i = 0;
            int prev = 0;
            if(!check(x, y, 0, n - 1)) flag = 0;
            else{
                while(i < n){
                    if(y[i] == 'C'){
                        if(i){
                            if(!check(x, y, prev, i - 1)){
                                flag = 0;
                                break;
                            }
                            else{
                                prev = i + 1;
                            }
                        }
                    }
                    i++;
                }
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
