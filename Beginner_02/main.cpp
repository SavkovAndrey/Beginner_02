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
//---------------------������� � ���������---------------------------------------

//(� + b � f / �) + f * a * a �(a + b)



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int a, b, f, x;

	cout << "������� �������� ����������: " << endl;

	cout << "������� �:  ";
	cin >> a;

	cout << endl << "������� b:  ";
	cin >> b;

	cout << endl << "������� f:  ";
	cin >> f;

	cout << "��������� ��������� �� ������� � = (� + b � f / �) + f * a * a �(a + b)" << endl;
	
	x = (a + b - f / a) + f * a * a -(a + b);
	
	cout << "x =  " << x << endl << endl;









	return 0;
}
