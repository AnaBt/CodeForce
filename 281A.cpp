#include <iostream>
#include <cctype>

using namespace std;

int main()
{
   string palavra;
   string letra;
   
    cin >> palavra;
    char ch = toupper(palavra[0]);
    palavra[0] = ch;
    
    cout << palavra;
  
}
