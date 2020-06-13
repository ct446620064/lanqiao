#include<iostream>
using namespace std;
int main (){
    int a,b,c,d;
    
    for (int i = 1000; i < 10000; i++)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;

        if (a==d && b==c){
            cout << i<<endl;
        }

    }

    return 0;
}