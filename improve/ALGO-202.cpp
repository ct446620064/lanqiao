/*
资源限制
时间限制：1.0s   内存限制：256.0MB
问题描述
　　给定L,R。统计[L,R]区间内的所有数在二进制下包含的“1”的个数之和。
　　如5的二进制为101，包含2个“1”。
输入格式
　　第一行包含2个数L,R
输出格式
　　一个数S，表示[L,R]区间内的所有数在二进制下包含的“1”的个数之和。
样例输入
2 3
样例输出
3
数据规模和约定
　　L<=R<=100000;
*/

#include<iostream>
using namespace std;
int l, r;
long count=0;
int j = 0;
void solve(){
    for (int i = l; i <= r;i++){
        j = i;
        while(j!=0){
            count += j % 2;
             j /= 2;
        }
    }
    cout << count;
}

int main (){
    cin >> l >> r;
    solve();
    return 0;
}