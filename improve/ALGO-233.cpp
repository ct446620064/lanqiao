/*
资源限制
时间限制：1.0s   内存限制：256.0MB
------------------------------------------------
问题描述
　　输入两个字符串，将其合并为一个字符串后输出。
------------------------------------------------
输入格式
　　输入两个字符串
------------------------------------------------
输出格式
　　输出合并后的字符串
------------------------------------------------
样例输入
一个满足题目要求的输入范例。
Hello

World
------------------------------------------------
样例输出
HelloWorld
------------------------------------------------
数据规模和约定
　　输入的字符串长度0<n<100
*/
#include<iostream>
using namespace std;
char arr[100];
char brr[100];
void solve(){
    int i = 0;
    while (arr[i]!='\0'){
        i++;
    }
    int j = 0;
    while (brr[j]!='\0'){
        arr[i] = brr[j];
        i++;
        j++;
    }
    arr[i+j] = '\0';

    cout << arr;
}
int main (){
    cin >> arr;
    cin >> brr;
    solve();
    return 0;
}