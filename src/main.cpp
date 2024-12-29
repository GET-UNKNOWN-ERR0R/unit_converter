#include <iostream>
#include <iomanip>

using namespace std;

// Function declarations
void convertLength();
void convertWeight();
void convertTemperature();
void displayMenu();

int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);
    
    return 0;
}

void displayMenu() {
    cout << "\n----- Unit Converter -----\n";
    cout << "1. Length Conversion\n";
    cout << "2. Weight Conversion\n";
    cout << "3. Temperature Conversion\n";
    cout << "4. Exit\n";
}

void convertLength() {
    double value;
    int choice;
    
    cout << "\nEnter the length value: ";
    cin >> value;
    
    cout << "Convert from (1) meters to kilometers (2) kilometers to meters: ";
    cin >> choice;
    
    if(choice == 1) {
        cout << value << " meters = " << value / 1000 << " kilometers\n";
    } else if(choice == 2) {
        cout << value << " kilometers = " << value * 1000 << " meters\n";
    } else {
        cout << "Invalid choice.\n";
    }
}

void convertWeight() {
    double value;
    int choice;
    
    cout << "\nEnter the weight value: ";
    cin >> value;
    
    cout << "Convert from (1) kilograms to pounds (2) pounds to kilograms: ";
    cin >> choice;
    
    if(choice == 1) {
        cout << value << " kilograms = " << value * 2.20462 << " pounds\n";
    } else if(choice == 2) {
        cout << value << " pounds = " << value / 2.20462 << " kilograms\n";
    } else {
        cout << "Invalid choice.\n";
    }
}

void convertTemperature() {
    double value;
    int choice;
    
    cout << "\nEnter the temperature value: ";
    cin >> value;
    
    cout << "Convert from (1) Celsius to Fahrenheit (2) Fahrenheit to Celsius: ";
    cin >> choice;
    
    if(choice == 1) {
        cout << value << " Celsius = " << (value * 9/5) + 32 << " Fahrenheit\n";
    } else if(choice == 2) {
        cout << value << " Fahrenheit = " << (value - 32) * 5/9 << " Celsius\n";
    } else {
        cout << "Invalid choice.\n";
    }
}
