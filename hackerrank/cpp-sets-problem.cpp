// https://www.hackerrank.com/challenges/cpp-sets/problem

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i<n;i++){
    	int q1,q2;

    	cin>>q1>>q2;

    	if(q1 == 1){
    		s.insert(q2);
    	}else if(q1 == 2){
    		s.erase(q2);
    	}else{
    		set<int>::iterator itr = s.find(q2);
    		if(itr == s.end()){
    			cout << "No"<<endl;
    		}else{
    			cout << "Yes"<<endl;
    		}
    	}


    }


    
    return 0;
}
