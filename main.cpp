//Test Program personType with first name and last name 
  
#include <iostream>  
#include <string>
#include "personType.h" 
 
using namespace std;

int main()
{
    // Create student 1 object
    personType student("Mary", "Beth", "Regan");

    // name variables for student2
    string firstName;
    string middleName;
    string lastName;

    // get user input for student2
    cout << "Please enter the student's first name: ";
    cin >> firstName;
    cout << "Please enter the student's middle name: ";
    cin >> middleName;
    cout << "Please enter the student's last name: ";
    cin >> lastName;
    
    // create student2 object and set first, middle, and last names
    personType student2;
    student2.setName(firstName,middleName,lastName);

    // print student2 name
    // cout << "Second student's first name: " << student2.getFirstName() << endl;
    // cout << "Second Student's last name: " << student2.getLastName() << endl;

    // check for same first or last name
    bool a = student.isLastName(lastName);
    bool b = student.isFirstName(firstName);

    // output- clear screen and print student 1
    system("cls");
    student.print();
    cout << endl;

    // last name
    cout << "Student's last name is ";
    if (a == false)
        cout << "not ";
    cout << student.getLastName() << endl;

    // first name
    cout << "Student's first name is ";
    if (b == false)
        cout << "not ";
    cout << student.getFirstName() << endl;
    
    return 0;
}
