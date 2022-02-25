#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int arr[n],ans[n],count=0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        count =0;
        for(int j=0; j<i; j++) {
            if(arr[j]<arr[i])
                count++;
            else count =0;
        }
        ans[i]=count+1;
    }
    for(auto x:ans) {
        cout << x << " ";
    }
    return 0;
}
