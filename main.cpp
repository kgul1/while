#include <iostream>
/*
 wykonaj przyklad petli while dla i <5
  */

using  namespace  std;
int main() {
    int i=4;
    while(i<=15){
    i++;
    if(i==15){
        cout<<i;
        break;
    }

    }
   cout<<"\ngratulacje wyszles z petli while po i==15";
    return 0;
}

