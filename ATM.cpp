#include <iostream>
using namespace std;

void token()
{
    cout << "\n-------------------State Bank Of India-----------------";
    cout << "\n1. Deposit Amount";
    cout << "\n2. Check Balance";
    cout << "\n3. Withdraw Amount";
    cout << "\n4. Exit";
    cout << "\nENTER YOUR CHOICE:- ";
}

int main()
{
    int choice;
    int balance = 0;
    int Deposit;
    int withdraw;
    do
    {
        token();
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter Amount in rs. (Deposit):- "<<endl;
            cin>>Deposit;
            balance += Deposit;
            cout<<"Amount has been Deposited!!!"<<endl;
            cout<<"Available Balance:= "<<balance<<endl<<endl;
        }

        else if(choice==2)
        {
            cout<<"Balance is:- "<<balance<<endl<<endl;
        }

        else if(choice==3)
        {
            cout<<"Enter Amount in rs. (withdraw):- "<<endl;
            cin>>withdraw;
            if(withdraw <= balance)
            {
                cout<<"Amount has been Withdrawn!!!"<<endl;
                balance -= withdraw;
                cout<<"Available Balance:= "<<balance<<endl<<endl;
            }
            else
            {
                cout<<"Insufficient Balance!! Available Balance:- "<<balance<<endl<<endl;
            }
        }


        else if(choice==4)
        {
            cout<<"Thank you:)"<<endl<<endl;
        }


        else
        {
            cout<<"invalid token, try again"<<endl<<endl;
        }

    } 
    while (choice!= 4);

    return 0;
    
}
