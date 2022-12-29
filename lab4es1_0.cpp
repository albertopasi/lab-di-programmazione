#include <iostream>
std::string print_palindrome(bool b);
bool is_palindrome(const std::string& s);

int main(){
    std::string a = "anna";
    std::string b = "antna";
    std::string c = "a";
    std::string d = "asca";
    std::string e = "asc";
    std::string f = "Anna";

    
    std::cout<<a<<print_palindrome(is_palindrome(a))<<std::endl;
    std::cout<<b<<print_palindrome(is_palindrome(b))<<std::endl;
    std::cout<<c<<print_palindrome(is_palindrome(c))<<std::endl;
    std::cout<<d<<print_palindrome(is_palindrome(d))<<std::endl;
    std::cout<<e<<print_palindrome(is_palindrome(e))<<std::endl;
    std::cout<<f<<print_palindrome(is_palindrome(f))<<std::endl;


    return 0;
}

bool is_palindrome(const std::string& s){
    int size = s.length();
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
