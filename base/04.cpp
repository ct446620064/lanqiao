#include<iostream>
using namespace std;
int main (){
    int n;
    int a[10000];

    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    int count=0;
    for (int i = 0; i < n;i++)
    {
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
        count += a[i];
    }

    cout << max << endl
         << min << endl
         << count << endl;


    return 0;
}