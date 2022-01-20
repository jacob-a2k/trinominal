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
		float deltaZero = (- b) / (2 * a);
        cout << "Pierwiastek wynosi: " << deltaZero << endl;
	}
	else {
		float xOne = ((-b) - sqrt(delta)) / (2 * a); 
        cout << " Pierwszy pierwiastek wynosi: "<< xOne << endl;
		
		float xTwo = ((-b) + sqrt(delta)) / (2 * a);
        cout << " Drugi pierwiastek wynosi : "<< xTwo << endl;
	}
}	