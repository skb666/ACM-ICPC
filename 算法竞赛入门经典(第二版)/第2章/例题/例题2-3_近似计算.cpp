//例题2-3：近似计算
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double sum=1,t=3,tmp;
    int flag=-1;
    while(1){
        tmp=1/t;
        sum+=tmp*flag;
        flag=-flag;
        t+=2;
        if(tmp<1e-6)break;
    }
    printf("%.6lf\n",sum);
    return 0;
}
