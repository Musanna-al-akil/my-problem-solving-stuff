// https://atcoder.jp/contests/abc156/tasks/abc156_b

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d,k;
    cin >> d>>k;

    cout << floor(log(d)/log(k))+1<<endl;
    
    return 0;
}
