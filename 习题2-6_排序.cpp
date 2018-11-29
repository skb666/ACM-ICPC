//习题2-6：排序
#include<iostream>
using namespace std;

int main(){
    int t1,t2,t3,d,e,f,g,h,i;
    for(int a=1;a<=9;a++){
        for(int b=1;b<=9;b++){
            for(int c=1;c<=9;c++){
                if(a==b||a==c||b==c)continue;
                t1=a*100+b*10+c;
                t2=t1*2;
                t3=t1*3;
                if(t2>999||t3>999)continue;
                else{
                    d=t2/100;
                    e=(t2/10)%10;
                    f=t2%10;
                    g=t3/100;
                    h=(t3/10)%10;
                    i=t3%10;
                    if(d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&e!=f&&e!=g&&e!=h&&e!=i&&f!=g&&f!=h&&f!=i&&g!=h&&g!=i&&h!=i){
                        cout<<a<<b<<c<<' '<<d<<e<<f<<' '<<g<<h<<i<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
