#include<iostream>
using namespace std;
int main (){
    int a,b,c,d,e,f;
    int sum;
    int in;
    cin >> in;
    for (int i = 10000; i < 1000000; i++)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        e = (i / 10000) % 10;
        f = (i / 100000) % 10;
        sum = a + b + c + d + e + f;
        if (a==f && b==e && c==d && f!=(int)0 && sum==in){
            cout << i<<endl;
        }
        if(a==e && b==d && f==(int)0 && sum==in){
            cout << i<<endl;
        }

    }

    return 0;
}