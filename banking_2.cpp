#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm> // Include this for std::remove_if
#include<exception>
using namespace std;

#define MIN_BALANCE 500

class InsufficientFunds : public exception {
    public:
        const char* what() const noexcept override {
            return "Insufficient Funds";
        }
};

class Account {
    private:
        long accountNumber;
        string firstName;
        string lastName;
        float balance;
        static long NextAccountNumber;
    public:
        Account() {}
        Account(string fname, string lname, float balance);
        long getAccNo() const { return accountNumber; }
        string getFirstName() const { return firstName; }
        string getLastName() const { return lastName; }
        float getBalance() const { return balance; }
        void Deposit(float amount);
        void Withdraw(float amount);
        static void setLastAccountNumber(long accountNumber);
        static long getLastAccountNumber();
};

long Account::NextAccountNumber = 0;

Account::Account(string fname, string lname, float balance) {
    NextAccountNumber++;
    accountNumber = NextAccountNumber;
    firstName = fname;
    lastName = lname;
    this->balance = balance;
}

void Account::Deposit(float amount) {
    balance += amount;
}

void Account::Withdraw(float amount) {
    if (balance - amount < MIN_BALANCE) {
        throw InsufficientFunds();
    }
    balance -= amount;
}

void Account::setLastAccountNumber(long accountNumber) {
    NextAccountNumber = accountNumber;
}

long Account::getLastAccountNumber() {
    return NextAccountNumber;
}

class Bank {
    private:
        vector<Account> accounts;
    public:
        Bank();
        Account OpenAccount(string fname, string lname, float balance);
        Account BalanceEnquiry(long accountNumber) const;
        Account Deposit(long accountNumber, float amount);
        Account Withdraw(long accountNumber, float amount);
        void CloseAccount(long accountNumber);
        void ShowAllAccounts() const;
        ~Bank();
        void SaveAccounts() const;
        void LoadAccounts();
};

Bank::Bank() {
    LoadAccounts();
}

Account Bank::OpenAccount(string fname, string lname, float balance) {
    Account account(fname, lname, balance);
    accounts.push_back(account);
    SaveAccounts();
    return account;
}

Account Bank::BalanceEnquiry(long accountNumber) const {
    for (const auto& acc : accounts) {
        if (acc.getAccNo() == accountNumber) {
            return acc;
        }
    }
    throw runtime_error("Account not found");
}

Account Bank::Deposit(long accountNumber, float amount) {
    for (auto& acc : accounts) {
        if (acc.getAccNo() == accountNumber) {
            acc.Deposit(amount);
            SaveAccounts();
            return acc;
        }
    }
    throw runtime_error("Account not found");
}

Account Bank::Withdraw(long accountNumber, float amount) {
    for (auto& acc : accounts) {
        if (acc.getAccNo() == accountNumber) {
            acc.Withdraw(amount);
            SaveAccounts();
            return acc;
        }
    }
    throw runtime_error("Account not found");
}

void Bank::CloseAccount(long accountNumber) {
    auto it = remove_if(accounts.begin(), accounts.end(), 
                        [accountNumber](const Account& acc) { return acc.getAccNo() == accountNumber; });
    if (it != accounts.end()) {
        accounts.erase(it, accounts.end());
        SaveAccounts();
    } else {
        throw runtime_error("Account not found");
    }
}

void Bank::ShowAllAccounts() const {
    for (const auto& acc : accounts) {
        cout << "First Name: " << acc.getFirstName() << endl;
        cout << "Last Name: " << acc.getLastName() << endl;
        cout << "Account Number: " << acc.getAccNo() << endl;
        cout << "Balance: " << acc.getBalance() << endl << endl;
    }
}

void Bank::SaveAccounts() const {
    ofstream ofs("Bank.data", ios::trunc);
    for (const auto& acc : accounts) {
        ofs << acc.getAccNo() << endl;
        ofs << acc.getFirstName() << endl;
        ofs << acc.getLastName() << endl;
        ofs << acc.getBalance() << endl;
    }
}

void Bank::LoadAccounts() {
    ifstream ifs("Bank.data");
    if (!ifs) return;
    Account account;
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    while (ifs >> accountNumber >> firstName >> lastName >> balance) {
        Account::setLastAccountNumber(accountNumber);
        accounts.push_back(Account(firstName, lastName, balance));
    }
}

Bank::~Bank() {
    SaveAccounts();
}

int main() {
    Bank b;
    Account acc;
    int choice;
    string fname, lname;
    long accountNumber;
    float balance, amount;

    cout << "***Banking System***" << endl;
    do {
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Open an Account";
        cout << "\n\t2 Balance Enquiry";
        cout << "\n\t3 Deposit";
        cout << "\n\t4 Withdrawal";
        cout << "\n\t5 Close an Account";
        cout << "\n\t6 Show All Accounts";
        cout << "\n\t7 Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter First Name: ";
                cin >> fname;
                cout << "Enter Last Name: ";
                cin >> lname;
                cout << "Enter Initial Balance: ";
                cin >> balance;
                acc = b.OpenAccount(fname, lname, balance);
                cout << "Account Created Successfully" << endl;
                break;
            case 2:
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                try {
                    acc = b.BalanceEnquiry(accountNumber);
                    cout << "Account Details: " << endl;
                    cout << "First Name: " << acc.getFirstName() << endl;
                    cout << "Last Name: " << acc.getLastName() << endl;
                    cout << "Account Number: " << acc.getAccNo() << endl;
                    cout << "Balance: " << acc.getBalance() << endl;
                } catch (const exception& e) {
                    cout << e.what() << endl;
                }
                break;
            case 3:
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                cout << "Enter Amount: ";
                cin >> amount;
                try {
                    acc = b.Deposit(accountNumber, amount);
                    cout << "Amount Deposited Successfully" << endl;
                } catch (const exception& e) {
                    cout << e.what() << endl;
                }
                break;
            case 4:
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                cout << "Enter Amount: ";
                cin >> amount;
                try {
                    acc = b.Withdraw(accountNumber, amount);
                    cout << "Amount Withdrawn Successfully" << endl;
                } catch (const exception& e) {
                    cout << e.what() << endl;
                }
                break;
            case 5:
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                try {
                    b.CloseAccount(accountNumber);
                    cout << "Account Closed Successfully" << endl;
                } catch (const exception& e) {
                    cout << e.what() << endl;
                }
                break;
            case 6:
                b.ShowAllAccounts();
                break;
            case 7:
                break;
            default:
                cout << "Enter Correct Choice" << endl;
        }
    } while (choice != 7);

    return 0;
}
