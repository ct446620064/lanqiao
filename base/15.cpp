#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    int sum = 0;
    while(n>1){
        int count = a[0] + a[1];
        sum += count;
        a[1] = count;
        for (int i = 0; i < n - 1;i++)
            a[i] = a[i + 1];

        sort(a, a + n-1);
        n--;
    }

    cout << sum;
    return 0;
}