#include "Service.cpp"

#ifndef INSPECTION_CPP
#define INSPECTION_CPP


class Inspection : public Service {
private:
	string type_inspection;
public:
	Inspection(string type_inspection, int price)
		: type_inspection(type_inspection),
		  Service("Inspection", price)
	{
		cout << "Constructor with params class\' Inspection \n\n" << endl;
	}
	~Inspection()
	{
		cout << "Default destructor class\' Inspection \n\n" << endl;
	}
	string get_type_inspection() { return type_inspection; }
	void info() override final {
		cout << "Service: " << get_service() << endl;
		cout << "Price: " << get_price() << "$" << endl;
		cout << "Type inspection: " << get_type_inspection() << endl;
		cout << "class Inspection" << endl;
		cout << endl;
    }
};

#endif
