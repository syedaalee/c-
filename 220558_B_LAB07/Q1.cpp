//ALEENA FATIMA
//220558

//Task 1

#include <iostream>
#include<string>
using namespace std;

struct Person {
    string name;
    int accNumber;
    double balanceCustomer;

};
void printCustomerBalance(Person customer[], int n)
{
    for (int i=0 ; i < n; i++)
    {
        if (customer[i].balanceCustomer < 200) {
            cout << customer[i].name << endl;
        }
    }
}

void addingValue(Person customer[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        if (customer[i].balanceCustomer > 1000)
        {
            customer[i].balanceCustomer += 100;
            cout << customer[i].name << ":" << customer[i].balanceCustomer << endl;
        }

    }
}
/*int main()
{
    Person customer[2] = {
        {"Yemen", 1234567 , 500},
        {"Shyyan" , 13489 , 1200},
    };
    int n = 2;
    printCustomerBalance(customer, n);
    addingValue(customer, n);

    return 0;
}*/

