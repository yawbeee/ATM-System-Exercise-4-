#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00;
    double deposit, withdraw;
    int password, choice;
    int attempts = 0;
    const int correct_password = 1234;
    const int max_attempts = 4;



    while (attempts < max_attempts) {
        cout << "Enter your PIN: ";
        cin >> password;



        if (password == 1234) {
            cout << "Welcome to ATM" << endl;

            do {
                cout << "\n========== ATM MENU ==========" << endl;
                cout << "1. Check your balance" << endl;
                cout << "2. Deposit Money" << endl;
                cout << "3. Withdraw Money" << endl;
                cout << "4. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Your balance is: " << balance << " cedis" << endl;
                    break;

                    case 2:
                        cout << "How much do you want to deposit: ";
                    cin >> deposit;
                    balance += deposit;
                    cout << "Deposit Successful. Your new balance is: " << balance << " cedis" << endl;
                    break;

                    case 3:
                        cout << "How much do you want to withdraw: ";
                    cin >> withdraw;
                    if (withdraw > balance)
                        cout << "Your balance is insufficient" << endl;
                    else {
                        balance -= withdraw;
                        cout << "WIthdrawal successful! Your new balance is: " << balance << " cedis" << endl;
                    }
                    break;

                    case 4:
                        cout << "Exiting...." << endl;
                    break;

                    default:
                        cout << "Wrong choice. Please try again." << endl;
                }

            } while (choice != 4);

        } else {
            attempts++;
            cout << "Invalid PIN" << endl;
        }
    }
    if (attempts == max_attempts) {
        cout <<"\n Too many failed attempts!!Try again in the next 24 hours!!"<<endl;
    }
    return 0;
}