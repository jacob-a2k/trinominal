#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <cstdlib> //zostaw tylko potrzebne biblioteki

using namespace std;

int main()
{

	float a, b, c; 
    cout << "Witaj! Podaj 3 liczby!" << endl;
    //program powinien mówić do czego jest i po co to te trzy liczby 
    cin >> a >> b >> c;

	float delta = b * b - 4 * a * c;

    //nie porzebnie wykonujesz obliczenia nie widzac ile ani jakie bedą pierwiastki
    //napierw trzeba swierdzic jakie jest a jaka delta a potem obliczać
    float jeden = (- b) / (2 * a);// uzywaj angielskich nazw zmiennych


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

