#include <iostream>   // Header for input/output

using namespace std;

int main (){

    // Variable declarations
    string name = "Doe";          // Stores text (string)
    int age = 19;                 // Stores whole numbers
    float average_score = 8.5;    // Stores decimal numbers
    bool is_student = true;       // Stores true/false values

    // Printing variables
    // Note: 'boolalpha' makes bool print as "true/false" instead of "1/0"
    cout << "Name: " << name 
         << ", Age: " << age 
         << ", Average score: " << average_score 
         << ", Is he a student? " << boolalpha << is_student 
         << endl;

    return 0;   // End of program
}
