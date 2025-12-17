// https://atcoder.jp/contests/arc088/tasks/arc088_a

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x,y;
    cin >> x>>y;
    int count= 0;
    for(long long i = x;i<=y; i*=2){
    	count++;
    }

    cout<<count<<endl;
    
    return 0;
}
