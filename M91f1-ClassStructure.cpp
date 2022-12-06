#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Box {
	public:
		/*properties*/
		char Color();
		int Length, Width, Height;
		/*Methods*/
		Box(int length, int width, int height);
		int getVolume();
		
};

	Box::Box(int length, int width, int height) {
		this.Width = width;
		this.Height = height;
	
	}


	Box::getVolume() {
		return this.Length * this.Width * this.Height;
	}


    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}