#include <iostream>
#include <string> 

using namespace std;

class Employee {
private:
    string name;
    int salary;

public:
   
   // Setter methods for Name
    void setName(string empName) {
        name = empName;
    }
    
   // Getter method for Name
    string getName() {
        return name;
    }
    
   // Setter methods for Salary
    void setSalary(int empSal) {
        salary = empSal;
    }
    
    // Getter methods for Salary
    int getSalary() {
        return salary;
    }

};

int main(){

	Employee emp1;
	emp1.setSalary(5000);
	cout<<"Salary is Ksh " <<emp1.getSalary()<<endl;

return 0;		
}
 