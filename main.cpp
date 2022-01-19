#include <iostream> 
#include <cmath>

using namespace std;

int main()
{

	float a, b, c; 
	cout << endl;
    cout << "Witaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    cin >> a >> b >> c;

	if ( a == 0 ){
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl;
	return 0;
	}
	
  // nieporzebnie wykonujesz obliczenia
  // jeżeli a = 0 to nie ma sensu wykowywać innych obliczeń itd
	float delta = b * b - 4 * a * c;
	
	float xOne = ((-b) - sqrt(delta)) / (2 * a); 

    float xTwo = ((-b) + sqrt(delta)) / (2 * a);
		
	if ( delta < 0 ){
        cout << "Nie ma rozwiazan " << endl;
	}
	else if (delta == 0){
		float deltaZero = (- b) / (2 * a);
        cout << "Pierwiastek wynosi: " << deltaZero << endl;
	}
	else if (delta > 0){
        cout << " Pierwszy pierwiastek wynosi: "<< xOne << endl;
        cout << " Drugi pierwiastek wynosi : "<< xTwo << endl;
	}
	return (0);
}	