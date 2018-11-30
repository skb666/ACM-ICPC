//习题2-3：倒三角
#include<iostream>
using namespace std;

int main(){
    int n,num;
    cin>>n;
    num=2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)cout<<" ";
        for(int j=0;j<num;j++)cout<<"#";
        num-=2;
        cout<<endl;
    }
    return 0;
}
