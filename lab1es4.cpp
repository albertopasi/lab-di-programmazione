#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

void fibonacci(int x, int y, vector<int> &v, int n){
    v.push_back(x);
    v.push_back(y);
    n-=2;
    while(n>0){
        int next = v[v.size()-1] + v[v.size()-2];
        v.push_back(next);
        n--;
    }
    
}

void print(string a, vector<int> v){
    cout<<a;
    cout<<"{";
    for(int i=0; i<v.size(); i++){
        if(i!=v.size()-1){
            cout<<v[i]<<",";
        }else{
            cout<<v[i]<<"}"<<endl;
        }
    }
}

int main(){
    int n,x,y;
    cout<<"Inserire quantita' di numeri di Fibonacci da calcolare: ";
    cin>>n;
    if(n<2){
        cout<<"Errore, la dimensione deve essere almeno 2";
        return 1;
    }
    cout<<"Inserire i due numeri da cui si vuole partire a calcolare la serie: "<<endl;
    cout<<"Primo numero: ";
    cin>>x;
    cout<<"Secondo numero: ";
    cin>>y;
    string str= " Il vettore e': ";
    vector<int> v={};
    
    fibonacci(x,y,v,n);
    
    print(str, v);
    
    return 0;
    
}