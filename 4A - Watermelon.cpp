#include <iostream>
using namespace std;
 
int main()
{
    int num;
    cin >> num;
    
    if (num%2 == 0 and num != 2) {
        cout << "YES";
    }
    else if (num==2) {
        cout << "NO";
    }
    else {
        cout <<"NO";
    }
}
