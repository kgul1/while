#include <iostream>
using namespace std;
int main() {
   /*
  napisz krotki porgram wykorzystujacy funkcje break jesli i==3 i<10 ; i++;
    petla ma sie zatrzymac na liczbie
   */
   for(int i=3;i<10;i++){
       if(i==4){
           cout<<i<<endl;
         break;

       }
   }
   cout<<"wyszles z petli for po liczbie 4";

   return 0;
}
