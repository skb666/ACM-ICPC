//习题1-6：三角形
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }else{
        cout<<"not a triangle"<<endl;
    }
    return 0;
}
