#include<bits/stdc++.h>
using namespace std;

void setup() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    setup();
    vector<int> arr;
    vector<int> nums;
    int n;
    cin>>n;
    while(n>0) {
        arr.push_back(n%10);
        n=n/10;
    }
    int m = 0;
    for (int i = 0; i < 10; i++) {
        nums.push_back(count(arr.begin(), arr.end(), i));
        if (i!=6&&i!=9&&(m<nums[i]))
            m = nums[i];
    }
    int sixNine = nums[6]+nums[9];

    if (sixNine>m) cout<<(sixNine+1)/2;
    else cout<<m;
}