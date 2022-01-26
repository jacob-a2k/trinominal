#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <conio.h>

using namespace std;

int main()
{
for(;;)
{
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
    cout << endl;
	cout << "Czy chcesz ponownie obliczyc pierwiastki trojmianu kwadratowego?";
	cout << "\nWcisnij t aby ponownie dokonac obliczen!";
	cout << "\nWcisnij n aby zakonczyc program!" << endl;

    char wybor;
	wybor = getch();

	switch(wybor){
    case 't':
        system("cls");
    break;
    case 'n':
        exit(0);
    break;

    default: cout << "Nie ma takiej opcji" << endl;
        exit(0);
	}
}
}
