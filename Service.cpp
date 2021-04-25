#include <iostream>

using namespace std;


class Service {
private:
	string service;
public:
	Service() 
		: service("None") { 
		cout << "Default constructor class\'s \"Service\"\n\n"; 
	}
	Service(string Service) 
		: service(Service) { 
		cout << "Constructor with params class\'s \"Service\"\n\n"; 
	}
	~Service() {
		cout << "Destructor class\'s \"Service\"\n\n";
	}
	virtual string get_info() { return service; }
	virtual void set_info(string service) { this->service = service; }
	
};
