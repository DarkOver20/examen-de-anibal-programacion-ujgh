#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()

{
     double a, b, c, x1, x2;
     cout << "Programa para calcular las raices de una ecuacion de 2do grado";
     cout << "Introduzca el valor \"a\": ";
     cin >> a;
     cout << "Introduzca el valor \"b\": ";
     cin >> b;
     cout << "Introduzca el valor \"c\": ";
     cin >> c;
     {
	 if ((pow(b,2)-4*a*c)/(2*a)>0)
     
        x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
     
     cout << "x1 = " << x1 << endl;
	 cout << "x2= no puedo calcular esta raiz"  << endl;
    }
     system ("pause");
     return 0;
}