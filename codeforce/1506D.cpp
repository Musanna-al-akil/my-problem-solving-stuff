// https://codeforces.com/problemset/problem/1506/D
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        priority_queue<pair<int,int>> pq;

        map<int,int> mp;

        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        for(auto [x,y]:mp){
            pq.push(make_pair(y,x));
        }
        
        int copy_n = n;

        while(pq.size()>=2){
            auto [cnt1,a] = pq.top();
            pq.pop();

            auto [cnt2,b] = pq.top();
            pq.pop();

            copy_n -=2;
            if(--cnt1){
                pq.push({cnt1,a});
            }

            if(--cnt2){
                pq.push({cnt2,b});
            }
        }


        cout << copy_n<<endl;
    }
    
    return 0;
}
