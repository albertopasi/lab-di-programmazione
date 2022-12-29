#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

void fibonacci(int x, int y, vector<int> &v, int n);
void print(string a, vector<int> v);

int main(){
    vector<int> empty;
    int x {1};
    int y {2};
    int n {100};
    int counter {1};
    bool status {true};
    
    fibonacci(x, y, empty, n);
    for(; counter < empty.size() && status; counter++){
        if(empty[counter - 1] > empty[counter]){
            status = false;
        }
    }
    cout<<"Il valore approssimato di INT_MAX e' :" << empty[counter-2]<<"\n";
    cout<<"Distanza da INT_MAX: " << INT32_MAX - empty[counter - 2]<<"\n";
}

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