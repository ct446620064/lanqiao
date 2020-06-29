/*
资源限制
时间限制：1.0s   内存限制：512.0MB
问题描述
　　编写一个程序，首先输入一个整数，例如5，然后在屏幕上显示如下的图形（5表示行数）：
　　* * * * *
　　* * * *
　　* * *
　　* *
　　*

*/
#include<iostream>
using namespace std;
int n;
int main (){
    cin >> n;
    for (int i = n; i >=1 ;i--){
        for (int j = 0; j < i;j++)
        {
            if(j!=i){
                cout << "* ";
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }
        
    return 0;
}