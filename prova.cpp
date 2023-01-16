#include <iostream>
using namespace std;
 
template <class T>
T findmax(T x, T y){
   return (x > y)? x:y;
}

int main(){
   cout<< findmax(3,7)<<endl;
   cout<< findmax(3.0,7.0)<<endl;
   cout<< findmax(3,7)<<endl;
}