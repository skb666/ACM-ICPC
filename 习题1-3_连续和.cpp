//习题1-3：连续和
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)sum+=i;
    printf("%d\n",sum);
    return 0;
}
