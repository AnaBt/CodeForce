#include <iostream>

using namespace std;

int main()
{
  
   int total , lugar , a ;
   int count = 0;
   cin >> total >> lugar;
   
   int b = lugar - 1;
   int participantes[total] = {};
   
   for (int i = 0 ; i < total ; i++){
       cin >> a;
       participantes[i] = a;
        
   }
   

   
   //cout << participantes[b] << endl;
   
   for (int pessoa : participantes){
      
       if (pessoa >= participantes[b] && pessoa != 0 ){
           count = count + 1;
           //cout << pessoa << ">=" << participantes[b] << endl;
       };
   }
   cout << count;
}
