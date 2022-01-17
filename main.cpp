#include <iostream> 
#include <cmath>

using namespace std;

int main()
{

	float a, b, c; 
    cout << "Witaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    cin >> a >> b >> c;

	if(a == 0){
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl;
	}
  // nieporzebnie wykonujesz obliczenia
  // jeżeli a = 0 to nie ma sensu wykowywać innych obliczeń itd
	float delta = b * b - 4 * a * c;
	
	if(  delta < 0 ){
        cout << "Nie ma rozwiazan " << endl;
	}
	float one = (- b) / (2 * a);
	
	if (delta == 0){
        cout << "Pierwiastek wynosi: " << one << endl;
    }
	float z = ((-b) - sqrt(delta)) / (2 * a); 

    float y = ((-b) + sqrt(delta)) / (2 * a);
	
	if (delta > 0){
        cout << " Pierwszy pierwiastek wynosi: "<< z << endl;
        cout << " Drugi pierwiastek wynosi : "<< y << endl;
    }
}	


  

