
// n one step the elephant can move 1, 2, 3, 4 or 5 
 
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int casa_amigo;
    int contador;
    cin >> casa_amigo;
    
    
    for (int num = 5 ; num >= 1 ; num--){
         
         while(casa_amigo >= num ){
             //cout << casa_amigo << "-" << num << "=" << casa_amigo - num << endl;
             casa_amigo -= num ;
             contador ++;
             
            }
    
}
        cout << contador;
}
