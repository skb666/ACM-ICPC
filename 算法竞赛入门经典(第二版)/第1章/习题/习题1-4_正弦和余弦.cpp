//习题1-4：正弦和余弦
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

#define PI 3.1415926535
int main(){
    int n;
    cin>>n;
    printf("%.3f\n%.3f\n",asin((n*PI)/180),acos((n*PI)/180));
    return 0;
}
