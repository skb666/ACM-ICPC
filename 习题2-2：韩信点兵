//习题2-2：韩信点兵
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a,b,c,count=1,bj;
    while(cin>>a>>b>>c){
        bj=0;
        for(int i=10;i<=100;i++){
            if(i%3==a&&i%5==b&&i%7==c){
                printf("Case %d: %d\n",count,i);
                count++;
                bj=1;
            }
        }
        if(bj==0)cout<<"No answer"<<endl;
    }
    return 0;
}
