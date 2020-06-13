#include<iostream>
using namespace std;

int n;
int a[100];

int iszore(){
    for (int i = 0; i < n;i++)
    {
        if(a[i]!=0){
            return 0;
        }
    }
    return true;
}

int minfunc(){



    int min=0;
    for (int i = 0; i < n;i++)
    {
        if(a[i]<a[min] && a[i]!=0){
            min = i;
        }
    }

    int min_value = a[min];
    a[min] = 0;


    int min2=0;
    for (int i = 0; i < n;i++)
    {
        if(a[i]<a[min2] && a[i]!=0){
            min2 = i;
        }
    }
    int min_value2 = a[min2];
    a[min2] = 0;
    int sum = min_value + min_value2;
    if(iszore()){
        return sum;
    }

   

    return sum + minfunc();
}

int main (){

    cin >> n;

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    cout << minfunc();


    return 0;
}