#include<iostream>
#include<math.h>
using namespace std;
long long n;
long long sn;
long long nb;
void solve(){
    if(n<=0){
        cout << 0;
        return;
    }
    sn = (long long)sqrt(n);
    nb = pow(sn, 2);
    while (nb<=n){
        sn++;
        nb = pow(sn, 2);
    }
    cout << nb;
}
int main (){
    cin >> n;
    solve();
    return 0;
}