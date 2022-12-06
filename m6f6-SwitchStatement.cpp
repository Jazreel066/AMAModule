#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int a = 123;
	int b = 1;
	
	switch(b) {
		case 1:
			a = a * 1;
			break;
		case 2:
			a = a * 2;
			break;
		case 3:
		case 4:
			a = a * 3;
			break;
		default:
			a = a * 10;
	}
	cout << "a:" << a << endl;



    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}