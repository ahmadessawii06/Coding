#include <iostream>
using namespace std;
class clsEmployee
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    double _Salary;
    string _Department;

public:
    clsEmployee(int, string, string, string, string, string, double, string);
    void sendEmail(string, string);
    void sendSMS(string);
    void printInfo() const;
    void setFirstName(string);
    void setLastName(string);
    void setTitle(string);
    void setEmail(string);
    void setPhone(string);
    void setSalary(double);
    void setDepartment(string);
    string FullName() const;
    string FirstName() const;
    string LastName() const;
    string Title() const;
    string Email() const;
    string Phone() const;
    double Salary() const;
    string Department() const;
    int ID() const;
};

clsEmployee::clsEmployee(int ID = 0, string FirstName = "Unkown FirstName", string LastName = "Unkown LastName", string Title = "Unkown Title", string Email = "Unkown Email", string Phone = "Unkown Phone", double Salary = 0.0, string Department = "Unkown Department")
{
    _ID = ID;
    _FirstName = FirstName;
    _LastName = LastName;
    _Title = Title;
    _Email = Email;
    _Phone = Phone;
    _Salary = Salary;
    _Department = Department;
}

void clsEmployee::sendEmail(string Subject = "Unknown Email", string Body = "Unknown Body")
{
    cout << endl;
    cout << "The Following Message Sent Succsesfuly to Email: " << Email() << endl;
    cout << "Subject: " << Subject << endl;
    cout << "Body: " << Body << endl;
}

void clsEmployee::sendSMS(string SMS = "Unknown SMS")
{

    cout << endl;
    cout << "The Following SMS Sent Succsessfuly To Phone: " << Phone() << endl;
    cout << "SMS: " << SMS << endl;
}

void clsEmployee::printInfo() const
{

    cout << endl;
    cout << "Info: " << endl;
    cout << "____________________________________" << endl;
    cout << "ID           : " << ID() << endl;
    cout << "FirstName    : " << FirstName() << endl;
    cout << "LastName     : " << LastName() << endl;
    cout << "FullName     : " << FullName() << endl;
    cout << "Title        : " << Title() << endl;
    cout << "Email        : " << Email() << endl;
    cout << "Phone        : " << Phone() << endl;
    cout << "Salary       : " << Salary() << endl;
    cout << "Department   : " << Department() << endl;
    cout << "____________________________________" << endl;
}
string clsEmployee::Email() const { return _Email; };
string clsEmployee::FullName() const { return FirstName() + " " + LastName(); };
string clsEmployee::FirstName() const { return _FirstName; };
string clsEmployee::LastName() const { return _LastName; };
string clsEmployee::Title() const { return _Title; };
string clsEmployee::Phone() const { return _Phone; };
string clsEmployee::Department() const { return _Department; };
double clsEmployee::Salary() const { return _Salary; };
int clsEmployee::ID() const { return _ID; };
void clsEmployee::setFirstName(string FirstName) { _FirstName = FirstName; };
void clsEmployee::setLastName(string LastName) { _LastName = LastName; };
void clsEmployee::setTitle(string Title) { _Title = Title; };
void clsEmployee::setEmail(string Email) { _Email = Email; };
void clsEmployee::setPhone(string Phone) { _Phone = Phone; };
void clsEmployee::setSalary(double Salary) { _Salary = Salary; };
void clsEmployee::setDepartment(string Department) { _Department = Department; };

int main()
{
    clsEmployee Person1(10, "Ahmad", "Ali", "Software Developer", "MyEm@gmail.com", "0770791770", 3000, "IT");

    Person1.printInfo();

    Person1.sendEmail("Hi", "How are you?");
    Person1.sendSMS("How are you?");

    return 0;
}
