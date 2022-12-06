#include <cstdlib>
#include <iostream>

using namespace std;

void printSum(int a, int b) {
	cout << "the sum of " << a;
	cout << "and " << b << "is: ";
	cout << a + b << endl;
	
}
int main(){
	
	
printSum(91, 23);

// Print a new line amd ask use for any key before exiting

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}