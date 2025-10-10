#include <iostream>
using namespace std;

int FindHapiness(int n){
    int sum = 0;
    int temp;

    while (n > 0){
        temp = n % 10;
        sum += temp;
        n = n / 10;
    }
    
    if (sum == 1) cout << "Happy Number!"; else cout << "Sad Number" << endl;
    return 0;
}

int main(){

    int n;
    //condition is not working, RA asked me ignore condition.
    // while(true){
        cout << "Enter n: ";
        cin >> n;
        if (n >= 1); 
        else {
            // cout << n << endl;
            cout << "Invalid input!" << endl;
            
            }

    // }
    FindHapiness(n);
}