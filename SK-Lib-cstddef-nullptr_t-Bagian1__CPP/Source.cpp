// C++ program to demonstrate problem with NULL

#include <iostream>
#include <cstddef>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

// function with integer argument
void fun(int N) { 
	cout << "fun(int)"; 
	return; 
}

// Overloaded function with char pointer argument
void fun(char* s) { 
	cout << "fun(char *)"; 
	return; 
}

int main() {
	// Ideally, it should have called fun(char *),
	// but it causes compiler error.
	fun(NULL);

	_getch();
	return 0;
}
