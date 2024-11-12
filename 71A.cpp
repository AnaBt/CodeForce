/******************************************************************************

71A - Way Too Long Words , 62 ms , 0 KB

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int tamanho;
    
    
    for (int i = 1 ; i <= num ; i++){
        string palavra;
        cin >> palavra;
        tamanho = palavra.length();
        
        if (tamanho > 10){
        cout << palavra[0] << tamanho -2 << palavra[tamanho-1] << endl;
    }
        else {
            cout << palavra << endl;
        }
    
}
}
