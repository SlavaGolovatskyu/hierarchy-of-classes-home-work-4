#include <iostream>
#include "Service.cpp"
#include "Repair.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Repair r("test", 100);
	r.info();
	return 0;
}
