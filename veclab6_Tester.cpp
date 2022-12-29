#include <iostream>
#include "myvectorlab6.h"

void fill(myvector<int>& vec);
void fill_to_cap(myvector<int>& vec);
using namespace std;

int main(){
    myvector<int> a;
    cout << a.get_size() <<" "<<a.capacity()<<endl;
    myvector<int> b(20);
    cout << b.get_size() <<" "<<b.capacity()<<endl;
    b.reserve(30);
    cout << b.get_size() <<" "<<b.capacity()<<endl;
    b.reserve(29);
    cout << b.get_size() <<" "<<b.capacity()<<endl;
    fill(b);
    cout << b <<endl;
    cout<<"At(10): "<<b.at(10)<<endl;
    myvector<int> c = {1 , 3 ,7, 20 , 74};
    cout << c <<c.get_size() <<" "<< c.capacity()<<endl;
    c.push_back(33);
    cout << c << c.get_size() <<" " << c.capacity()<<endl;
    cout << c.pop_back() << " " << c << c.get_size() <<" " << c.capacity()<<endl;
    fill_to_cap(c);
    cout << c << c.get_size() <<" " << c.capacity()<<endl;
    c.push_back(69);
    cout << c << c.get_size() <<" " << c.capacity()<<endl;
    
}
void fill(myvector<int>& vec){
    for(int a = 0; a < vec.get_size(); a++){
        vec[a] = a +1;
    }
}
void fill_to_cap(myvector<int>& vec){
    for(int a = vec.get_size(); a < vec.capacity(); a++){
        vec.push_back(a + 1);
    }
}