#include <iostream>

using namespace std;

void print_array_length(int *a){
    cout<<sizeof(a)<<endl;
    
}

int main(){
    constexpr int l=10;
    int arr[l];
    cout<<sizeof(arr)<<endl;
    print_array_length(arr);
    
    
    return 0;
}