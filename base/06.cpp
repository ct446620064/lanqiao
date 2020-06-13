#include<iostream>
using namespace std;
double fact(double n,double m){
    if(m==0) return 1;
    if(n==m) return m;
    return n * fact(n - 1,m);
    
}

double printc(double n,double k){
    
    if(k>=1){
        double a = fact(n,n-k+1);
        double c = fact(k,1);
        return a/c;
    }else{
        return 1;
    }
}

int main (){
    int n;
    cin >> n;

    for (double j = 0; j < n;j++)
    {
        for (double i = 0; i <= j;i++)
        {       
            if(i!=j){
                cout<<printc(j, i);
                cout << " ";
            }else{
                cout << printc(j, i);
            }
        }
        cout << "\n";
    }


    return 0;
}