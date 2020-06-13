#include<iostream>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;

    char c[26];
    for (int i = 0; i < 26;i++)
    {
        c[i] = 'A' + i;
    }
        int l=0, r=m;
        for (int i = 0; i < n;i++)
        {
            int t = 0;
            if (l>m)
                t = i-m;

            for (int i = l; i >t;i--)
            {
                cout << c[i];
            }



            for (int i = 0; i < r;i++)
            {
                cout << c[i];
            }


            l++;

            if(r>0){
                r--;
            }
            
            cout << endl;
        }
        
  



    return 0;
}