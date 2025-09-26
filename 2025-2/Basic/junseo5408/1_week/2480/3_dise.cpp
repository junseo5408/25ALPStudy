#include<bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    if (a==b&&a==c&&b==c) {
        cout<<10000+a*1000;
    }
    else if (a==b)
        cout<<1000+a*100;
    else if (a==c)
        cout<<1000+a*100;
    else if (b==c)
        cout<<1000+b*100;
    else {
        int max;
        if (a>b)
            max=a;
        else if (c>a)
            max=c;
        cout<<max*100;
    }
}