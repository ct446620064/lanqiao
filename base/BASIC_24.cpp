#include<iostream>
using namespace std;
int main (){
    // 兔子速度、乌龟速度、超过m数、休息时间、跑道长度
    double v1, v2, t, s, l;
    // double v1=10, v2=5, t=5, s=3, l=20; //10 5 5 2 20
    cin >> v1 >> v2 >> t >> s >> l;
    int count = 0;

    // 兔子和乌龟已走路程
    double d1 = 0,d2=0;
    while(d1<l && d2<l){
        if(d1-d2 >= t){
            int d2_s = d2;
            d2 += s*v2;
            
            if(d2>l){
                count += (l-d2_s) / v2;
            }else{
                count += s;
            }
            // cout << s << ":count=" << count << " d1=" << d1 << " d2=" << d2<<" d1-d2:"<<d1-d2<<endl;
        }else{

            int d1_s = d1;
            d2 += v2;
            d1 += v1;
            if(d1>l){
                count += (l-d1) / v1;
            }else{
                count++;
            }
            
            // cout << "1" << ":count=" << count << " d1=" << d1 << " d2=" << d2<<" d1-d2:"<<d1-d2<<endl;
        }
    }
    
    if(d1>d2 && d2<l){
        cout << "R" <<endl<<count;
    }else if(d2>d1 && d1<l){
        cout << "T" <<endl<<count;
    }else if(d1 == d2 && d1 == l){
        cout << "D" <<endl<<count;
    }





    return 0;
}