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
//typedef unsigned long long int ll;
#define INF 1000001
//const ll mod=1000000007;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x[n];
    int freq[INF]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        freq[x[i]]++;
    }
    for(int g=INF-1;g>=1;g--){
        int d=0; //how many numbers in range have g as a divisor
        for(int i=g;i<INF;i+=g) d+=freq[i];
        if(d>=2){
            cout<<g<<endl;
            break;
        }
    }
    return 0;
}
