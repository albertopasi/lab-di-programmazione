#include <iostream>
std::string print_palindrome(bool b);
bool is_palindrome(const char* first, const char* last);

int main(){
    std::string a = "abbbba";
        char arr[a.length()];
        for(int i=0; i<a.length(); i++){
            arr[i]=a[i];
        }
        
        std::cout<<a<<print_palindrome(is_palindrome(&arr[0], &arr[a.length()-1]))<<std::endl;
}

bool is_palindrome(const char* first, const char* last){
    for(int i=0; i<(last-first+1)/2; i++){
        if(first[i]!=last[-i]) return false;
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