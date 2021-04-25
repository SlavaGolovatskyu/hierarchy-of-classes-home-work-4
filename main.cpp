#include <iostream>
#include "Service.cpp"
#include "Repair.cpp"
#include "Inspection.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Repair r("broke wheel", 500);
	r.info();
	cout << "\n\n\n" << endl;
	Inspection s("All car", 299);
	s.info();
	return 0;
}
