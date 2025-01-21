//personType.h
    
#include <string> 

using namespace std;

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(string first, string middle, string last);
      //Function to set firstName and lastName according 
      //to the parameters.
      //Postcondition: firstName = first; lastName = last

    // set first, middle, and last names only
    void setFirstName(string first);
    void setMiddleName(string middle);
    void setLastName(string last);

    // check if last name and first name match
    bool isLastName(string last) const;
    bool isFirstName(string first) const;

    string getFirstName() const;
      //Function to return the first name.
      //Postcondition: The value of firstName is returned.

    string getLastName() const;
      //Function to return the last name.
      //Postcondition: The value of lastName is returned.
    
    string getMiddleName() const;
        // Function to return middle name.
        // Postcondition: value of middleName is returned.

    personType(string first = "", string middle = "", string last = "");
      //Constructor
      //Sets firstName and lastName according to the parameters.
      //The default values of the parameters are null strings.
      //Postcondition: firstName = first; lastName = last  

 private:
    string firstName; //variable to store the first name
    string middleName; // variable to store middle name
    string lastName;//variable to store the last name
};

