#include "Service.cpp"

#ifndef REPAIR_CPP
#define REPAIR_CPP


class Repair : public Service {
private:
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
	void info() override final {
		cout << "Service: " << get_service() << endl;
		cout << "Price: " << get_price() << "$" << endl;
		cout << "Repair part: " << get_repair_part() << endl;
		cout << endl;
    }
};

#endif
