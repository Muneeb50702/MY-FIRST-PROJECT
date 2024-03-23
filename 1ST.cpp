#include <iostream>
#include<windows.h>
using namespace std;
void start();
int menu();
int k=0;


int main ()
{
    start();
    int n=100;
    string name[n];
    string no[n];
    int check;
    check=menu();
    do{
        //add contacts
        if (check==1){
            cout<<"\t\t\t\t\t\t NAME :";
            cin>>name[k];
            cout<<"\t\t\t\t\t\t NUMBER :";
            cin>>no[k];
            k++;
       
        }
        //display contacts
        else if(check==2){
            for(int i=0; i<100; i++){
                if (name[i]!="\0")
                cout<<"\t\t\t\t\t Name : "<<name[i]<<"       Phone :"<<no[i]<<endl;
                else 
                break;
            }
        }
        //search by numbers
        else if(check==3){
            string temp;
            cout<<"\t\t\t\t\tENTER THE NUMBER TO SEARCH :";
            cin>>temp;
            for(int i=0; i<=100; i++){
                if(no[i]==temp)
                cout<<"\t\t\t\t\t"<<"NAME : "<<name[i]<<"\n"<<"\t\t\t\t\tPhone number : "<<no[i];
            }
        }
        //search by name
        else if(check==4){
            string temp;
            cout<<"\t\t\t\t\tENTER THE NAME TO SEARCH :";
            cin>>temp;
            for(int i=0; i<=100; i++){
                if(name[i]==temp)
                cout<<"\t\t\t\t\t"<<"NAME : "<<name[i]<<"\n"<<"\t\t\t\t\tPhone number : "<<no[i];
            }
            
        }
        //edit
        else if(check==5){
            string temp;
            cout<<"\t\t\t\t\tENTER THE NAME : ";
            cin>>temp;
            for (int i=0; i<n; i++){
                if(temp==name[i]){
                    cout<<"\t\t\t\t\tNAME FOUND"<<"\n\t\t\t\t\tENTER THE NEW NAME : ";
                    string newN;
                    cin>>newN;
                    name[i]=newN;
                    cout<<"\t\t\t\t\tNEW NAME IS EDITED";
                }
            }
            
        }
        //delete
        else if(check==6){
            cout<<"\t\t\t\t\tENTER THE CONTACT NAME TO DELETE : ";
            string a;
            cin>>a;
            for (int i=0; i<n; i++){
                if(a==name[i]){
                    name[i]="\0";
                    no[i]="\0";
                    cout<<"\t\t\t\t\tCONTACT HAS BEEN DELETED---";
                }
                else
                cout<<"\t\t\t\t\tNO CONTACT FOUND ---"<<endl;
                break;
                
                
            }
            

            
        }
        //delete all
        else if(check==7){
            for (int i=0; i<n; i++){
                name[i]="\0";
                no[i]="\0";
            }
            

        }
        //disply number oF contacts
        else if(check==8){
            int count=0;
            for (int i=0; i<n; i++){
                if(name[i]!="\0")
                count++;
            }
            cout<<"\t\t\t\t\tNUMBERS OF CONTACTS STORED ARE :"<<count;
            
        }
         check=menu();
    }while (check!=9);
    {
        /* code */
    }
    

    return 0;
}
int menu(){
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|             PHONE BOOK APPLICATION           |"<<endl;
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|                                              |"<<endl;
    cout<<"\t\t\t\t\t\t|             [1] ADD CONTACTS                 |"<<endl;
    cout<<"\t\t\t\t\t\t|             [2] DISPLAY ALL CONTACTS         |"<<endl;
    cout<<"\t\t\t\t\t\t|             [3] SEARCH BY NUMBER             |"<<endl;
    cout<<"\t\t\t\t\t\t|             [4] SEARCH BY NAME               |"<<endl;
    cout<<"\t\t\t\t\t\t|             [5] EDIT                         |"<<endl;
    cout<<"\t\t\t\t\t\t|             [6] DELETE                       |"<<endl;
    cout<<"\t\t\t\t\t\t|             [7] DELETE ALL                   |"<<endl;
    cout<<"\t\t\t\t\t\t|             [8] NUMBERS OF CONTACTS          |"<<endl;
    cout<<"\t\t\t\t\t\t|                                              |"<<endl;
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|             [9] EXIT                         |"<<endl;
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    int a;
    cout<<"\t\t\t\t\t\t               Enter the Option :";
    cin>>a;
    system("Cls");
    return a;
}
void start(){
    system("Color 2");
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t-----------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\tYOUR CONTACTS BOOK IS---\n\n";
    cout<<"\t\t\t\t\t\tLOADING ";
    char x=219;
    for(int i=0; i<35; i++){
        cout<<x;
        if(i<10)
        Sleep(150);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
    }
    system("Cls");
}