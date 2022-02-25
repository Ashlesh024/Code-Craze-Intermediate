#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int val[26];
    int m=-1;
    for(int i=0; i<26; i++) {
        cin >> val[i];
    }
    string str;
    cin >> str;
    for(auto x : str) {
        int j = x-'a';
        m=max(m,val[j]);
    }
    cout << m*str.length();
    return 0;
}
