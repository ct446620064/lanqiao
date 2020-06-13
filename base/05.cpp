#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int p;
    cin >> p;
    int j;
    for (j= 0; j < n;j++)
    {
        if(a[j]==p){
            cout << j+1;
            break;
        }
    }
    if(j==n){
        cout << -1;
    }

    return 0;
}