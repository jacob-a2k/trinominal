#include <iostream> 
#include <cmath>
 //zostaw tylko potrzebne biblioteki

using namespace std;

int main()
{

	float a, b, c; 
    cout << "Witaj! Aby obliczyc pierwiastki trojmianu kwadratowego podaj wartosci a, b i c !" << endl;
    //program powinien mówić do czego jest i po co to te trzy liczby 
    cin >> a >> b >> c;

	if(a == 0){
        cout << "Wspolczynnik a nie moze byc rowny " << a << endl;
	}
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
    //nie porzebnie wykonujesz obliczenia nie widzac ile ani jakie bedą pierwiastki
    //napierw trzeba swierdzic jakie jest a jaka delta a potem obliczać
 // uzywaj angielskich nazw zmiennych


  

