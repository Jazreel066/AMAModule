#include <cstdlib>
#include <iostream>

using namespace std;


	
class Box {
	private:
		string Color;
		int Length, Width, Height;
		
	public:
		Box(int, int, int);
		int getVolume();
		int getLength();
};

	Box::Box(int length, int width, int height)	{
		this->Length = length;
		this->Width = width;
		this->Height = height;
	}
	
	int Box::getVolume() {
		return this->Length * this->Width * this->Height;
	}
	
	int Box::getLength() {
		return this->Length;
	}	
	
	
	
