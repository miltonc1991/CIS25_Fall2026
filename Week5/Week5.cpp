#include <iostream>
using namespace std;

// function prototypes
void sayHello();
void addNumbers();
void showFunFact();
void showMenu();

int main() {
    int option;

    do {
        showMenu();
        cin >> option;

        if (option == 1) {
            sayHello();
        }
        else if (option == 2) {
            addNumbers();
        }
        else if (option == 3) {
            showFunFact();
        }
        else if (option == 4) {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid option, try again." << endl;
        }

        cout << endl;

    } while (option != 4);

    return 0;
}

void showMenu() {
    cout << "=== SIMPLE MENU ===" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Add Two Numbers" << endl;
    cout << "3. Fun Fact" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

void sayHello() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Nice to meet you." << endl;
}

void addNumbers() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "The sum is: " << a + b << endl;
}

void showFunFact() {
    cout << "Fun Fact: The first computer programmer was Ada Lovelace!" << endl;
}

}
