#include <string>

class Employee {
private:
    std::string name;
    int id;

public:
    Employee(std::string name, int id);
    std::string get_name();
    int get_id();
};
