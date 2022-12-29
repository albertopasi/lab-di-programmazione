#include <iostream>

using namespace std;
void print_reference(const int& a, const double& b){
        cout<<a<<endl;
        cout<<b<<endl;
}

void print_pointer( int* a,  double* b){
        cout<<*a<<endl;
        cout<<*b<<endl;
        cout<<"indirizzi: "<<endl<<a<<"    "<<b<<endl;

}

int main(){
    int a=5;
    double b=12.3;
    cout<<"reference: "<<endl;
    print_reference(a,b);
        cout<<"pointer: "<<endl;
    print_pointer(&a,&b); 
    
    return 0;
}