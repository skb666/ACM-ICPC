//例题2-2：3n+1问题
#include<iostream>
using namespace std;

int main(){
    __int64 n,count=0;
    cin>>n;
    while(n>1){
        if(n%2)n=3*n+1;
        else n/=2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
