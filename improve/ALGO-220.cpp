/*
资源限制
时间限制：1.0s   内存限制：256.0MB
----------------------------------------------------
问题描述
　　你的表妹正在学习整数的加法，请编写一个程序来帮助她学习。
该程序调用了一个函数GetTwoInts，由它来返回两个从键盘读入的
100以内的整数，然后计算这两个整数之和，并把答案显示出来。
要求：在主函数中不能使用scanf等函数直接输入这两个整数，
而必须通过调用GetTwoInts函数来完成，在GetTwoInts函数中
可以使用scanf函数。另外，由于该函数必须同时返回两个整数，
因此不能采用函数返回值的方式，而必须采用指针的方法来实现。
----------------------------------------------------　　
输入格式：输入只有一行，即两个100以内的整数。
----------------------------------------------------
输出格式：输出只有一行，即这两个整数之和。
----------------------------------------------------
输入输出样例
样例输入
4 7
----------------------------------------------------
样例输出
11
----------------------------------------------------
*/
#include<iostream>
#include<malloc.h>
using namespace std;
int * GetTwoInts (){
    int a, b;
    cin >> a >> b;
    int * input = (int *)malloc(sizeof(int) * 2);
    input[0] = a;
    input[1] = b;
    return input;
}
void resolve(){
    int * input = GetTwoInts();
    cout << input[0] + input[1];
}
int main (){
    resolve();
    return 0;
}