#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < 2*n-1; i++) {
        int star;
        int space = (2*n-1);
        if (i<n) {
            star = i+1;
            space = (2*n-2) - 2*i;
        }
        else {
            star = (2*n-1)-i;
            space = -(2*n-2) + 2*i;
        }

        for (int j = 0; j < star; j++) {
            cout<<"*";
        }
        for (int j = 0; j < space; j++) {
            cout<<" ";
        }
        for (int j = 0; j < star; j++) {
            cout<<"*";
        }
        cout << '\n';
    }
}
