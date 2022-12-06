#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int  main() {
	
		int a = 123;
		int b = 1;
		
		if (b == 1) {
			a = a * 1;
		} else if (b == 2) {
			a = a * 2;
		} else {
			a = a * 3;	
		}
	
		cout << "a:" << a << endl;
		
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}