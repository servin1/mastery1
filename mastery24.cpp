#include <iostream>
using namespace std;

int main () {
 int array [5], acum1=0;

 for(int i=0; i<=4; i++) {
   cout<<"Dame el valor de cada espacio "; cin >> array[i];
   acum1=acum1+array[i];
 }

 cout<<"la suma de dichos números es: "<<acum1<<"" << endl;

return 0;
}
