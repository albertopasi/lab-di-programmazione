#include <iostream>
std::string print_palindrome(bool b);
bool is_palindrome(const char s[], int length);

int main(){
        std::string a = "anna";
        char arr[a.length()];
        for(int i=0; i<a.length(); i++){
            arr[i]=a[i];
        }
        
        std::cout<<a<<print_palindrome(is_palindrome(arr, a.length()))<<std::endl;
    
}


bool is_palindrome(const char s[], int length){
       int size = length;
    for(int i=0; i<size/2; i++){
        if(s[i]!=s[size-i-1]) return false;
    }
    return true;

}

std::string print_palindrome(bool b){
    if(b){
        return " is palindrome";
    }else{
        return " is not palindrome";
       
    }
}