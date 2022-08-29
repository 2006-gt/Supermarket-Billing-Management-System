#include<iostream>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include<windows.h>
#include<cctype>
#include<cstdio>
using namespace std;
#define max 100

int Emp_Count=0;
void gotoXY(int,int);

class employee
{
    public:
    char fname[20];
    char lname[20];
    char designation[20];
    int experience;
    int age;
    int salary;
    char Loan;

    int HRA;
    int PF;
    int tax;
    int MealAllowance;
    int TransportAllowance;
    int MedicalAllowance;
    int LoanBalance;
    int LoanDebit;
    int grosspay;
    int workingHours;
    int DA;
    char jg;
    char remarks[10];

    int code;
    void preface();
    void access();
    void main_menu();
    void modify_remarks(int);
    void Enter();
    void modify_r();
    void editmenu();
    void display_name();
    void modify_F_Name(int);
    void modify_L_Name(int);
    void modifyCode(int);
    void modifyDes(int);
    void modifyExperience(int);
    void modifyAge(int);
    void modifySalary(int);
    void modifyJobGrade(int);
    void Records();
    void delete_r();
    void search_r();
    void save_r();
    void get_r();
    void display_e_Payslip();
};
employee emp[max],tempemp[max];

void gotoXY(int X, int Y)
{
    COORD coordinates;
    coordinates.X = X;
    coordinates.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



void employee:: preface()
{
    system("color A0");
char c=196;
cout<<endl<<endl<<endl;
gotoXY(27,7);
cout<<"M";Sleep(25);cout<<"i";Sleep(25);cout<<"n";Sleep(25);cout<<"i";Sleep(25);cout<<" ";Sleep(25);cout<<"P";Sleep(25);
cout<<"r";Sleep(25);cout<<"o";Sleep(25);cout<<"j";Sleep(25);cout<<"e";Sleep(25);cout<<"c";Sleep(25);cout<<"t";Sleep(25);
cout<<" ";Sleep(25);cout<<"o";Sleep(25);cout<<"n";Sleep(25);cout<<" ";Sleep(25);cout<<"P";Sleep(25);cout<<"A";Sleep(25);
cout<<"Y";Sleep(25);cout<<"R";Sleep(25);cout<<"O";Sleep(25);cout<<"L";Sleep(25);cout<<"L";Sleep(25);cout<<" ";Sleep(25);
cout<<"M";Sleep(25);cout<<"A";Sleep(25);cout<<"N";Sleep(25);cout<<"A";Sleep(25);cout<<"G";Sleep(25);cout<<"E";Sleep(25);
cout<<"M";Sleep(25);cout<<"E";Sleep(25);cout<<"N";Sleep(25);cout<<"T";Sleep(25);cout<<" ";Sleep(25);cout<<"S";Sleep(25);
cout<<"Y";Sleep(25);cout<<"S";Sleep(25);cout<<"T";Sleep(25);cout<<"E";Sleep(25);cout<<"M";Sleep(500);
    gotoXY(25,8);
for(int i=0;i<47;i++)
   cout<<c;
for(int i=0;i<47;i++)
   cout<<c;
    gotoXY(27,11);
cout<<"D";Sleep(25);cout<<"e";Sleep(25);cout<<"s";Sleep(25);cout<<"i";Sleep(25);cout<<"g";Sleep(25);cout<<"n";Sleep(25);
cout<<"e";Sleep(25);cout<<"d";Sleep(25);cout<<" ";Sleep(25);cout<<"a";Sleep(25);cout<<"n";Sleep(25);cout<<"d";Sleep(25);
cout<<" ";Sleep(25);cout<<"P";Sleep(25);cout<<"r";Sleep(25);cout<<"o";Sleep(25);cout<<"g";Sleep(25);cout<<"r";Sleep(25);
cout<<"a";Sleep(25);cout<<"m";Sleep(25);cout<<"m";Sleep(25);cout<<"e";Sleep(25);cout<<"d";Sleep(25);cout<<" ";Sleep(25);
cout<<"b";Sleep(25);cout<<"y:";Sleep(500);
    gotoXY(27,12);
for(int i=0;i<29;i++)
cout<<c;
gotoXY(27,14);
cout<<"Y";Sleep(25);cout<<"A";Sleep(25);cout<<"S";Sleep(25);cout<<"H";Sleep(25);cout<<" ";Sleep(25);cout<<"B";Sleep(25);
cout<<"I";Sleep(25);cout<<"S";Sleep(25);cout<<"H";Sleep(25);cout<<"T";Sleep(500);
gotoXY(27,15);
for(int i=0;i<12;i++)
   cout<<c;
   gotoXY(27,16);
cout<<"U";Sleep(25);cout<<"n";Sleep(25);cout<<"i";Sleep(25);cout<<"v";Sleep(25);cout<<"e";Sleep(25);cout<<"r";Sleep(25);
cout<<"s";Sleep(25);cout<<"i";Sleep(25);cout<<"t";Sleep(25);cout<<"y";Sleep(25);cout<<" ";Sleep(25);cout<<"R";Sleep(25);
cout<<"o";Sleep(25);cout<<"l";Sleep(25);cout<<"l";Sleep(25);cout<<" ";Sleep(25);cout<<"n";Sleep(25);cout<<"o";Sleep(25);
cout<<" ";Sleep(25);cout<<"2";Sleep(25);cout<<"0";Sleep(25);cout<<"1";Sleep(25);cout<<"8";Sleep(25);cout<<"8";Sleep(25);
cout<<"7";Sleep(25);cout<<"2";Sleep(500);
gotoXY(27,19);
cout<<"3";Sleep(25);cout<<"r";Sleep(25);cout<<"d";Sleep(25);cout<<" ";Sleep(25);cout<<"S";Sleep(25);cout<<"e";Sleep(25);
cout<<"m";Sleep(25);cout<<"e";Sleep(25);cout<<"s";Sleep(25);cout<<"t";Sleep(25);cout<<"e";Sleep(25);cout<<"r";Sleep(500);
gotoXY(27,20);
cout<<"G";Sleep(25);cout<<"r";Sleep(25);cout<<"a";Sleep(25);cout<<"p";Sleep(25);cout<<"h";Sleep(25);cout<<"i";Sleep(25);
cout<<"c";Sleep(25);cout<<" ";Sleep(25);cout<<"E";Sleep(25);cout<<"r";Sleep(25);cout<<"a";Sleep(25);cout<<" ";Sleep(25);
cout<<"H";Sleep(25);cout<<"i";Sleep(25);cout<<"l";Sleep(25);cout<<"l";Sleep(25);cout<<" ";Sleep(25);cout<<"U";Sleep(25);
cout<<"n";Sleep(25);cout<<"i";Sleep(25);cout<<"v";Sleep(25);cout<<"e";Sleep(25);cout<<"r";Sleep(25);
cout<<"s";Sleep(25);cout<<"i";Sleep(25);cout<<"t";Sleep(25);cout<<"y";Sleep(25);cout<<",";Sleep(25);cout<<" ";Sleep(25);
cout<<"D";Sleep(25);cout<<"e";Sleep(25);cout<<"h";Sleep(25);cout<<"r";Sleep(25);cout<<"a";Sleep(25);cout<<"d";Sleep(25);
cout<<"u";Sleep(25);cout<<"n";Sleep(25);
gotoXY(27,21);
for(int i=0;i<44;i++)
   cout<<c;
Sleep(500);
    gotoXY(27,23);
cout<<"You will be directed to the signin window in 5 seconds..";
Sleep(5000);   
}
int retry=3;
void employee:: access()
{
    system("cls");
    system("color b4");
    char UserName[30],Password[30],ch;
    int i=0;
    gotoXY(20,6);
    cout<<"This is the login Window!! You need to verify yourself by entering Username and password..";
    gotoXY(20,8);
    cout<<"Do not share your password with anyone";
    gotoXY(20,10);
    cout<<"Enter UserName: ";
    cin>>UserName;
    gotoXY(20,12);
    cout<<"Enter Password : ";
    while(1)
    {
        ch =getch();
        if(ch==13)
            break;
        if(ch==32||ch==8)
            continue;
        else
        {
            cout<<"*";
            Password[i]=ch;
            i++;
        }
    }
    Password[i] = '\0';
    if(strcmp(UserName,"YASH")==0 && strcmp(Password,"Aanchal13")==0)
    {
        system("cls");
        gotoXY(27,10);
        cout<<"Login Success!!!";
        gotoXY(21,12);
        cout<<"Directing to Main Menu in 5 Seconds";
        Sleep(5000);
    }
    else
    {
        system("cls");
        gotoXY(27,10);
        printf("Access Denied!!!\a");
        gotoXY(27,12);
        retry--;
        cout<<retry<<" attempts left";
        if(retry!=0)
        {
            gotoXY(27,14);
            cout<<"Try Again";
            Sleep(2000);
            access();
        }
        else
        {
            gotoXY(27,14);
            cout<<"OOPS!!! Only admin can have access to the application";
            Sleep(3000);
            exit(0);
        }
    }
}

void employee::main_menu()
{
    system("cls");
    system("color e0");
    gotoXY(23,6);
    cout<<"Welcome to the Application Main Menu";
    gotoXY(16,4);
    cout<<"**  Payroll Management System by YASH BISHT  **** ";
    gotoXY(12,8);
    cout<<"Press  e-> Enter New Record.";
    gotoXY(57,8);
    cout<<"Press  m-> Modify a Record.";
    gotoXY(12,11);
    cout<<"Press  d-> Delete a Record.";
    gotoXY(57,11);
    cout<<"Press  s-> Search a Record.";
    gotoXY(12,14);
    cout<<"Press  r-> Show all Employee Record";
    gotoXY(57,14);
    cout<<"Press  p-> Print Employee PaySlip.";
    gotoXY(12,17);
    cout<<"Press n-> Name List of Employees.";
    gotoXY(57,17);
    cout<<"Press q-> Quit Program.";
    gotoXY(16,23);
    cout<<"Select Your Option ====> ";
}

void employee::Enter()
{
    system("cls");
    int i=Emp_Count;
    if(i==99)
    {
        gotoXY(28,4);
        cout<<"OOPS!! Limit of storing employee record is reached. Sorry for the inconvenience...";
        exit(0);
    }
    int sal,PF,TAX,HRA,MealA,MedicalA,TransportA,LoanBal,LoanDeb,h,DA;
    char loan;
    Emp_Count+=1;
    gotoXY(28,4);
    cout<<"Enter New Record";
    gotoXY(10,6);
    cout<<"First Name : ";
    cin>>emp[i].fname;
    gotoXY(35,6);
    cout<<"Last Name : ";
    cin>>emp[i].lname;
    gotoXY(10,8);
    cout<<"Code : ";
    cin>>emp[i].code;
    gotoXY(10,10);
    cout<<"Designation : ";
    cin>>emp[i].designation;
    gotoXY(10,12);
    cout<<"Years of Experience : ";
    cin>>emp[i].experience;
    gotoXY(10,14);
    cout<<"Age : ";
    cin>>emp[i].age;
    gotoXY(10,16);
    cout<<"Enter Working Hours : ";
    cin>>h;
    gotoXY(10,18);
    cout<<"Enter Job Grade: ";
    cin>>jg;
    gotoXY(10,20);
    cout<<"Enter remarks(Good, Ok, Bad)";
    cin>>emp[i].remarks;
    sal = h*700;
    if(emp[i].experience<=3)
        sal+=3000;
    else if(emp[i].experience>3&&emp[i].experience<=5)
        sal+=5000;
    else if(emp[i].experience>5&&emp[i].experience<=10)
        sal+=10000;
    else
        sal+=20000;
    jg=toupper(jg);
    emp[i].jg=jg;
    switch(jg)
    {
    case 'A':
        sal+=10000;
        break;
    case 'B':
        sal+=7500;
        break;
    case 'C':
        sal+=5000;
        break;
    case 'D':
        sal+=3000;
        break;
    default:
        sal+=500;
    }

    emp[i].workingHours = h;
    do
    {
        gotoXY(10,22);
        cout<<"Any Loan (Y/N) ?: \b \b";
        loan=getche();
        if(loan=='Y'|| loan == 'y' || loan =='n' || loan == 'N')
            break;
    }while(1);
    if(loan=='y'|| loan=='Y')
    {
    gotoXY(10,24);
    cout<<"Enter Loan Balance : ";
    cin>>LoanBal;
    }
    else
    {
        LoanBal=0;
    }
    gotoXY(14,26);
    cout<<"Recorded Successfully...!!!";

    TAX =  0.05 * sal;
    DA = 1.20 * sal;
    PF = 0.15 * sal;
    HRA = sal * 0.20;
    MealA = 500;
    MedicalA = 500;
    TransportA = 500;
    LoanDeb = sal * 0.10;
    if(LoanDeb > LoanBal)
    {
        LoanBal = 0;
        LoanDeb = LoanBal;
    }
    emp[i].salary = sal;
    emp[i].DA = DA;
    emp[i].tax=TAX;
    emp[i].PF = PF;
    emp[i].HRA = HRA;
    emp[i].MealAllowance = MealA;
    emp[i].MedicalAllowance = MedicalA;
    emp[i].TransportAllowance = TransportA;
    emp[i].LoanBalance = LoanBal-LoanDeb;
    emp[i].Loan = loan;
    emp[i].LoanDebit = LoanDeb;
    emp[i].grosspay = (sal+MealA+MedicalA+TransportA+HRA+DA)-(PF+TAX+LoanDeb) ;
    getch();
}

void employee::display_name()
{
    system("cls");
    gotoXY(20,4);
    printf("       *** Employees Name List ***");
    gotoXY(0,6);
    cout<<"S.NO";
    gotoXY(6,6);
    cout<<"First Name";
    gotoXY(19,6);
    cout<<"Last Name";
    gotoXY(39,6);
    cout<<"Job Grade";
    gotoXY(54,6);
    cout<<"Remarks";
    gotoXY(0,7);
    cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0,j=8;i<=Emp_Count-1;i++,j++)
    {
        gotoXY(0,j);
        cout<<i+1;
        gotoXY(6,j);
        cout<<emp[i].fname;
        gotoXY(19,j);
        cout<<emp[i].lname;
        gotoXY(39,j);
        cout<<emp[i].jg;
        gotoXY(54,j);
        cout<<emp[i].remarks;
    }
    getch();
}

void employee::modify_r()
{
    employee obj;
    system("cls");
    int jobcode;
    gotoXY(28,4);
    cout<<"You can Modify a Record here..";
    int i;
    char option;
    gotoXY(10,6);
    cout<<"Enter the employee code To Edit : ";
    cin>>jobcode;
    obj.editmenu();
    for(i=0;i<=Emp_Count-1;i++)
    {
        if(emp[i].code==jobcode)
        {
            while((option=cin.get())!='q')
            {
                switch(option)
                {
                    case 'f':
                        obj.modify_F_Name(i);
                        break;
                    case 'l':
                        obj.modify_L_Name(i);
                        break;
                    case 'c':
                        obj.modifyCode(i);
                        break;
                    case 'd':
                        obj.modifyDes(i);
                        break;
                    case 'e':
                        obj.modifyExperience(i);
                        break;
                    case 'a':
                        obj.modifyAge(i);
                        break;
                    case 's':
                        obj.modifySalary(i);
                        break;
                    case 'j':
                        obj.modifyJobGrade(i);
                        break;
                    case 'r':
                        obj.modify_remarks(i);
                        break;
                }
                obj.editmenu();
            }
        }
    }
}

void employee::editmenu()
{
    system("cls");
    gotoXY(28,4);
    cout<<"Modify An Entry";
    gotoXY(10,6);
    cout<<"What Do You Want To Modify";
    gotoXY(12,8);
    cout<<"f ->First Name ";
    gotoXY(32,8);
    cout<<"l ->Last Name ";
    gotoXY(12,10);
    cout<<"c -> Code ";
    gotoXY(32,10);
    cout<<"d -> Designation";
    gotoXY(12,12);
    cout<<"e -> Experience ";
    gotoXY(32,12);
    cout<<"a -> Age";
    gotoXY(12,14);
    cout<<"s -> Salary";
    gotoXY(32,14);
    cout<<"j -> Job Grade";
    gotoXY(12,16);
    cout<<"r ->Remarks";
    gotoXY(32,16);
    cout<<"q -> QUIT";
    gotoXY(22,20);
    cout<<"Enter Choice ---->>>  ";
}

void employee::modify_F_Name(int i)
{
    gotoXY(10,22);
    cout<<"Enter New First Name----->  ";
    cin>>emp[i].fname;
}
void employee::modify_L_Name(int i)
{
    gotoXY(10,22);
    cout<<"Enter New Last Name----->  ";
    cin>>emp[i].lname;
}


void employee::modifyCode(int i)
{
    gotoXY(10,22);
    cout<<"Enter New Job Code----->  ";
    cin>>emp[i].code;
}

void employee::modifyDes(int i)
{
    gotoXY(10,22);
    cout<<"enter new designation----->  ";
    cin>>emp[i].designation;
}

void employee::modifyExperience(int i)
{
    gotoXY(10,22);
    cout<<"Enter new Years of Experience";
    cin>>emp[i].experience;
    modifySalary(i);
}
void employee::modifyAge(int i)
{
    gotoXY(10,22);
    cout<<"Enter new Age ";
    cin>>emp[i].age;
}
void employee::modifySalary(int i)
{
    int sal,PF,TAX,HRA,MealA,MedicalA,TransportA,LoanBal=emp[i].LoanBalance,LoanDeb,DA;
    char loan;
    gotoXY(10,24);
    cout<<"Enter new Salary ";
    cin>>sal;
    DA = 1.20 * sal;
    TAX =  0.05 * sal;
    PF = 0.15 * sal;
    HRA = 4000;
    MealA = 500;
    MedicalA = 500;
    TransportA = 500;
    LoanDeb = sal * 0.10;
    if(LoanDeb > LoanBal)
    {
        LoanBal = 0;
        LoanDeb = LoanBal;
    }
    emp[i].salary = sal;
    emp[i].DA=DA;
    emp[i].tax=TAX;
    emp[i].PF = PF;
    emp[i].HRA = HRA;
    emp[i].MealAllowance = MealA;
    emp[i].MedicalAllowance = MedicalA;
    emp[i].TransportAllowance = TransportA;
    emp[i].LoanBalance = LoanBal;
    emp[i].Loan = loan;
    emp[i].LoanDebit = LoanDeb;
    emp[i].grosspay = (sal+MealA+MedicalA+TransportA+HRA+DA)-(PF+TAX+LoanDeb) ;
}
void employee::modifyJobGrade(int i)
{
    gotoXY(10,22);
    cout<<"Enter new Job Grade: ";
    cin>>emp[i].jg;
    modifySalary(i);
}
void employee::modify_remarks(int i)
{
    gotoXY(10,22);
    cout<<"Enter new remarks:";
    cin>>emp[i].remarks;
}

void  employee::Records()
{
    system("cls");
    gotoXY(20,4);
    printf("       *** Record of All the Employees ***");
    gotoXY(0,6);
    cout<<"S.NO";
    gotoXY(6,6);
    cout<<"First Name";
    gotoXY(19,6);
    cout<<"Last Name";
    gotoXY(30,6);
    cout<<"Code";
    gotoXY(37,6);
    cout<<"Designation";
    gotoXY(57,6);
    cout<<"Years(EXP)";
    gotoXY(74,6);
    cout<<"Age";
    gotoXY(82,6);
    cout<<"Salary";
    gotoXY(95,6);
    cout<<"Job Grade";
    gotoXY(108,6);
    cout<<"Remarks";
    cout<<endl;
    gotoXY(0,7);
    cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0,j=8;i<=Emp_Count-1;i++,j++)
    {
        gotoXY(0,j);
        cout<<i+1;
        gotoXY(6,j);
        cout<<emp[i].fname;
        gotoXY(19,j);
        cout<<emp[i].lname;
        gotoXY(30,j);
        cout<<emp[i].code;
        gotoXY(37,j);
        cout<<emp[i].designation;
        gotoXY(57,j);
        cout<<emp[i].experience;
        gotoXY(74,j);
        cout<<emp[i].age;
        gotoXY(82,j);
        cout<<emp[i].grosspay;
        gotoXY(95,j);
        cout<<emp[i].jg;
        gotoXY(108,j);
        cout<<emp[i].remarks;
    }
    getch();
}

void employee::delete_r()
{
    for(int i=0;i<Emp_Count;i++)
    {
        tempemp[i]=emp[i];
    }
    system("cls");
    int code;
    int check=-1;
    gotoXY(28,4);
    printf("Delete a Record");
    gotoXY(10,6);
    cout<<"Enter the JobCode To Delete That Record  :";
    cin>>code;
    int i,j;
    for(i=0;i<=Emp_Count-1;i++)
    {
        if(emp[i].code==code)
        {
            check=i;
        }
    }
    if(check!=-1)
    {
        for(i=0,j=0;i<=Emp_Count-1;i++,j++)
        {
            if(i==check)
            {
                i++;
            }
            emp[j]=tempemp[i];
        }
        Emp_Count--;
    }
}

void employee::search_r()
{
    system("cls");
    int jobcode;
    bool found = false;
    gotoXY(10,4);
    cout<<"You can Search only through the Job code of an Employee";
    gotoXY(10,6);
    cout<<"Enter Code Of the Employee : ";
    cin>>jobcode;
    for(int i=0;i<=Emp_Count-1;i++)
    {
        if(emp[i].code==jobcode)
        {
            gotoXY(6,8);
            cout<<"First Name";
            gotoXY(19,8);
            cout<<"Last Name";
            gotoXY(30,8);
            cout<<"Code";
            gotoXY(37,8);
            cout<<"Designation";
            gotoXY(57,8);
            cout<<"Years(EXP)";
            gotoXY(74,8);
            cout<<"Age";
            gotoXY(82,8);
            cout<<"Salary";
            gotoXY(95,8);
            cout<<"Job Grade";
            gotoXY(108,8);
            cout<<"Remarks";
            cout<<endl;
            gotoXY(6,9);
            cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
            gotoXY(6,11);
            cout<<emp[i].fname;
            gotoXY(19,11);
            cout<<emp[i].lname;
            gotoXY(30,11);
            cout<<emp[i].code;
            gotoXY(37,11);
            cout<<emp[i].designation;
            gotoXY(57,11);
            cout<<emp[i].experience;
            gotoXY(74,11);
            cout<<emp[i].age;
            gotoXY(82,11);
            cout<<emp[i].grosspay;
            gotoXY(95,11);
            cout<<emp[i].jg;
            gotoXY(108,11);
            cout<<emp[i].remarks;
            found = true;
        }
    }
    if(!found)
    {
        gotoXY(26,11);
        cout<<"No records Found...!!!\a";
    }
    getch();
}

void employee::save_r()
{
    if(Emp_Count==0)
    {
        remove("Employee.txt");
    }
    else
    {
        FILE *fp;
        fp = fopen("Employee.txt","w");
        //fprintf(fp,"Name\tCode\tDesignation\tExperience\tAge\tSalary\tLoan\tHRA\tPF\tTax\tMealAllow\tTransportAllow\tMedicalAllow\tLoanBal\tLoanDeb\tGrossPay\tWorkingHrs\tJobgrade\n");
        for(int i=0;i<Emp_Count;i++)
        {
            fprintf(fp,"%s %s\t%d\t%s\t\t%d\t%d\t%d\t%c\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\t%s\n",emp[i].fname,emp[i].lname,emp[i].code,emp[i].designation,emp[i].experience,emp[i].age,emp[i].salary,emp[i].Loan,emp[i].HRA,emp[i].PF,emp[i].tax,emp[i].MealAllowance,emp[i].TransportAllowance,emp[i].MedicalAllowance,emp[i].LoanBalance,emp[i].LoanDebit,emp[i].grosspay,emp[i].workingHours,emp[i].DA,emp[i].jg,emp[i].remarks);
        }
        fclose(fp);
    }
}

void employee::get_r()
{
    FILE *fp;
    fp = fopen("Employee.txt","r");
    int c=0;
    if(fp!=NULL)
    {

        while(feof(fp)==0)
        {
            fscanf(fp,"%s %s\t%d\t%s\t%d\t%d\t%d\t%c\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\t%s\n",&emp[c].fname,&emp[c].lname,&emp[c].code,&emp[c].designation,&emp[c].experience,&emp[c].age,&emp[c].salary,&emp[c].Loan,&emp[c].HRA,&emp[c].PF,&emp[c].tax,&emp[c].MealAllowance,&emp[c].TransportAllowance,&emp[c].MedicalAllowance,&emp[c].LoanBalance,&emp[c].LoanDebit,&emp[c].grosspay,&emp[c].workingHours,&emp[c].DA,&emp[c].jg,&emp[c].remarks);
            c++;
        }
        Emp_Count=c;
    }
    fclose(fp);
}

void employee::display_e_Payslip()
{
    system("cls");
    gotoXY(10,4);
    int code,i;
    int leave=0;
    int leavecut;
    cout<<"Enter Employee Job Code :";
    cin>>code;
    gotoXY(10,6);
    cout<<"Enter leaves employee have taken this month:";
    cin>>leave;
    system("cls");
    for(i=0;i<=Emp_Count-1;i++)
    {
        if(emp[i].code==code)
        {
            gotoXY(12,6);
            cout<<"Name : "<<emp[i].fname<<" "<<emp[i].lname;
            gotoXY(45,6);
            cout<<"Working Hours : "<<emp[i].workingHours<<" Hrs";
            gotoXY(6,8);
            cout<<"Earnings :-";
            gotoXY(8,10);
            cout<<"Basic Pay : "<<emp[i].salary<<endl;
            gotoXY(8,12);
            cout<<"HRA(30% of Basic): "<<emp[i].HRA<<endl;
            gotoXY(8,14);
            cout<<"DA (120% of Basic):"<<emp[i].DA;
            gotoXY(8,16);
            cout<<"Mid day Meal Allowance : "<<emp[i].MealAllowance<<endl;
            gotoXY(8,18);
            cout<<"Medical Alowance : "<<emp[i].MedicalAllowance<<endl;
            gotoXY(8,20);
            cout<<"Transport Allowance : "<<emp[i].TransportAllowance<<endl;
            gotoXY(40,8);
            cout<<"Deductions :- "<<endl<<endl;
            gotoXY(42,10);
            cout<<"PF : "<<emp[i].PF<<endl;
            gotoXY(42,12);
            cout<<"Tax : "<<emp[i].tax<<endl;
            gotoXY(42,14);
            int l = emp[i].Loan;
            char l2 = toupper(l);
            cout<<"Loan Status : "<<l2<<endl;
            gotoXY(42,16);
            cout<<"Loan Debit This Month : "<<emp[i].LoanDebit<<endl;
            gotoXY(42,18);
            cout<<"Loan Balance : "<<emp[i].LoanBalance<<endl;
            gotoXY(32,22);
            cout<<"Leaves Taken this Month: "<<leave;
            if(emp[i].remarks[0]=='G')
                leavecut=300*leave;
            else if(emp[i].remarks[0]=='O')
                leavecut=700*leave;
            else
                leavecut=1000*leave;
            gotoXY(32,24);
            cout<<"Deduction in Salary due to Leaves Taken : "<<leavecut;
            gotoXY(32,26);
            cout<<"Total Gross Pay : "<<emp[i].grosspay-leavecut;
        }
    }
    getch();
}

int main()
{
    getch();
    employee obj;
    obj.preface();
    obj.access();
    obj.main_menu();
    obj.get_r();
    char option;
    while(1)
    {
        option=getch();
        switch(option)
        {
            case 'r':
                obj.Records();
                break;
            case 'e':
                obj.Enter();
                break;
            case 'd':
                obj.delete_r();
                break;
            case 'm':
                obj.modify_r();
                break;
            case 's':
                obj.search_r();
                break;
            case 'p':
                obj.display_e_Payslip();
                break;
            case 'n':
                obj.display_name();
                break;
            case 'q':
                obj.save_r();
                exit(0);
        }
        obj.main_menu();
    }
    return 0;
}