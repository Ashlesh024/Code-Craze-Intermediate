#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; cin>>t;
    while(t--) {
        string str;
        cin >> str;
        int o=0,c=0,ans=0;
        int n= str.length();
        for(int i=0; i<n; i++) {
            if(str[i]=='(') {
                o++;
            }
            else if(str[i]==')') {
                if(o) o--;
                else c++;
            }
        }
        cout << o+c << endl;
    }
    return 0;
}
