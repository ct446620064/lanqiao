#include<iostream>
using namespace std;

int main (){

    char a[100];
    char b[100];
    cin >> a;
    cin >> b;

    int a_t[100];
    int b_t[100];

    int i = 0;
    while(a[i]!='\0'){
        a_t[i] = a[i] - '0';
        i++;
    }
    int j = 0; 
    while(b[j]!='\0'){
        b_t[j] = b[j] - '0';
        j++;
    }

    // for (int k = 0; k < i;k++)
    // {
    //     cout << a_t[k];
    // }
    // cout << "\n";
    // for (int k=0; k <j;k++)
    // {
    //     cout << b_t[k];
    // }

    int c[120]={0};
    i--;
    j--;
    int k = 0;
    int n = 0;
    while(i!=-1 && j!=-1){
        int t = a_t[i] + b_t[j];
        c[k] = (t+n) % 10;
        n = (t+n) / 10;
        k++;
        i--;
        j--;

       
    }

    while(i != -1){

        int t = a_t[i];
        c[k] = (t+n) % 10;
        n = (t+n) / 10;
        k++;
        i--;
    }
    while(j != -1){
        int t = b_t[j];
        c[k] = (t+n) % 10;
        n = (t+n) / 10;
        k++;
        j--;
    }

    while(n!=0){
        c[k] = n % 10;
        n = n / 10;
        k++;
    }


    for (int m = k-1; m >= 0;m--)
    {
        cout << c[m];
    }

    return 0;
}