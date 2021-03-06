#include <iostream>
using namespace std;

int mcd(int numero1, int numero2) 
{
    int s, t;
    int s_a = 1;
    int s_b = 0;
    int t_a = 0;
    int t_b = 1;

    while (numero2 > 0) 
    {
        int cociente = numero1 / numero2;
        int residuo = numero1 - cociente * numero2;
        numero1 = numero2;
        numero2 = residuo;
        s = s_a - cociente * s_b;
        s_a = s_b;
        s_b = s;
        t = t_a - cociente * t_b;
        t_a = t_b;
        t_b = t;
    }

    s = s_a;
    t = t_a;

    cout << "valor de x: " << s << endl << "valor de y: " << t << endl;
    return numero1;
}


int main() 
{
    int numero1, numero2;
    cout << "Ingresa el primer valor: "; cin >> numero1;
    cout << "Ingresa el segundo valor: "; cin >> numero2;

    int respuesta = mcd(numero1, numero2);
    cout << "El maximo comun divisor de (" << numero1 << ", " << numero2 << ") es: " << respuesta << endl;
}
