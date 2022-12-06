#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int i = 0;
	
	do {
		cout << i + 9 << ".) Hello world!!" << endl;
		i = i + 1;
	} while(i < 9);
	
	

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}