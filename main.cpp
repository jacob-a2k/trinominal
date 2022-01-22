#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	float a, b, c; 
    cout << "\nWitaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    cin >> a >> b >> c;

	while (a == 0) {
		//nie musisz a wypisywaæ przecie¿ wiadomo jak¹ martoœæ
		//skróæ komunikat
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl; 
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
	return 0;
}	