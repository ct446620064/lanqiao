#include<iostream>
using namespace std;
int main (){
    long a = 0;
    cin >> a;
    int y[100];
    int i = 0;
    while (a){
        y[i] = a % 16;
        a /= 16;
        i++;
    }
    if(i==0){
        cout << 0;
    }

    for (i--; i >= 0;i--)
    {
        if(y[i]>9){
            printf("%c", 'A' + y[i] - 10);
        }else{
            cout << y[i];
        }
        
    }

    return 0;
}