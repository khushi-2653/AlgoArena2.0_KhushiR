#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<pair<int, int>> mov;
	int start,end;
	for (int i = 0; i < n; i++) {
		cin >> start >> end;
		mov.insert({end,start});
	}
    int m=1;
    auto i=mov.begin();
    int e=(*i).first;
    i++;
    while(i!=mov.end()){
        if((*i).second>=e){
            e=(*i).first;
            m++;
        }
        i++;
    }
    cout<<m<<endl;
}
