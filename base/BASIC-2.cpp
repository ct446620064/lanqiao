    #include<iostream>
    using namespace std;
    void print(int i){
        int ret[5]={0,0,0,0,0};
        int j = 0;
        while (i){
            ret[j] = i % 2;
            i = i / 2;
            j++;
        }


        for (int k = 4; k>=0;k--)
            printf("%d", ret[k]);
        printf("\n");
    }


    int main (){

        for (int i = 0; i < 32;i++)
        {
            print(i);
        }

        return 0;
    }