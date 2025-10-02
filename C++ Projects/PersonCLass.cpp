#include <iostream>
using namespace std;

class clsPerson
{
private:
  int _ID;
  string _FirstName;
  string _LastName;
  string _Email;
  int _Phone;

public:
  clsPerson(int, string, string, string, int);
  void setFirstName(string);
  void setLastName(string);
  void setEmail(string);
  void setPhone(int);
  int getID();
  string getFirstName();
  string getLastName();
  string getFullName();
  string getEmail();
  int getPhone();
  void printInfo();
  void sendEmail(string, string);
  void sendSMS(string);
};

void clsPerson::setFirstName(string FirstName) { _FirstName = FirstName; };
void clsPerson::setLastName(string LastName) { _LastName = LastName; };
void clsPerson::setEmail(string Email) { _Email = Email; };
void clsPerson::setPhone(int Phone) { _Phone = Phone; };
int clsPerson::getID() { return _ID; };
string clsPerson::getFirstName() { return _FirstName; };
string clsPerson::getLastName() { return _LastName; };
string clsPerson::getFullName() { return _FirstName + " " + _LastName; };
string clsPerson::getEmail() { return _Email; };
int clsPerson::getPhone() { return _Phone; };
void clsPerson::printInfo()
{
  cout << endl;
  cout << "Info:" << endl;
  cout << "_______________________________" << endl;
  cout << "ID          : " << getID() << endl;
  cout << "FirstName   : " << getFirstName() << endl;
  cout << "LastName    : " << getLastName() << endl;
  cout << "FullName    : " << getFullName() << endl;
  cout << "Email       : " << getEmail() << endl;
  cout << "Phone       : " << getPhone() << endl;
  cout << "_______________________________" << endl;
}
void clsPerson::sendEmail(string Subject, string Body)
{
  cout << "The Following Message Sent Successfully To Email: " << getEmail() << endl;
  cout << "Subjet: " << Subject << endl;
  cout << "Body: " << Body << endl;
  cout << endl;
}
void clsPerson::sendSMS(string SMS)
{

  cout << "The Following SMS Sent Successfully To Phone: " << getPhone() << endl;
  cout << SMS << endl;
}
clsPerson::clsPerson(int ID, string FirstName, string LastName, string Email, int Phone)
{
  _ID = ID;
  _FirstName = FirstName;
  _LastName = LastName;
  _Email = Email;
  _Phone = Phone;
}

int main()
{

  clsPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", 98387727);
  Person1.printInfo();

  Person1.sendEmail("Hi", "How Are You?");
  Person1.sendSMS("How are you?");
}
