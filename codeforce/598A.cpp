// https://codeforces.com/problemset/problem/598/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    long long int n;
    cin >> n;

    int two = 1;

    long long int sum = (n * (n + 1)) / 2;

    while (two <= n) {
      sum -= two * 2;

      two *= 2;
    }

    cout << sum << endl;
  }

  return 0;
}