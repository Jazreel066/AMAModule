#include <cstdlib>
#include <iostream>

using namespace std;

int getMyfaveNumber() {
	return 777;
}
int sum(int a, int b) {
	return a + b;
}

int main() {
	
	int n = getMyfaveNumber();
	  
	cout << " My Favorite number is:  " << sum(91, 23) << endl;
	
	  
	// Print a new line and ask user for any key before exiting
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}