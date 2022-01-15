#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <cstdlib>

using namespace std;

float a, b, c; //zamień na zmienne lokalne
//o co chodzi
int main()
{


    cout << "Witaj! Podaj 3 liczby!" << endl;
    cin >> a >> b >> c;

    float delta = b;
    delta = delta * b;
    delta = delta - 4 * a * c;

    float jeden = (- b) / (2 * a);

    float z = ((-b) - sqrt(delta)) / (2 * a);

    float y = ((-b) + sqrt(delta)) / (2 * a);

    if(a == 0){
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl;
    }
    else if(  delta < 0 ){
        cout << "Nie ma rozwiazan " << endl;
    }
    else if (delta == 0){
        cout << "Pierwiastek wynosi: " << jeden << endl;
    }
    else if (delta > 0){
        cout << " Pierwszy pierwiastek wynosi: "<< z << endl;
        cout << " Drugi pierwiastek wynosi : "<< y << endl;
    }
}

