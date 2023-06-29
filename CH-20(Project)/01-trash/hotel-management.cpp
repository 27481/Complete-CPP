#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    int choice;
    // Quantity 
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
    // Food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, schicken=0;
    // Total proce of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_shake=0, Total_chicken=0;

 
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodle;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin>>Qchicken;

    cout<<"\n\t\t\t Please select from the menu options :";
    cout<<"\nn1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger:";
    cout<<"\n4) Noodles:";
    cout<<"\n5) shake:";
    cout<<"\n6) Chicken-roll:";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice:";
    cin>>choice;

    switch(choice){
        case 1 :
        cout<<"Enter the number of rooms you want";
        cin>>quant;

        if(Qrooms-Srooms >= quant){
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<"These many rooms have been alloted to you:";
        }
        else
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"are the remaining rooms in hotel";
            break;
        
        case 2:
        cout<<"Enter Pasta Quantity :";
        cin>>quant;
        if(Qpasta-Srooms >= quant){
            Total_pasta=Spasta+quant;
            Total_rooms=Total_pasta+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"Pasta is the order:";
        }
        else
        cout<<"\n\tonly"<<Qpasta-Spasta<<"Pasta remaining in hotel :";
        break;

        case 3:
        cout<<"Enter Pasta Quantity :";
        cin>>quant;
        if(Qburger-Sburger >= quant){
            Total_burger=Spasta+quant;
            Total_rooms=Total_pasta+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"Pasta is the order! ";
        }
        else
        cout<<"\n\tonly"<<Qburger-Sburger<<"Burger remaining in hotel :";
        break;

        case 4:
        cout<<"Enter Noodle Quantity :";
        cin>>quant;
        if(Qnoodle-Snoodle >= quant){
            Snoodle=Spasta+quant;
            Total_rooms=Total_pasta+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"Pasta is the order! ";
        }
        else
        cout<<"\n\tonly"<<Qburger-Sburger<<"Burger remaining in hotel :";
        break;

        case 5:
        cout<<"Enter Shakes Quantity :";
        cin>>quant;
        if(Qshake-Sshake >= quant){
            Sshake=Sshake+quant;
            Total_shake=Total_shake+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"Pasta is the order! ";
        }
        else
        cout<<"\n\tonly"<<Qburger-Sburger<<"Burger remaining in hotel :";
        break;
    }

    return 0;
}
 