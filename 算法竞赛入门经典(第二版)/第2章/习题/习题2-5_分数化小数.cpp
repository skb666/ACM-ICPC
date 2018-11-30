//习题2-5：分数化小数
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a,b,c,count=1;
    while ((cin>>a>>b>>c)&&!(a==0&&b==0&&c==0)){
        printf("Case: %d: %d.",count,a/b);
        a%=b;
        for(int i=0;i<c-1;i++) {
            a*=10;
            printf("%d",a/b);
            a%=b;
        }
        int more=((a*10)%b*10)/b;
        if (more>=5)printf("%d\n",(a*10)/b+1);
        else printf("%d\n",(a*10)/b);
        count++;
    }
    return 0;
}
