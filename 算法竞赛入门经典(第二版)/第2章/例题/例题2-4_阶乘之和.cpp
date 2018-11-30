//例题2-4：阶乘之和
#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;

static int maxn=1;
int *fact;
int Fact(int n){
    if(n<maxn)return fact[n];
    else{
        fact=(int*)realloc(fact,(n+1)*sizeof(int));
        for(;maxn<=n;maxn++)fact[maxn]=maxn*fact[maxn-1]%1000000;
        return fact[n];
    }
}
int main(){
    fact=(int*)malloc(maxn*sizeof(int));
    fact[0]=1;
    int sum=0,n,t;
    cin>>n;
    for(int i=1;i<=n;i++){
        t=sum;
        sum+=Fact(i);
        sum%=1000000;
        if(t==sum)break;
    }
    cout<<sum<<endl;
    return 0;
}
