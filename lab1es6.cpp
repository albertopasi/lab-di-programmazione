#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void call_counter(void){
    static int i= 0;
    cout<<"Numero chiamate: "<<++i<<endl;
}

int main(){
    int n=0;
    cout<<"Numero di chiamate a call_counter: ";
    cin>>n;
    while(n>0){
        call_counter();
        n--;
    }

    return 0;
}