#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name, code;
    double item_a, item_b, item_c,price_a,price_b,price_c, cost, total_cost,balance, vat, printer, phone, table;
    double payment;


    cout<< "FREMPZ TRADING ENTERPRISE" <<endl;
    cout<< "" <<endl;
    cout<< "Please enter your name" <<endl;
    getline(cin, name);
    cout<< "Please enter your unique id" <<endl;
    getline(cin, code);

    cout<< "" <<endl;
    cout<< "The available items for sale with their respective prices are as follows\n" <<endl;
    cout<< "Available items\t\t\t\tPrice\n";
    cout<< "Printer            \t\t\t$150" <<endl;
    cout<< "Phone              \t\t\t$100" <<endl;
    cout<< "Table           \t\t\t$85" <<endl;
    cout<< "" <<endl;
    cout<< "For Printer purchase, enter the quantity or enter 0 to proceed" <<endl;
    cin>> item_a;
    cout<< "For Phone purchase, enter the quantity or enter 0 to proceed" <<endl;
    cin>> item_b;
    cout<< "For Table purchase, enter the quantity or enter 0 to proceed" <<endl;
    cin>> item_c;

    cout<< "" <<endl;
    printer=150;
    phone=100;
    table=85;
    vat=0.12;
    cost=((printer*item_a)+(phone*item_b)+(table*item_c));
    total_cost=((vat*cost)+cost);





    cout<< "Your total cost(vat included) =$";
    cout<< total_cost <<endl;
    cout<< "How much do you wish to pay?" <<endl;
    cin>>payment;
    balance=total_cost-payment;
    double change = (payment - total_cost);


    if(payment==total_cost)
    {
        cout<< "Thank you for your payment" <<endl;
    }
    else if (payment>total_cost)
    {
        cout<< "Thank you for your payment" <<endl;
        cout<< "Your change will appear in you receipt" <<endl;
        cout<<"Your change is "<< change;

    }
    else
    {
        cout<< "Thank you for your payment" <<endl;
        cout<< "Unfortunately your payment is less than the total cost" <<endl;
        cout<< "You balance will appear in your receipt" <<endl;
    }

    cout<< "" <<endl;
    cout<< "" <<endl;
    cout<<"________________________________________________________________________________________\n"<<endl;
    cout<< "\t\t\t\tFREMPZ TRADING ENTERPRISE\t\t\t\t\t\t" <<endl;
    cout<<"________________________________________________________________________________________\n"<<endl;

    cout<< "\t\t\t\t\tRECEIPT\t\t\t\t\t\t"<<endl;
    cout<< "Name :";
    cout<<  name <<endl;
    cout<< "Unique id :";
    cout<< code <<endl;
    cout<< "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
    cout<< "Items Purchased\t\t\t\tQuantity\t\tPrice($)" <<endl;
    cout<< "Printer \t\t\t\t"  <<item_a<< "\t\t\t"<<printer*item_a<<"\n";
    cout<< "Phone   \t\t\t\t"  <<item_b<< "\t\t\t"<<phone*item_b<<"\n";
    cout<< "Table   \t\t\t\t"  <<item_c<<"\t\t\t"<<table*item_c<<"\n";
    cout<<"\t\t\t\t\t\t   Your cost = $"<<cost;
    cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _\n ";
    cout<< "\nYour total cost(vat included) =$";
    cout<< total_cost <<endl;
    cout<< "\nTotal Payment =$";
    cout<< payment <<endl;
    cout<< "\nYour change =$";
    cout<< change <<endl;
    cout<< "\n\n\n\n\n                         Thank You For Transacting With Us                         ";
    cout<<"\n________________________________________________________________________________________\n";




}
