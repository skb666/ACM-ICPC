//例题1-4：鸡兔同笼
#include<iostream>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m;
    a=(4*n-m)/2;
    b=n-a;
    if(m%2==1||a<0||b<0)cout<<"No answer"<<endl;
    else cout<<a<<" "<<b<<endl;
    return 0;
}
