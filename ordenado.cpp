# -ordenado

#include <iostream>
using namespace std;
int main (){
  int x, y, z, ch, res, su;

  do{
    cout << "Introduce el número más chico." << endl;
    cin >> x;
    cout << "introduce el número mayor." << endl;
    cin >> y;

        if (x<y){ //Un condicional por aquí
          ch=0;
        }

          else {
            cout << endl <<"Escribiste los números de manera incorrecta, intenta de nuevo." << endl;
            ch=10;
          }

  } while (ch==10);

          if(ch==0)
            z=(y-x)+1;
            su=0;

  for (int i=0; i<z; i++){
              res=(x+i);
              su=su+res;
    }

        cout << "La suma de " << x << " hasta " << y <<" es equivalente a " << su <<"." << endl;


return 0;

}
