#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b){
    if(b == 0) return 1;

    if(b % 2 == 1)
        return a * binpow(a, b - 1);

    long long temp = binpow(a, b / 2);
    return temp * temp;
}

int main(){
    //use binpow instead of pow.
    int ans=binpow(2,5);
    cout<<ans;

    return 0;
}
