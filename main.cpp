#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <conio.h>

using namespace std;

void trinomial_calculations();
void choice();

int main(){

    for(;;){
		trinomial_calculations();
		choice();
    }
}
void trinomial_calculations(){
    float a, b, c;
    cout << "\nWitaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    cin >> a >> b >> c;

	while (a == 0) {
        cout << "Wspolczynnik a nie moze byc rowny 0\n";
		cout << "\nPodaj inna wartosc a!" << endl;
		cin >> a;
	}

	float delta = b * b - 4 * a * c;

	if (delta < 0) {
        cout << "Nie ma rozwiazan " << endl;
	}
	else if (delta == 0) {
		float x1 = (-b) / (2 * a);
        cout << "Pierwiastek wynosi: " << x1 << endl;
	}
	else {
		float x1 = ((-b) - sqrt(delta)) / (2 * a);
        cout << " Pierwszy pierwiastek wynosi: "<< x1 << endl;

		float x2 = ((-b) + sqrt(delta)) / (2 * a);
        cout << " Drugi pierwiastek wynosi : "<< x2 << endl;
	}
}
void choice(){

    cout << endl;
	cout << "Czy chcesz ponownie obliczyc pierwiastki trojmianu kwadratowego?";
	cout << "\nWcisnij t aby ponownie dokonac obliczen!";
	cout << "\nWcisnij n aby zakonczyc program!" << endl;

    char option = getch();

	switch(option){
    case 't':
    break;

    case 'n':
        exit(0);
    break;

    default: cout << "Nie ma takiej opcji" << endl;
        exit(0);//tutaj w sumie jest blad 'n' jest tożsame z dowolnym znakiem 
		//wiec ty nie powino być zakończenia
		//tylko defakto ponowna proba pobrania znaku
	}
}
