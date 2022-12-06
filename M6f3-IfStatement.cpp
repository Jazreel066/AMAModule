#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int globalA = 1;

int main() {
    int localA = 2;
    int localB = 3;
    if (1) {
            

            localA = 20;
    }

    cout << "globalA: " << globalA << endl;
    cout << "localA: "  << localA << endl;
    cout << "localB:" << localB << endl;


    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}