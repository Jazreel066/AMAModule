#include <cstdlib>
#include <iostream>

using namespace std;

void printHelloWorld() {
	cout << "Hello World!!" << endl;
} 

int main() {
	
	printHelloWorld();
	
	// Print a new line and ask user for any key before exiting
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}