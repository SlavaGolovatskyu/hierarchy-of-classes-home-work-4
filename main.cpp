#include <iostream>
#include <vector>
#include "Service.cpp"
#include "Repair.cpp"
#include "Inspection.cpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Repair r("broke wheel", 500);
	Inspection s("All car", 299);
	Service v("other", 159);
	vector<Service*> services = {&r, &s, &v};
	for (Service* service : services) {
		service->info();
		cout << "\n" << endl;
	}
	return 0;
}
