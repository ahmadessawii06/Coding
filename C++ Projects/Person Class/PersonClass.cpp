//! #include <ASE> // Improvment This is <ASE> Code :D
#include <iostream> // Input and Output Library In C++.
using namespace std; // To Use (cin) , (cout) , (endl) Without Typing std::...

//! Class Person: (cls) To Show This Is A Class Not A Data Type Or Function
class clsPerson
{
  // Private Attributes
  private:
    int _ID;                // To Store The Person's ID
    string _FirstName;      // To Store The Perosn's FirstName
    string _LastName;       // To Store The Person's LastName
    string _Email;          // To Store The Person's Email
    int _Phone;             // To Store The Person's Phone

  // Public Methods
  // Any Const Methods That's Mean I Don't Want To Modify The Data. Just Breaing It.
  public:
    clsPerson(int, string, string, string, int);     // A Constructor To Init The Values For Any Object (ID,FirstName,LastName,Email,Phone)
    void setFirstName(string);                       // Setter Method To Set The FirstName For The Person
    void setLastName(string);                        // Setter Method To Set The LastName For The Person
    void setEmail(string);                           // Setter Method To Set The Email For The Person
    void setPhone(int);                              // Setter Method To Set The Phone For The Person
//  void setID();                                    // There Isn't Any Setter Method For The Person ID ( Due To I Don't Wan't To Applay The User Edit The ID)
    int getID() const;                               // Const Getter Method To Get The ID For The Person  
    string getFirstName() const;                     // Const Getter Method To Get The FirstName For The Person
    string getLastName() const;                      // Const Getter Method To Get The LastName For The Person
    string getFullName() const;                      // Const Getter Method To Get The FullName For The Person
    string getEmail() const;                         // Const Getter Method To Get The Email For The Person
    int getPhone() const;                            // Const Getter Method To Get The Phone For The Person
    void printInfo() const;                          // Const Method To Print The Information For The Person Like: (ID,FirstName,LastName,FullName,Email,Phone)
    void sendEmail(string, string);                  // Method To Send Email For The Person With (Subject,Body)
    void sendSMS(string);                            // Method To Send SMS For The Person With (SMS)
};

// Implemantion For The Methods
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

// Main Test
int main()
{

  clsPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", 98387727);
  Person1.printInfo();

  Person1.sendEmail("Hi", "How Are You?");
  Person1.sendSMS("How are you?");
}
