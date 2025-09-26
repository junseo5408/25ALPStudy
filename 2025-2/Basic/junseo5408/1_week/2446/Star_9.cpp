#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    int n;
    cin >> n;
    int stars = (2*n-1);
    int space = 0;
    for (int i = 0; i < 2*n-1; i++) {
        if (i<n) {
            if (i!=0) {
                stars-=2;
                space++;
            }
        }
        else {
            stars+=2;
            space--;
        }
        for (int j = 0; j < space; j++) {
            cout<<" ";
        }
        for (int j = 0; j < stars; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}