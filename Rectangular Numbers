#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin>>n;
    int m=2*n-1;
    int arr[m];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<m/2;i++) {
        for(int j=0;j<=m/2;j++) {
            arr[j]=arr[m-1-j]=n-min(i,j);
        }
        for(int i=0;i<m;i++) {
            cout << arr[i];
        }
        cout<<endl;
    }
    for(int i=0;i<=m/2;i++) {
        for(int j=0;j<=m/2;j++) {
            arr[j]=arr[m-1-j]=n-min(j,n-1-i);
        }
        for(auto x:arr) {
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
