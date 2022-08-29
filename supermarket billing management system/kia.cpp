#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

class shop{
private:
int pcode;
float price;
float discount;
string pname;

public: 
void menu();
void admin();
void buyer();
void add();
void edit();
void rem();
void list();
void receipt();
};

void shop::menu(){
    system("color d0");
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t         GEHU SUPERMARKET            \n";
    cout<<"\t\t\t\t             DEHRADUN                \n";
    cout<<"\t\t\t\t____________ MAIN MENU_______________\n";
    cout<<"\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t_____________________________________\n\n\n\n";

    cout<<"\t\t\t\t\t[ 1) Administrator       ]\n";
    cout<<"\t\t\t\t\t[                        ]\n";
    cout<<"\t\t\t\t\t[ 2) Buyer               ]\n";
    cout<<"\t\t\t\t\t[                        ]\n";
    cout<<"\t\t\t\t\t[ 3) Exit                ]\n";
    cout<<"\t\t\t\t\t[                        ]\n";

    cout<<"\t\t\t\t\t Select one option!";

    cin>> choice;
    system("cls");

    switch(choice){
        case 1:
        n:
        cout<<"\t\t\t Please login  \n";
        cout<<"\t\t\t Enter your e-mail ID";
        cin>>email;
        cout<<"\t\t\t Enter Password \n";
        cin>>password;
        system("cls");
        if(email== "gehu@email.com" && password== "Gauri@1403"){
            admin();
        }
        else{
            cout<<" invalid username and password. Please check your credentials\n";
            system("pause");
            system("cls");
            goto n;
        }
        break;

        case 2:{
            buyer();
        }

        case 3: 
        {
            exit(0);
        }

        default : 
        {
            cout<<" please select from the given options";
            system("cls");
        }

    }
   goto m;
   getch();

    }

void shop:: admin(){
    system("color 30");
    m:

    int choice;
    cout<<"\n\n\n\t\t\t_____________Admin Menu_______________";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[__________1) Add the Product_____________]";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[__________2) Modify the Product__________]";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[__________3) Delete the Product__________]";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[__________4) Back to main menu___________]";
    cout<<"                                                  \n";

    cout<<"\n\n\t Enter yout choice";
    cin>>choice;
    system("cls");

    switch(choice)
    {
        case 1:
        add();
        break;

        case 2:
        edit();
        break;

        case 3:
        rem();
        break;

        case 4:
        menu();
        break;

        default:
        cout<<"invalid choice";
        system("cls");

    }
goto m;
getch();
}

void shop:: buyer(){
    system("color E0");
    m:
    int choice;
    cout<<"\n\n\n\t\t\t_____________Buyer Menu_______________";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[_____________1) Buy Product______________]";
    cout<<"                                                  \n";
    cout<<"\n\t\t\t[_____________2) go back__________________]";
    cout<<"                                                  \n";

    cout<<"\n\n\t Enter yout choice";
    cin>>choice;
    system("cls");

    switch(choice)
    {
        case 1:
        receipt();
        break;

        case 2:
        menu();
        break;
        
        default:
        cout<<"invalid choice";
        system("cls");
}
goto m;
getch();
}
void shop:: add(){
    m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n; 

    cout<<"\n\n\n\t\t\t Add new product";
    cout<<"\n\n\n\t Add code of product";
    cin>>pcode;
    cout<<"\n\n \tname of the product";
    cin>>pname;
    cout<<"\n\n \tprice of the product";
    cin>>price;
    cout<<"\n\n \tDiscount on the product";
    cin>>discount;
    system("cls");

    data.open("database.txt",ios::in);

    if(!data){
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<< discount<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;

        while(!data.eof()){
            if(c==pcode){
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    
    if(token==1)
    goto m;

    else{
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<< discount<<"\n";
        data.close();
    }
}
    cout<<"\n\n\n\t\trecord inserted!";
    system("pause");
    system("cls");
}

void shop:: edit(){
    fstream data, data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<<"\n\t\t\t Modify the record";
    cout<<"\n\t\t\t Product code:";
    cin>>pkey;
    system("cls");

    data.open("database.txt", ios::in);
    if(!data){
        cout<<"\n\n file doesn't exist!";
    }
    else{
        data1.open("database1.txt", ios::app| ios::out);

        data>>pcode>>pname>>price>>discount;

        while(!data.eof()){
            if(pkey==pcode){
                cout<<"\n\n\t\t New code of Product";
                cin>>c;
                cout<<"\n\n\t Name of the product :";
                cin>>n;
                cout<<"\n\n\t Price of the product :";
                cin>>p;
                cout<<"\n\n\t Discount of the product :";
                cin>>d;
                system("cls");

                data1<<" "<<c<<" "<<n<<" "<<p<<" "<< d<<"\n";

                cout<<"\n\n\t\t\t Record edited!";
                system("cls");
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<< discount<<"\n";
            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0){
            cout<<"\n\n Record not found sorry!!";
            system("cls");
        }
    }
}


void shop:: rem(){
    fstream data, data1;
    int pkey;
    int token = 0;
    cout<<"\n\n\t\t\t Delete Product";
    cout<<"\n\t\t Enter the product code";
    cin>>pkey;
    system("cls");
    data.open("database.txt", ios::in);
    if(!data){
        cout<<"file doesn't exist";
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>discount;
        while(!data.eof()){
            if(pcode==pkey){
                cout<<"Product deleted successfully";
                system("pause");
                system("cls");
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
            }
            data>>pcode>>pname>>price>>discount;
        }
    data.close();
    data1.close();

    remove("datababse.txt");
    rename("database1.txt", "database.txt");

    if(token==0){
        cout<<"\n\n\t\t Record cannot be found";
        system("cls");
    }

    }
}

void shop :: list(){
    fstream data;
    data.open("database.txt", ios::in);
    cout<<"\n\n_______________________________________________\n";
    cout<<"ProCode\t\tName\t\tPrice\n";
    cout<<"\n\n________________________________________________\n";
    data>>pcode>>pname>>price>>discount;
    while(!data.eof()){
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();
    
}

void shop:: receipt(){
    system("color A0");
    m:
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float discount=0;
    float total=0;

    cout<<"\n\n\t\t\t\t RECEIPT";
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n Empty database";
    }

    else{
        data.close();
        do{
        list();
        
        cout<<"\n_______________________________________________________________\n";
        cout<<"\n|                                                              \n";
        cout<<"\n|                 Please place the order                       \n";
        cout<<"\n_______________________________________________________________\n";
        
            cout<<"\n\n Enter Product code: ";
            cin>>arrc[c];
            cout<<"\n\nEnter the Product Quantity:";
            cin>>arrq[c];
            system("cls");
           for(int i=0; i<c; i++){
                if(arrc[c]==arrc[i]){
                    cout<<"\n\n Duplicate product code. Please try again!";
                    system("pause");
                    system("cls");
                    goto m;
                }
            }
            c=c+1;
            
            cout<<"Product bought successfully!";
            system("pause");
            cout<<"\n\n Do you want to buy another product? if yes then press y else no ";
            cin>>choice;
            system("cls");

        }while(choice == 'y');
        system("color 07");
        cout<<"\n\n\n\t\t\t____________________RECEIPT_______________________\n";
        cout<<"\nProduct No\t Product Name\t Product Quantity\tPrice\tAmount\tAmount with discount\n";

            
        for(int i=0; i<c; i++){
            data.open("database.txt", ios::in);
            while(!data.eof()){
                
            data>>pcode>>pname>>price>>discount;
                if(pcode==arrc[i]){
                    amount=price*arrq[i];
                    discount=amount-(amount*discount/100);
                    total=total+discount;
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t\t"<<price<<"\t"<<amount<<"\t\t"<<discount;
                }
                
                data>>pcode>>pname>>price>>discount;
            }

        }
        
        data.close();
        
    }
    cout<<"\n\n_____________________________________________________";
    cout<<"\n Total Amount : "<<total;
    system("pause");
    system("cls");
    getch;
}

int main(){
    
    shop s;
    s.menu();
    
}