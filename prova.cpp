#include <iostream>
using namespace std;
 int main(){
    double a =2.5;
    double* pa = &a;
    cout<<"a= "<<a<<" &a="<<pa<<endl;
    *pa=3.1;
    cout<<"a= "<<a<<" &a="<<pa<<endl;
    double b=6.6;
    double *pb = &b;
    cout<<"b= "<<b<<" &b="<<pb<<endl;

    *pb=*pa;
    cout<<"a= "<<a<<" &a="<<pa<<endl;
    cout<<"b= "<<b<<" &b="<<pb<<endl;
    
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(int*)<<endl;
    cout<<sizeof(double*)<<endl;
    cout<<sizeof(bool)<<endl;

 }