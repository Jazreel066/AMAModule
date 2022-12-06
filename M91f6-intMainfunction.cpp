#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "box.h"

using namespace std;

	int main() {
		Box box(2, 3, 4);
		cout << "The Volume of our box is ";
		cout << box.getVolume() << "." << endl;
		
		
		
	
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}