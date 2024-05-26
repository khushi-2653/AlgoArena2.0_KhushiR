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
typedef unsigned long long int ll;
#define INF 1000000001
// const ll MOD=1000000007;
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int s[n];
    set<pi> set;
    int grains[n];
    //int m = 0, mid = 0;
    for(int i = 0 ; i < n ; i ++){
        cin >> s[i];
        grains[i] = -1;
        set.insert({s[i], i});
        // if(s[i] > m){
        //     m = s[i];
        //     mid = i;
        // }
    }
    
    int runs = n;
    while(runs--){
        pi p = *(set.rbegin());
        set.erase(p);
        int idx = p.sc;
        if(grains[idx] == -1) grains[idx] = s[idx];
        //cout << idx << " " << grains[idx]<< " ";
        
        if(idx < n - 1){
            if(grains[idx + 1] == -1){ 
                grains[idx + 1] =  max(s[idx + 1], grains[idx] - m);
                set.erase({s[idx + 1],idx + 1});
                set.insert({grains[idx + 1],idx + 1});
                //cout << grains[idx + 1] << " + ";
            }
        }
        if(idx > 0){
            if(grains[idx - 1] == -1){ 
                grains[idx - 1] =  max(s[idx - 1], grains[idx] - m);
                set.erase({s[idx - 1],idx - 1});
                set.insert({grains[idx - 1],idx - 1});
                //cout << grains[idx - 1] << " - ";
            }
        }
        //cout << "\n";
    }
    // int runs = n;
    // while(runs--){
    //     if(mid < n - 1){
    //         if(grains[mid + 1] == -1){
                
    //         }
    //     }
    // }
    for(int i = 0 ; i < n; i ++){
        cout << grains[i] << " ";
    }
    return 0;
}
