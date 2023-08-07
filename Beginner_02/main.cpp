#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <memory> 
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <thread> 
#include <chrono> 
#include <algorithm>
#include <numeric>
#include <mutex>
using namespace std;
//---------------------‘ункции и ѕрототипы---------------------------------------

//(а + b Ч f / а) + f * a * a Ч(a + b)



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------—јћј ѕ–ќ√ј-------------------------------------

	int a, b, f, x;

	cout << "¬ведите значение переменных: " << endl;

	cout << "¬ведите а:  ";
	cin >> a;

	cout << endl << "¬ведите b:  ";
	cin >> b;

	cout << endl << "¬ведите f:  ";
	cin >> f;

	cout << "¬ычисл€ем результат по формуле х = (а + b Ч f / а) + f * a * a Ч(a + b)" << endl;
	
	x = (a + b - f / a) + f * a * a -(a + b);
	
	cout << "x =  " << x << endl << endl;









	return 0;
}
