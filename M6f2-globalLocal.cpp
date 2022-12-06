#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int globalA = 2;

int main() {
    int localA = 2;
    cout << "globalA: " << globalA << endl;

    cout << "localA: " << localA << endl;


    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}