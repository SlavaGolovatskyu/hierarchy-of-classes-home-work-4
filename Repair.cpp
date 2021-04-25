#include "Service.cpp"
#include <string>

using namespace std;

#ifndef REPAIR_CPP
#define REPAIR_CPP


class Repair : public Service {
	string repair_part;
public:
	Repair(string part, int price)
		: repair_part(part),
		  Service("Repair", price)
	{
		cout << "Constructor with params class\'Repair \n\n" << endl;
	}
	~Repair()
	{
		cout << "Default destructor class\' Repair \n\n" << endl;
	}
	string get_repair_part() { return repair_part; }
	void info() override {
		cout << "Service: " << get_service() << endl;
		cout << "Price: " << get_price() << endl;
		cout << "Repair: " << get_repair_part() << endl;
    }
};

#endif
