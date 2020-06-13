#include<iostream>
using namespace std;
int main (){
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n;i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min != i){
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }

    for (int i = 0; i < n;i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}