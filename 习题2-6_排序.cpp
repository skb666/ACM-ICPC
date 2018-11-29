//习题2-6：排序
#include<iostream>
using namespace std;

int main(){
    int t1,t2,t3,e,f,g,h,i,j;
    for(int a=1;a<=9;a++){
        for(int b=1;b<=9;b++){
            for(int c=1;c<=9;c++){
                if(a==b||a==c||b==c)continue;
                t1=a*100+b*10+c;
                t2=t1*2;
                t3=t1*3;
                if(t2>999||t3>999)continue;
                else{
                    e=t2/100;
                    f=(t2/10)%10;
                    g=t2%10;
                    h=t3/100;
                    i=(t3/10)%10;
                    j=t3%10;
                    if(e!=f&&e!=g&&e!=h&&e!=i&&e!=j&&f!=g&&f!=h&&f!=i&&f!=j&&g!=h&&g!=i&&g!=j&&h!=i&&h!=j&&i!=j){
                        cout<<a<<b<<c<<' '<<e<<f<<g<<' '<<h<<i<<j<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
