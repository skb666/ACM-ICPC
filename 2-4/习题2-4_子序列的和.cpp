//习题2-4：子序列的和
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long long int n,m;
    double sum,t;
    int count=1;
    while((cin>>n>>m)&&(n!=0&&m!=0)){
        sum=0;
        for(int i=n;i<=m;i++){
            if(i<=5e4)sum+=1.0/(i*i);
        }
        if(sum>=1e-5)printf("Case %d: %.5lf\n",count,sum);
        else printf("Case %d: %.5lf\n",count,1e-5);
        count++;
    }
    return 0;
}
