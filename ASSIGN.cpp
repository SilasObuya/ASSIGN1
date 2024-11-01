#include <iostream>  
using namespace std;  

char getGrade(float percentage) {  
    if (percentage >= 90 && percentage <= 100)  {  
        return 'A';  
    } else if (percentage >= 80) {  
        return 'B';  
    } else if (percentage >= 70) {  
        return 'C';  
    } else if (percentage >= 60) {  
        return 'D';  
    } else {  
        return 'F';  
    }  
}  
string getMessage(char grade) {  
    switch  (grade) {  
        case 'A':  
            return "Excellent!";  
        case 'B':  
            return "Great!";  
        case 'C':  
            return "Fair!";  
        case 'D':  
            return "Keep trying!";  
        case 'F':  
            return "You can do better!";  
        default:  
            return "";  
    }  
}  

void displayResult(char grade, string message) {  
    cout << "Your grade is: " << grade << "! " << message << endl;  
}  
int  main() {  
    cout << "Welcome to the Grade Evaluator !" << endl;  
    float percentage;  
    
    cout << "Enter your percentage (0-100): ";  
    cin >> percentage;  

    if (cin.fail() || percentage < 0 || percentage > 100) {  
        cout << "Error: Please enter a valid percentage between 0 and 100." << endl;  
        return 1;
    }  
    char grade = getGrade(percentage);  
    string message = getMessage(grade);  
    
    displayResult(grade, message);  
   return 0;  
}
