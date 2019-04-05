#include <iostream>
using namespace std;

int main()
{
    int user_amount {0};
    
    const int dollars {100};
    const int quarters {25};
    const int dimes {10};
    const int nickels {5};
    const int pennies {1};
    
    int quantity_dollars {0};
    int quantity_quarters {0};
    int quantity_dimes {0};
    int quantity_nickels {0};
    int quantity_pennies {0};
    
	cout << "Enter an amount in cents : ";
    cin >> user_amount;
    
    quantity_dollars = user_amount/dollars;
    user_amount %= dollars;
    
    quantity_quarters = user_amount/quarters;
    user_amount %= quarters;
    
    quantity_dimes = user_amount/dimes;
    user_amount %= dimes;
    
    quantity_nickels = user_amount/nickels;
    user_amount %= nickels;
    
    quantity_pennies = user_amount/pennies;
    user_amount %= pennies;
    
    cout << "dollars  : " << quantity_dollars << endl;
    cout << "quarters : " << quantity_quarters << endl;
    cout << "dimes    : " << quantity_dimes << endl;
    cout << "nickels  : " << quantity_nickels << endl;
    cout << "pennies  : " << quantity_pennies << endl;
    
    
    return 0;
}
