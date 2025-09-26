#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    int nums [10];
    int max=0, max_i=0;
    for(int i = 1; i<=9; i++){
        cin>>nums[i-1];
        if (nums[i-1] > max){
            max = nums[i-1];
            max_i = i;
        }
    }
    cout<<max<<"\n";
    cout<<max_i;
}