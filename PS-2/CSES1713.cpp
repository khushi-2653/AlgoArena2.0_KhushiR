#include <bits/stdc++.h>
#define pb push_back
#define int int64_t
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ll;
const int MAXN = 10000000;
int spf[MAXN+1];
vector<int> V;
void Sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
  
    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = 2 * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    Sieve();
    while(n--){
        cin>>x;
        int div_num = 1;
		while (x != 1) {
			int prime = spf[x];
			int count = 0;
			while (x % prime == 0) {
				count++;
				x /= prime;
			}
			div_num *= count + 1;
		}
		cout << div_num << '\n';
    }
    return 0;
}
