//例题1-3：交换变量
#include<iostream>
using namespace std;

int main(){
    int a,b,t;
    cin>>a>>b;
    t=b;
    b=a;
    a=t;
    cout<<a<<" "<<b<<endl;
    return 0;
}
