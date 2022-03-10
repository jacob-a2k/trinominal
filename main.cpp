#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <limits.h>

using namespace std;

void calculate_trinomial_roots();
void choose_whether_once_more();

int main(){

    for(;;){
		calculate_trinomial_roots();
		choose_whether_once_more();
    }
}
void calculate_trinomial_roots(){

    float a, b, c;
            cout << "\nWitaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
            cin >> a >> b >> c;

    while(!cin.good()){

        cout << "Niepoprawne dane! Spobuj ponownie! " << "\n";

        cin.clear();
        cin.ignore(INT_MAX, '\n');

        cout << "\nWitaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
        cin >> a >> b >> c;
    }


	while (a == 0) {
        cout << "Wspolczynnik a nie moze byc rowny 0\n";
		cout << "\nPodaj inna wartosc a!" << endl;
		cin >> a;
		while(!cin.good()){
            cout << "Niepoprawne dane! Spobuj ponownie! " << "\n";

            cin.clear();
            cin.ignore(INT_MAX, '\n');

            cout << endl;
            cout << "Podaj wartosc a!" << endl;
            cin >> a;
		}
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
void choose_whether_once_more(){

    cout << endl;
    cout << "Czy chcesz ponownie obliczyc pierwiastki trojmianu kwadratowego?";
    cout << "\nWcisnij t aby ponownie dokonac obliczen!";
    cout << "\nWcisnij n aby zakonczyc program!" << endl;

    char option = getch();
    while(option != 't'){
        if(option == 't');
        else if(option == 'n'){
            exit(0);
        }
        else{
            cout << "Nie ma takiej opcji" << endl;
            cin >> option;
        }
    }
}
