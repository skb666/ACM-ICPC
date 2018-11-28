//习题2-4：子序列的和
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,m,count=1;
    double sum;
    while((cin>>n>>m)&&n&&m){
        sum=0;
        for(int i=n;i<=m;i++)sum+=1.0/((double)i*(double)i);
        printf("Case %d: %.5f\n",count,sum);
        count++;
    }
    return 0;
}
