//例题2-5(2-6)：数据统计
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,t,count=1;
    double min,max,sum,aver;
    while((cin>>n)&&n){
        sum=0;
        min=1e25;
        max=-1e25;
        for(int i=0;i<n;i++){
            cin>>t;
            sum+=t;
            if(t>max)max=t;
            if(t<min)min=t;
        }
        aver=sum/n;
        if(count>1)printf("\nCase %d: %.0lf %.0lf %.3lf\n",count,min,max,aver);
        else printf("Case %d: %.0lf %.0lf %.3lf\n",count,min,max,aver);
        count++;
    }
    return 0;
}
