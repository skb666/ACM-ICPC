//习题2-4：子序列的和
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    __int64 n,m;
    double sum;
    int count=1;
    while((cin>>n>>m)&&n&&m){
        sum=0;
        for(__int64 i=n;i<=m;i++)sum+=1.0/(i*i);
        printf("Case %d: %.5f\n",count,sum);
        count++;
    }
    return 0;
}
