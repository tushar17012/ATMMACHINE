#include <iostream>
#include <stdlib>
#include <string>
using namespace std;

class Bank (


private:

string name;
 int accnumber;
char type[10];
int amount = 0;
int tot = 0;
public:

{
    cout << "Enter name\n";

    cin.ignore();

    getline(cin, name);

    cout << "Enter Account number\n";
    cin >> accnumber;
    cout << "Enter Account type\n";

    cin >> type;

    cout << "Enter Balance\n";

    cin >> tot;

}


void showdata()

{
    cout << "Name:" << name << endl;
    cout << "Account No:" << accnumber << endl;
    cout << "Account type:" << type << endl;
    cout << "Balance:" << tot << endl;
}


void deposit()
{
    cout << "\nEnter amount to be Deposited\n";

    cin >> amount;
}

void shoubal()
{
    tot = tot + amount;
    cout << "\nTotal balance is: " << tot;
}
void withdrawl()
{
    int a, avai_balance;
    cout << "Enter amount to withdras\n";

    cin >> a;
    avai_balance = tot - a;

    cout << "Available Balance is " << avai balance;
}
}
;
int main()
{
    Bank b;
    int choice;
    while (1)
    {
        cout << "\n\n\nWELCOME\n\n\n";
        cout << "Enter your choice\n";
        cout << "\t1.Enter name, Account"
             << "number,Account type\n";
        cout << "\t2.Balance Enquiry\n";
        cout << "\t3.Deposit Money\n";
        cout << "\t4.Show Total Balance\n";
        cout << "\t5.Withdraw Money\n";
        cout << "\t6.Cancel\n";
        cin >> choice : switch (choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdraw();
            break;
        case 6:
            exit(1);
            break;

        default:
            cout << "\n INVALID CHOICE" break;
        }
    }
}
