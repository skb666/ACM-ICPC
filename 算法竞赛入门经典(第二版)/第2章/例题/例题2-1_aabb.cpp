//例题2-1：aabb
#include<iostream>
using namespace std;

int main(){
    int t;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i==j)continue;
            t=i*1100+j*11;
            if((int)sqrt(t)*(int)sqrt(t)==t)cout<<t<<endl;
        }
    }
    return 0;
}
