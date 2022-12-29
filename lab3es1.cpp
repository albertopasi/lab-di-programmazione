#include <iostream>

using namespace std;

void f(){
        int arr1[10];
        int* p1 =  &arr1[1];
        int val=0;
        for(int j=-1; j<=8; j++){
                p1[1+j]= val;
                val++;
                cout<<p1[1+j]<<" ";
        }
        cout<<endl;
        
}

void f_illegal(){
        int arr2[10];
        int* p2 =  &arr2[1];
        int val=0;
        for(int j=-10; j<15; j++){
                p2[1+j]= val;
                val++;
                cout<<p2[1+j]<<" ";
        }
        cout<<endl;
}
int main() {
    f();
    f_illegal();
    return 0;
}