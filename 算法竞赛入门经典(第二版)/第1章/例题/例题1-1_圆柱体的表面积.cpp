//例题1-1：圆柱体的表面积
#include<iostream>
#include<cstdio>
using namespace std;

#define PI 3.1415926535
int main(){
    double r,h;
    cin>>r>>h;
    printf("Area = %.3lf\n",(2*PI*r*h+2*PI*r*r));
    return 0;
}
