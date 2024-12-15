#include <iostream>
using namespace std;

class AbstractEmployee { // abstract class
    virtual void askForPromotion()=0;
};

class Employee:AbstractEmployee { // super class
    private: // for encapsulation
        string Company;
        int Age;
    protected: // sub-classes have access
        string Name;
    public:
        Employee(string name, string company, int age) {
            Name = name;
            Company = company;
            Age = age;
        }
        Employee(){} // default constructor

        void displayInfo() {
            cout << "Name: " << Name << endl << "Company: " << Company << endl << "Age: " << Age << endl;
        }
        void askForPromotion() {
            if(Age > 30) 
                cout << Name << " got promoted!" << endl;
            else
                cout << Name << ", sorry no promotion for you!" << endl;
        }
        virtual void work() { // virtual means that when this method is invoked, the most derived implementation will be executed
            cout << Name << " is checking email, task backlog, performing tasks..." << endl;
        }
        string getName() {
            return Name;
        }
        void setName(string name) {
            Name = name;
        }
        string getCompany() {
            return Company;
        }
        void setCompany(string company) {
            Company = company;
        }
        int getAge() {
            return Age;
        }
        void setAge(int age) {
            Age = age;
        }
};
// sub-class
class Developer: public Employee { // made inheritance public
    public: // *NOTE: classes are private by default
        string FavProgLang;

        Developer(string name, string company, int age, string favproglang)
            :Employee (name, company, age) {
            FavProgLang = favproglang;
        }
        void fixBug() {
            cout << getName() << " fixed bug using "<< FavProgLang << endl;
        }
        void work() {
            cout << Name << " is writing " << FavProgLang << " code." << endl;
        }
};
// sub-class
class Teacher: public Employee {
    public:
        string Subject;

        Teacher(string name, string company, int age, string subject)
        :Employee (name, company, age) {
            Subject = subject;
        }
        void prepareLesson() {
            cout << Name << " is preparing " << Subject << " lesson." << endl;
        }
        void work() {
            cout << Name << " is teaching " << Subject << "." << endl;
        }
};

int main() {
    /* name,compnay, and age would need to be public
    Employee employee1;
    employee1.Name="Lucy Finnerty";
    employee1.Company="Google";
    employee1.Age=20;
    employee1.displayInfo();*/

    /*Employee employee2 = Employee("Lucy Finnerty", "Google", 20); // constructor w parameters
    employee2.displayInfo();*/

    /*Employee employee3; // default constructor
    employee3.setName("Lucy");
    employee3.setCompany("Google");
    employee3.setAge(20);
    cout << employee3.getName() << " is " << employee3.getAge() << " years old and works at " << employee3.getCompany();*/

    /*Employee employee4 = Employee("John Smith", "Apple", 34);
    Employee employee5 = Employee("Jane Doe", "Netflix", 25);
    employee4.askForPromotion();
    employee5.askForPromotion();*/

    Developer d = Developer("Lucy Finnerty","YouTube", 20, "C++");
    //d.fixBug();
    //d.askForPromotion(); // made Employee public in Developer class heading to have access to askForPromotion()

    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    //t.prepareLesson();
    //t.askForPromotion();

    /*d.work();
    t.work();*/

    // pointer of base class can hold reference to derived class object - polymorphism
    Employee* e1 = &d; // employee pointer hold reference to this developer
    Employee* e2 = &t;

    e1->work(); // using a pointer so instead of .work(), use ->work()
    e2->work();
}