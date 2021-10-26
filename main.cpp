#include <iostream>

using namespace std;

void showMenu(){
    cout<< "********Menu********"<< endl;
    cout << "1. Check balance"<< endl;
    cout <<"2. Deposit"<< endl;
    cout<< "3. withdraw"<< endl;
    cout <<"4. exit" << endl;
}

int main()

{   double withdraw;
    double deposit;
    double balance =500;
    int option;
    do{
    showMenu();
    cout << "enter an option";
    cin >> option;
    system("cls");
    switch (option){
    case 1:
        cout<<" balance = $" <<balance<< endl;
        break;
        case 2:
            cout<< "enter deposit amount :";
            cin>> deposit;
            balance+= deposit;
            cout<< " new balance is"<< balance;
            break;
        case 3:
            cout<<"enter withdraw amount";
            cin>> withdraw;
            if (withdraw<= balance){
                    balance -= withdraw;
                    cout<<"new balance is :"<< balance<< endl;

            }else {
                cout<<" not enough money"<< endl;
                break;}


            } }while ( option !=4);












}
