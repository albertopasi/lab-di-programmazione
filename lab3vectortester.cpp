#include <iostream>
#include "myvector.h"
using namespace std;

myvector fill(int dim);

int main(){
    myvector a (7);
    cout << a.get_size() << endl;
    a[2] = 3.2;
    myvector b = a;
    cout << a << " "<< b<<endl;
    myvector c (8);
    c[7] = {4.5};
    c[6] = {3.0};
    cout << c <<endl;
    c = b;
    cout << c << endl;
    myvector d = fill(10);
    cout << d <<endl;
    myvector e = {3.3 , 4.5 , 665 , 7.6};
    cout << e <<endl;
    e = fill(3);
    cout<<e<<endl;


}

myvector fill(int num){
    myvector vec (num);
    for(double i = 0; i< num;i++){
        if(i == 0){
            vec[i] = 1;
        }else{
            vec[i] = i+1/(i);
        }
    }
    return vec;
}
