# Álgebra-Abstracta-Italo-Kancha-Vilca
Laboratorio 02b

**NOMBRE:** Italo kancha vilca

**grupo:** Ccomp 3-1


 2.- Implementar el Algoritmo Extendido de Euclides:

```c ++
#include <iostream>
using namespace std;

int mcd(int numero1, int numero2) 
{
    int s, t;
    int s_a = 1;
    int s_b = 0;
    int t_a = 0;
    int t_b = 1;

    while (numero2 > 0) //mientras el numero2 que fue ingresado sea mayor que cero, seguira iterando hasta obtener el ultimo valor.
    {
        int cociente = numero1 / numero2; //obtenemos el cociente
        int residuo = numero1 - cociente * numero2; //obtenemos el residuo
        numero1 = numero2; // al numero1 se le asigna el valor del numero2
        numero2 = residuo; // al numero2 se le asigna el valor del residuo
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
    cout << "Ingresa el primer valor: "; cin >> numero1; // ingresamos nuestro primer valor
    cout << "Ingresa el segundo valor: "; cin >> numero2; // ingresamos nuestro segundo valor

    int respuesta = mcd(numero1, numero2);
    cout << "El máximo común divisor de (" << numero1 << ", " << numero2 << ") es: " << respuesta << endl;
}
```

Ejemplo en Consola:

![Demostración](https://user-images.githubusercontent.com/54363893/135954867-b13f7c5b-2401-4c3d-a287-f76ce19383ff.PNG)



---
