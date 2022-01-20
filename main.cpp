#include <iostream> 
#include <cmath>

using namespace std;

void main()
{

	float a, b, c; 
	cout << endl;
    cout << "Witaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    cin >> a >> b >> c;

	if ( a == 0 ){
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl;
		return;
	}
	
	float delta = b * b - 4 * a * c;
	
	if ( delta < 0 ){
        cout << "Nie ma rozwiazan " << endl;
	}
	else if (delta == 0){
		float x1 = (- b) / (2 * a);
        cout << "Pierwiastek wynosi: " << x1 << endl;
	}
	else {
		float x1 = ((-b) - sqrt(delta)) / (2 * a); 
        cout << " Pierwszy pierwiastek wynosi: "<< x1 << endl;
		
		float x2 = ((-b) + sqrt(delta)) / (2 * a);
        cout << " Drugi pierwiastek wynosi : "<< x2 << endl;
	}
}	