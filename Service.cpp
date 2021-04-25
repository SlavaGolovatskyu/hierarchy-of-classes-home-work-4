#include <iostream>
#include <string>

using namespace std;


#ifndef SERVICE_CPP
#define SERVICE_CPP

class Service {
private:
	string service;
	int price;
public:
	Service(string Service, int price) 
		: service(Service),
		  price(price) { 
		cout << "Constructor with params class\' \"Service\"\n\n"; 
	}
	virtual ~Service() {
		cout << "Destructor class\' \"Service\"\n\n";
	}
	int get_price() { return price; }
	string get_service() { return service; }
	virtual void info() {
		cout << "Class Service Service: " << service << endl;
		cout << "Class Service Price: " << price << endl;
	}
};

#endif
