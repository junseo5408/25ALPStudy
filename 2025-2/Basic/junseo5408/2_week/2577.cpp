#include<bits/stdc++.h>
using namespace std;

void setup() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    setup();
    vector<int> arr;
    int a,b,c;
    cin>>a>>b>>c;
    int s = a*b*c;
    while(s>0) {
        arr.push_back(s%10);
        s = s/10;
    }
    for (int i = 0; i< 10; i++) {
        cout<<count(arr.begin(), arr.end(), i);
        cout << "\n";
    }
}
