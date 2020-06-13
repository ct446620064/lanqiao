#include<iostream>
using namespace std;

int arr[200][200];
// int arr[200][200]={
//     {1,2,3},
//     {5,6,7},
//     {9,10,11},
//     {23,45,67}
// };
int m, n;//行和列
void vertical(int y,int start,int end){
    for (int i = start; i <= end;i++)
    {
        if(i<end){
            cout << arr[i][y]<<" ";
        }else{
            cout << arr[i][y];
        }
        
    }
}
void vertical_f(int y,int start,int end){
    for (int i = start; i >= end;i--)
    {   if(i>end){
            cout << arr[i][y]<<" ";
        }else{
            cout << arr[i][y];
        }
        
    }
}
void horizontal(int x,int start,int end)
{
    for (int i = start; i <= end;i++)
    {
        if(i<end){
            cout << arr[x][i]<<" ";
        }else{
            cout << arr[x][i];
        }
    }
}
void horizontal_f(int x,int start,int end)
{
    for (int i = start; i >= end;i--)
    {
        if(i>end){
            cout << arr[x][i]<<" ";
        }else{
            cout << arr[x][i];
        }
    }
}
void solve(){
    int a=m-1, b=n-1, c=0, d=0;//拐点
    int count=0;//方向
    int total = m * n;
    int num = 0;

    while(num < total){
        int r = count % 4;
        if(r==0){
            vertical(d, c, a);
            num += a - c + 1;
            d++;
        }else if(r==1){
            horizontal(a,d,b);
            num += b - d + 1;
            a--;
        }else if(r==2){
            vertical_f(b, a, c);
            num += a - c + 1;
            b--;
        }else if(r==3){
            horizontal_f(c,b,d);
            num += b - d + 1;
            c++;
        }
        count++;
        if(num != total){
            cout << " ";
        }
    }
        
    
}
int main (){
    
    
    cin >> m>>n;
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> arr[i][j];
        }
    }
    // m = 4;
    // n = 3;
    solve();
    return 0;
}