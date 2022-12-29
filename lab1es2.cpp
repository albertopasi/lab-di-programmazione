#include <iostream>
using namespace std;

  int  d=2;    //scope: tutto il file
  int e;            // tutto il file

int main()
{   
    {   
        int a;    //scope: parentesi riga 9-11
    }
    static int b;      // b c hanno come scope il main
    static int c;
    
    return 0;
}
