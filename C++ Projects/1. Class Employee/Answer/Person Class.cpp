#include <iostream>          // We need this for cout and stuff
using namespace std;         // So we don't type std:: all the time

// Our super cool Employee class
class clsEmployee
{
private:                    // Private stuff: only the class can see it
    int _ID;                // Employee ID
    string _FirstName;      // First name
    string _LastName;       // Last name
    string _Title;          // Job title
    string _Email;          // Email address
    string _Phone;          // Phone number
    double _Salary;         // Salary
    string _Department;     // Department name

public:                     // Public stuff: everyone can use these
    clsEmployee(int, string, string, string, string, string, double, string); // Constructor
    void sendEmail(string, string); // Function to send email
    void sendSMS(string);           // Function to send SMS
    void printInfo() const;         // Print all info
    void setFirstName(string);      // Setter for first name
    void setLastName(string);       // Setter for last name
    void setTitle(string);          // Setter for title
    void setEmail(string);          // Setter for email
    void setPhone(string);          // Setter for phone
    void setSalary(double);         // Setter for salary
    void setDepartment(string);     // Setter for department
    string FullName() const;        // Get full name
    string FirstName() const;       // Get first name
    string LastName() const;        // Get last name
    string Title() const;           // Get title
    string Email() const;           // Get email
    string Phone() const;           // Get phone
    double Salary() const;          // Get salary
    string Department() const;      // Get department
    int ID() const;                 // Get ID
};

// Constructor with default values
clsEmployee::clsEmployee(int ID = 0, string FirstName = "Unknown FirstName", string LastName = "Unknown LastName", string Title = "Unknown Title", string Email = "Unknown Email", string Phone = "Unknown Phone", double Salary = 0.0, string Department = "Unknown Department")
{
    _ID = ID;                 // Set ID
    _FirstName = FirstName;   // Set first name
    _LastName = LastName;     // Set last name
    _Title = Title;           // Set title
    _Email = Email;           // Set email
    _Phone = Phone;           // Set phone
    _Salary = Salary;         // Set salary
    _Department = Department; // Set department
}

// Send email function
void clsEmployee::sendEmail(string Subject = "Unknown Email", string Body = "Unknown Body")
{
    cout << endl;
    cout << "The Following Message Sent Successfully to Email: " << Email() << endl; // Show email sent
    cout << "Subject: " << Subject << endl;                                           // Show subject
    cout << "Body: " << Body << endl;                                                // Show body
}

// Send SMS function
void clsEmployee::sendSMS(string SMS = "Unknown SMS")
{
    cout << endl;
    cout << "The Following SMS Sent Successfully To Phone: " << Phone() << endl; // Show phone
    cout << "SMS: " << SMS << endl;                                             // Show SMS content
}

// Print employee info
void clsEmployee::printInfo() const
{
    cout << endl;
    cout << "Info: " << endl;
    cout << "____________________________________" << endl;
    cout << "ID           : " << ID() << endl;           // Show ID
    cout << "FirstName    : " << FirstName() << endl;   // Show first name
    cout << "LastName     : " << LastName() << endl;    // Show last name
    cout << "FullName     : " << FullName() << endl;    // Show full name
    cout << "Title        : " << Title() << endl;       // Show title
    cout << "Email        : " << Email() << endl;       // Show email
    cout << "Phone        : " << Phone() << endl;       // Show phone
    cout << "Salary       : " << Salary() << endl;      // Show salary
    cout << "Department   : " << Department() << endl;  // Show department
    cout << "____________________________________" << endl;
}

// Getter functions
string clsEmployee::Email() const { return _Email; }            // Return email
string clsEmployee::FullName() const { return FirstName() + " " + LastName(); } // Full name
string clsEmployee::FirstName() const { return _FirstName; }   // Return first name
string clsEmployee::LastName() const { return _LastName; }     // Return last name
string clsEmployee::Title() const { return _Title; }           // Return title
string clsEmployee::Phone() const { return _Phone; }           // Return phone
string clsEmployee::Department() const { return _Department; } // Return department
double clsEmployee::Salary() const { return _Salary; }         // Return salary
int clsEmployee::ID() const { return _ID; }                    // Return ID

// Setter functions
void clsEmployee::setFirstName(string FirstName) { _FirstName = FirstName; } 
void clsEmployee::setLastName(string LastName) { _LastName = LastName; }
void clsEmployee::setTitle(string Title) { _Title = Title; }
void clsEmployee::setEmail(string Email) { _Email = Email; }
void clsEmployee::setPhone(string Phone) { _Phone = Phone; }
void clsEmployee::setSalary(double Salary) { _Salary = Salary; }
void clsEmployee::setDepartment(string Department) { _Department = Department; }

// Main function
int main()
{
    clsEmployee Person1(10, "Ahmad", "Ali", "Software Developer", "MyEm@gmail.com", "0770791770", 3000, "IT"); // Create an employee

    Person1.printInfo();           // Show all info

    Person1.sendEmail("Hi", "How are you?");  // Send an email
    Person1.sendSMS("How are you?");          // Send SMS

    return 0;                       // Program ends
}
