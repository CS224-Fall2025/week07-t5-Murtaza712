#include <iostream>
using namespace std;

class BankAccount{

    private:
        string accountTitle;
        int balance, limit;

    public:
        BankAccount(): accountTitle(""), balance(0), limit(0){};
        BankAccount(string title, int bal): accountTitle(title), balance(bal), limit(0){};
        BankAccount(string title, int bal, int lim): accountTitle(title), balance(bal), limit(lim){};

        void withdraw(int amount){
            if(amount > balance) cout << "Withdraw failed, insufficient funds" << endl;
            else if (amount > limit) cout << "Withdraw failed, faild, daily limit is " << limit << endl;
            else{
                balance -= amount;
                cout << "Withdrew " << amount << "successfully" << endl;
            }
                 
        }

        void deposit(int amount){
            balance += amount;
            cout << "Successfully Deposited " << amount << endl;
        }

        void show(){
            cout << "Closing status:\nTitle: " << accountTitle << ", Current Balance: " << balance << ", Daily limit: " << limit << endl;
        }
};


int main(){
    string title; int bal, lim;
    cin >> title >> bal >> lim;
    // title = "Usman"; bal = 40000; lim = 10000;
    BankAccount account(title,bal,lim);
    
    
    char user_in; int amount; bool flag = true;
    while(flag == true){
        cout << "press 'w' to withdraw, 'd' to deposit followed by the amount and 'q' to exit program: ";
        cin >> user_in; 
        if (user_in == 'w' || user_in == 'd') {
            cin >> amount; // Only read amount if 'w' or 'd' is entered
        }

        switch(user_in){
            case 'w':
                account.withdraw(amount);
                break;
            case 'd':
                account.deposit(amount);
                break;
            case 'q':
                flag = false;

        }
        
    }

    account.show();
    return 0;
}
    
    