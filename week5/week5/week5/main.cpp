//author: james campbell//
//name: week 5 pointers and references//

#include<iostream>
#include<string>

using namespace std;

int main() {
	float gravity;
	float speed = 99;
	float* aPtr{ nullptr };
	float* bPtr{ nullptr };

	void CalculateGravity(float altitude, float& gravity);

	aPtr = &gravity;
	bPtr = aPtr;

	cout << "the value of gravity is " << gravity << endl;
	cout << "the size of gravity is " << sizeof(gravity) << endl;
	cout << "gravity address: " << &gravity << endl;
	
	cout << "the value of aPtr is " << aPtr << endl;
	cout << "the size of aPtr is " << sizeof(aPtr) << endl;
	cout << "aPtr address: " << &aPtr << endl;
	cout << "aPtr pointer: " << *aPtr << endl;

	cout << "the value of bPtr is " << bPtr << endl;
	cout << "the size of bPtr is " << sizeof(bPtr) << endl;
	cout << "bPtr address: " << &bPtr << endl;
	cout << "aPtr pointer: " << *aPtr << endl;


}