/*
#include <iostream>

using namespace std;

class BankAccount

{

string accountHolderName;

int accountNumber;

double balance;


public:

void inputDetails();

void displayDetails();

void deposit(double amount);

void withdraw(double amount);

};

void BankAccount::inputDetails()

{

cout << "\naccount number ";

cin >> accountNumber;

cout << "\n enter account holder name";

cin.ignore(); 

getline(cin, accountHolderName); 

cout << "\n balance ";

cin >> balance;

}


void BankAccount::deposit(double amount)

{

balance += amount;

cout << "\n amount deposited successfully. New balance: " << balance;

}

void BankAccount::withdraw(double amount)

{

if (amount > balance)

{

cout << "\n Denied..insufficient balance";

}

else

{

balance -= amount;

cout << "\n amount withdrawn successfully. New balance: " << balance;

}
}
void BankAccount::displayDetails()
{
cout << "\n account holder name: " <<" "<< accountHolderName << " account number: " << accountNumber;
cout << "\n balance: " << balance;
}
int main()
{
BankAccount account; // s1 is obj/instnace of the class students
account.inputDetails();
account.displayDetails();
cout << "\n D or W";
char choice;
cin >> choice;
if(choice=='D' )
{
double depositAmount;
cout << "\n enter amount to deposit";
cin >> depositAmount;
account.deposit(depositAmount);
}
else if(choice=='W')
{
double withdrawAmount;
cout << "\n enter amount to withdraw";
cin >> withdrawAmount;
account.withdraw(withdrawAmount);
}
account.displayDetails();
return 0;
}
*/

#include <iostream>

using namespace std;

class BankAccount

{

string accountHolderName;

int accountNumber;

double balance;


public:
BankAccount();
BankAccount(string,int,double);
void inputDetails();

void displayDetails();

void deposit(double amount);

void withdraw(double amount);

};

void BankAccount::inputDetails()

{

cout << "\naccount number ";

cin >> accountNumber;

cout << "\n enter account holder name";

cin.ignore(); 

getline(cin, accountHolderName); // Read the account holder name with spaces

cout << "\n balance ";

cin >> balance;

}

BankAccount::BankAccount()
{
    accountHolderName="";
    accountNumber=2405;
    balance=0;
}
BankAccount::BankAccount(string name,int number,double balance)
{

}

void BankAccount::deposit(double amount)

{

balance += amount;

cout << "\n amount deposited successfully. New balance: " << balance;

}

void BankAccount::withdraw(double amount)

{

if (amount > balance)

{

cout << "\n insufficient balance";

}

else

{

balance -= amount;

cout << "\n amount withdrawn successfully. New balance: " << balance;

}

}

void BankAccount::displayDetails()

{

cout << "\n account holder name: " <<" "<< accountHolderName <<endl<< " account number: " << accountNumber;

cout << "\n balance: " << balance;

}

int main()

{

BankAccount account; // s1 is obj/instnace of the class students
/*
BankAccount ac1,ac2("Keshav",2405,45000);
*/
account.inputDetails();

account.displayDetails();

cout << "\n D or W";

char choice;

cin >> choice;

if(choice=='D'||'d')

{

double depositAmount;

cout << "\n enter amount to deposit";

cin >> depositAmount;

account.deposit(depositAmount);

}

else if(choice=='W'||'w')

{

double withdrawAmount;

cout << "\n enter amount to withdraw";

cin >> withdrawAmount;

account.withdraw(withdrawAmount);

}

account.displayDetails();

return 0;

}