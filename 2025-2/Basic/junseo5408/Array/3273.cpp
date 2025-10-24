#include<bits/stdc++.h>
using namespace std;

void setup() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    setup();
    int n, x, num;
    int cnt = 0;
    vector<int> a;
    cin>>n;
    for (int i =0; i<n;i++) {
        cin>> num;
        a.push_back(num);
    }
    cin>>x;
    sort(a.begin(), a.end());
    while (a.size()>0) {
        for (int i = 0; i < a.size(); i++) {
            if (*a.end()+a[i]>x) {
                a.erase(a.end());
                break;
            }
            if (*a.end()+a[i]==x) {
                cnt++;
                a.erase(a.end());
                    a.erase(find(a.begin(), a.end(), a[i]));
                break;
            }
        }
    }
    cout<<cnt;
}