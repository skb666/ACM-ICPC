//例题1-2：三位数反转
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<(n%10)<<((n/10)%10)<<(n/100)<<endl;
    return 0;
}
