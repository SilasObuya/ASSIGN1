#include <iostream>  
#include <string>  
#include <iomanip>
 class BankAccount  {  
private:  
    int accountNumber;  
    double balance;  
    std::string accountHolderName;  
public:  
    BankAccount(int accNum, double initialBalance, std::string holderName) {  
        accountNumber = accNum;  
        balance = initialBalance;  
        accountHolderName = holderName;  
    }  
    void deposit(double amount) {  
        if  (amount > 0) {  
             balance += amount;  
            std::cout << "Deposited: Ksh " << amount << "\n";  
        } else {  
            std::cout << "Deposit amount must be positive.\n";  
        }  
    }  
    void withdraw(double amount) {  
        if (amount > 0 && amount <= balance) {  
            balance -= amount;  
            std::cout << "Withdrew: Ksh " << amount << "\n";  
        } else if (amount > balance) {  
            std::cout << "Insufficient funds for withdrawal.\n";  
        } else {  
            std::cout << "Withdrawal amount must be positive.\n";  
        }  
    }  

      void displayBalance() const {  
        std::cout << "Account Number: " << accountNumber   
                  << ", Account Holder: " << accountHolderName   
                  << ", Balance: Ksh " << std::fixed << std::setprecision(2) << balance << "\n";  
    }  
};  

int main() {  
    const int MAX_ACCOUNTS = 5; //This is the Maximum number of accounts  
    BankAccount accounts[MAX_ACCOUNTS] = {  
        BankAccount(1001, 50000.0, "Elisha Birir"),  
        BankAccount(1002, 150000.0, "Stephen Mwavali"),  
        BankAccount(1003, 30000.0, "Elizabeth Mbugua"),  
        BankAccount(1004, 120000.0, "Silas Obuya"),  
        BankAccount(1005, 70000.0, "Brian Kindiki")  
    };  
    // Displaying initial account details  
    std::cout << "Initial Account Details:\n";  
    for  (int i = 0; i < MAX_ACCOUNTS; ++i) {  
        accounts[i].displayBalance();  
    }  

    // Example of deposit and withdrawal operations  
    std::cout << "\nPerforming transactions...\n";  

accounts[0].deposit(40000.0); // Elisha deposits Ksh40000  
    accounts[1].withdraw(50000.0); // Stephen withdraws Ksh50000  
    accounts[2].withdraw(70000.0); // Elizabeth tries to withdraw Ksh70000 (likely to fail)  
    accounts[3].deposit(50000.0); // Silas deposits Ksh50000  
    accounts[4].withdraw(70000.0); // Brian withdraws Ksh70000  
    // Display for final account details  
     std::cout  <<  "\nFinal Account Details:\n";  
       for (int i = 0; i < MAX_ACCOUNTS; ++i) {  
           accounts[i].displayBalance();  
    }  

    return 0;  
}   

