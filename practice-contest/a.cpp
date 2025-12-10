#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0); 

using ll = long long; 
#define nn      '\n'  
using namespace std; 

void solve() {   
    ll n, a; cin >> n >> a;
    vector<ll> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    if(v[0] == v[n - 1]) {
        cout << a + 1 << '\n';
    }
    else {
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++ ) {
            if(v[i] > a) cnt1++;
            if(v[i] < a) cnt2++;
        }
        if(cnt1 > cnt2 ) cout << a + 1 << '\n';
        else cout << a - 1 << '\n';
    }
}
int32_t main() {
    FastIO;  
    int test_case = 1; 
    cin >> test_case;  
    while(test_case--) {
        solve();
    }
    return 0;
}