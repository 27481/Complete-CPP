#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

const int EMP_ID_WIDTH = 8;
const int EMP_NAME_WIDTH = 8;
const int EMP_EMAIL_WIDTH = 8;
const int EMP_NUMERIC_WIDTH = 8;
const int EMP_TOTAL_WIDTH = 8;

struct employee{

    int empId;
    string name;
    double basicSalary;
    double pf;
    double healthInsAmt;
    string email;
};

// Function prototype
void readFile(vector <employee>& v_emp);
void printMenu();
void doTask(vector <employee>& v_emp, int option);
void addEmployee(vector <employee>& v_emp);
int searchEmployee(vector <employee> v_temp, int targetEmpId);
void printEmployees(vector <employee> v_emp);
void printEmployee(employee e);
double getNetSalary(employee e);
void saveToFile(vector <employee> v_emp);
bool deleteEmployee(vector <employee>& v_emp, int targerEmpID);



void readFile(vector <employee>& v_emp){
 ifstream fin("emp.txt");
    if(!fin){
        cout<<"Uable to open database file emp.txt"<<endl
            <<"Make sure that the file exits " <<endl;
        exit(1);
    }
    string line;
    int recNo = 0;
    while(!fin.eof()){
        std::getline(fin, line);
        recNo++;
        // cout<<recNo<<"-"<<line<<endl;
        // since we have successully read a line from the file 
        // so it is time to parse each token field values
        istringstream iss(line);
 
        string strEmpId;
        string strName;
        string strBasicSalary;
        string strPf;
        string strHealthInsAmt;
        string strEmail;

        std:: getline(iss, strEmpId, ','); // 101, John Alter ,5000 , 75, 100, jdoe@gms
        std:: getline(iss, strName, ',');
        std:: getline(iss, strBasicSalary, ',');
        std:: getline(iss, strPf, ',');
        std:: getline(iss, strHealthInsAmt, ',');
        std:: getline(iss, strEmail, ',');

        employee temp;
        temp.empId = atoi(strEmpId.c_str());
        temp.name = strName;
        temp.basicSalary = atof(strBasicSalary.c_str());
        temp.pf = atof(strPf.c_str());
        temp.healthInsAmt = atof(strHealthInsAmt.c_str());
        temp.email = strEmail;

        v_emp.push_back(temp);
    }
    fin.close();
}

void printMenu(){
    cout << "1. Add Employee"<<endl;
    cout << "2. Print Employee"<<endl;
    cout << "3. Search Employee"<<endl;
    cout << "4. Delete Employee"<<endl;
    cout << "5. Save"<<endl;
    cout << "6. Exit"<<endl;
}

void addEmployee (vector <employee>& v_emp){
    employee temp;   // thats a new employee object where we will keep new data
    bool isDuplicate = false;
    do{
        cout<<"Emp ID: ";
        cin>>temp.empId;
        isDuplicate = false;
        if(searchEmployee(v_emp, temp.empId) != -1){
            isDuplicate = true;
            cout<<"Employee id: "<<temp.empId<<"already exits, please input";
        }
    }while(isDuplicate);

    cout <<"Name: ";
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    std::getline(cin, temp.name);

    cout<<"Basic Salary($): ";
    cin>>temp.basicSalary;
    cout<<"PF($): ";
    cin>>temp.pf;
    cout<<"Health Ins($): ";
    cin>>temp.healthInsAmt;
    cout<<"Email: ";
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    std::getline(cin, temp.email);

    v_emp.push_back(temp);
    cout <<"Employee with id: "<< temp.empId <<"added successfully"<<endl;
    cout<<"Total employees: "<< v_emp.size() <<endl <<endl;

}

int searchEmployee(vector <employee>& v_emp, int targetEmpId){
    for(int i=0; i<v_emp.size(); i++){
        if(v_emp[i].empId == targetEmpId){
            return i;   // index of employee object 
        }
    }
    return -1;  // if match is not found 
}

void doTask (vector <employee>& v_emp, int option){
    int targetEmpId;
    int index;
    switch(option){
        case 1: addEmployee(v_emp);
            break;
        case 2: printEmployees(v_emp);
            break;
        case 3: 
        cout <<"Search EmpId to search: " <<endl;
        cin>> targetEmpId;
        index = searchEmployee(v_emp, targetEmpId);
        if(index == -1){
            cout << "Employee with id: "<< targetEmpId <<"does not exits" <<endl;
        }
        else{
            cout <<"Employee with id: "<< targetEmpId <<"found" << endl;
            printEmployee(v_emp[index]);
        }
        break;
        case 4:
        cout <<"Search EmpId to delete: " <<endl;
        cin>> targetEmpId;
        deleteEmployee(v_emp, targetEmpId);
        break;
        case 5: saveToFile(v_emp);
            break;
        default: cout << "Invaild menu option chosen, valid options are from 1 to 6"<<endl;

    }
}

void printEmployees(vector <employee> v_emp){
    cout<<endl;
    // First we need to print the heading 
    cout << setw(EMP_ID_WIDTH) << left << "EmpID"
         << setw(EMP_NAME_WIDTH) << left << "Name"
         << setw(EMP_NAME_WIDTH) << left << "Email"
         << setw(EMP_NAME_WIDTH) << right << "Basic ($)"
         << setw(EMP_NAME_WIDTH) << right << "PF ($)"
         << setw(EMP_NAME_WIDTH) << right << "HltIns($)"
         << setw(EMP_NAME_WIDTH) << right << "Net ($)"
         <<endl;
    cout <<setw(100) << setfill('-')<<" " << endl;
    cout << setfill(' ');

    double totalBasic = 0.0;
    double totalPfDeduction = 0.0;
    double totalHealthIns = 0.0;
    double totalNetSalary = 0.0;

    for(vector <employee>::iterator it = v_emp.begin(); it!= v_emp.end(); it++){
        printEmployee(*it);

        totalBasic += it->basicSalary;
        totalPfDeduction += it->pf;
        totalHealthIns += it->healthInsAmt;
        totalNetSalary += getNetSalary(*it);
    }
    cout <<setw(100) << setfill('-')<<" " << endl;
    cout << setfill(' ');

    cout << setw(EMP_ID_WIDTH) << left << "Total"
        <<setw(EMP_NAME_WIDTH) << left << "In ($)"
        <<setw(EMP_EMAIL_WIDTH) << " "
        <<setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalBasic
        <<setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalPfDeduction
        <<setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalHealthIns
        <<setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalNetSalary
        <<endl;
}
void printEmployee(employee e){
    cout << setw(EMP_ID_WIDTH) << left << e.empId
         << setw(EMP_ID_WIDTH) << left << e.name
         << setw(EMP_NAME_WIDTH) << left << e.email
         << setw(EMP_NAME_WIDTH) << setprecision(2) <<left << e.basicSalary
         << setw(EMP_NAME_WIDTH) << setprecision(2) <<right << e.pf
         << setw(EMP_NAME_WIDTH) << setprecision(2) <<right << e.healthInsAmt
         << setw(EMP_NAME_WIDTH) << setprecision(2) <<right << getNetSalary(e)
         << setw(EMP_NAME_WIDTH) << right << "Net ($)";
};
double getNetSalary(employee e){
    return e.basicSalary - (e.pf + e.healthInsAmt);
};

void saveToFile(vector <employee> v_emp){
    ofstream fout("emp.text");
    if(!fout){
        cout <<"Unable to open the data file emp.txt" << endl;
        return;
    }
    int recCount = 0;
    for(vector <employee>::iterator it = v_emp.begin(); it!= v_emp.end(); ++it){
        fout << it->empId << "," << it->name<<", "<< it->basicSalary<<","
             << it->pf << "," << it->healthInsAmt << "," <<it->email;
            recCount++;
            if(recCount != v_emp.size()){
                fout << endl;
            }
    }
    fout.close();
    cout << "Total of " << recCount << "records saved successfully intot the file"<<endl;


bool deleteEmployee(vector <employee>& v_emp, int targetEmpId)
{
    int index = searchEmployee(v_emp, _Target_EmpidId);
    if(index == -1){
        return false;
    }
    // record found at index
    cout << "Target employee with id: "<<endl;
    printEmployee(v_emp[index]);
    cout << "Are you sure to delete? Input 1 to delete 0 to exit "<<endl;
    int option;
    cin>>option;
    if(option == 1){
        v_emp.erase(v_emp.begin() + index);
        return true;
    }
    return false;
}

int main(){
    vector <employee> v_emp;
    readFile(v_emp);


    cout<<"Total "<< v_emp.size() <<" records read from the data file "<<endl;

    printMenu();

    bool quite = false;
    while(!quite){
        cout<<"Input your option: ";
        int option;   
        cin>>option;

        if(option == 6){
        quite = true;
        }
        else{
        doTask(v_emp, option);
        }
    }    
    return 0;
}