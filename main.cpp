#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00;
    double deposit, withdraw;
    int password,choice;

    cout << "Enter your PIN: ";
    cin >> password;

    if (password == 1234) {
        cout << "Welcome to ATM"<<endl;
        cout <<"1.Check your balance"<<endl;
        cout <<"2.Deposit Money"<<endl;
        cout <<"3.Withdraw Money"<<endl;
        cout <<"4.Exit"<<endl;
        cout <<"Enter your choice: "<<endl;
        cin >> choice;




        switch (choice) {
            case 1: {
                cout << "Your balance is: "<< balance << "cedis"<<endl;
                break;
            }

            case 2: {
                cout <<"How much do you do you want to deposit: "<< endl;
                cin >> deposit;
                balance = balance + deposit;
                cout<<"Deposit Successful.Your new balance is: " << balance <<"cedis"<<endl;
                break;
            }

            case 3: {
                cout << "How much do you want to withdraw: "<< endl;
                cin >> withdraw;
                if (withdraw > balance)
                    cout<<"Your balance is insufficient"<<endl;
                else {
                    balance = balance - withdraw;
                    cout<<"Your balance is: "<< balance <<"cedis"<<endl;
                }
                break;
            }

            case 4: {
                cout <<"Exiting...."<< endl;
                break;
            }
            default : {
                cout << "Wrong choice"<<endl;
            }
        }

    }
    else {
        cout << "Invalid PIN"<<endl;
    }

        return 0;
    }