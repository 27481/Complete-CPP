#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void login();
void registration();
void forgot();



int main(){

    int c;
    cout<<"\t\t\t_________________________________\n\n\n";
    cout<<"\t\t\t             Welcome to the Login page \n\n\n";
    cout<<"\t\t\t______________Welcome to the Login page ____________\n\n\n";
    cout<<"\t\t\t______________Menu ____________\n\n\n";
    cout<<"                                                          \n\n";
    cout<<"\t Press 1 to LOGIC                      |"<<endl;
    cout<<"\t Press 2 to REGISTER                   |"<<endl;
    cout<<"\t Press 3 if you forgot your PASSWORD   |"<<endl;
    cout<<"\n\t\t\t Please enter you choice: ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
             cout<<"\t\t\t Thanlyou! \n\n";
             break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from the option given above \n"<<endl;
            main();
    }



    return 0;
}

void login(){
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password : "<<endl;
    cout<<"\t\t\t USERNAME";
    cin>>userId;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;

    // ofstream MYfile(records.txt);

    ifstream input(records.txt);

    while(input>>id>>pass){
        if(id == userId && pass==password){
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count==1){
        cout<<userId<<"\n Your Login is successful \n Thanks for logging in !";
        main();
    }
    else{
        cout<<"\n Login Error \n Please check your username and password";
    }
}

void registration(){
    string ruserID, rpassword, rid, rpass;
    
    system("cls");
    cout<<"\t\t\t Enter the username :";
    cin>>ruserID;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserID<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is successfull! \n";
    main();
}

void forgot(){
    int option;
    system("cls");
    cout<<"\t\t\t You forgot the password? No worries \n";
    cout<<"Press 1 to search your id by username"<<endl;
    cout<<"Press 2 to go back to the main menu"<<endl;
    cout<<"\t\t\t Enter your choice :";
    cin>>option;

    switch (option){

        case 1:{
            int count =0;
            string suserId, sid, spass;
            cout<<"\n\t\t Enter the username you remebered";
            cin>>suserId;

            // ifstream is used if we want to check\read from the file

            ifstream f2("records.txt"); 
            while(f2>>sid>>spass){ // here we are checking inside the file useing ifstream object if sid exists inside the file 
                if(sid==suserId){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\n Your account is found! \n";
                cout<<"\n\n Your password is : " <<spass;
                main();
            }
            else{
                cout<<"\n\t Sorry! your account is not found! \n";
            }
            break;
        }

        case 2:{
            main();
        }
        default:
            cout<<"\t\t\t Wrong choice! Please try again "<<endl;
            forgot();
    }
}