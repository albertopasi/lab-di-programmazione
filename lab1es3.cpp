#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::string;
using std::endl;

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
    string s= " Il vettore e': ";
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    print(s,arr);
    
    return 0;

}