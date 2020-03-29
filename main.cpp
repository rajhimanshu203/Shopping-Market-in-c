#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
const int m =50;
class ITEMS
{

    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void){count = 0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
    void password(void);
    void displayMain(void);

};
void ITEMS :: getitem(void)
{
    cout <<"Enter Item code:";
    cin>> itemCode[count];
    cout <<"Enter item cost:";
    cin>>itemPrice[count];
    count++;
}
void ITEMS :: displaySum(void)
{

    float sum = 0;
    for(int i=0;i<count;i++)
        sum = sum +itemPrice[i];
        cout<<"\nTotal value :"<<sum<<"\n";
    }
 void ITEMS :: remove(void)
 {
     int a;
     cout <<"Enter Item code :";
     cin>>a;

     for(int i=0;i<count;i++)
     {


        if(itemCode[i]==a)
        itemPrice[i]=0;
     }
 }
 void ITEMS :: displayItems(void)
 {

     cout<<"\nCode Price\n";

     for(int i =0; i<count;i++)
     {

         cout<<"\n" <<itemCode[i];
         cout<<" " << itemPrice[i] ;
    }
    cout <<"\n";

 }
 void ITEMS :: password(void)

{
   string pass  ="";
    char ch;
    system("Color 4E");
    cout<<"Enter password:\n";
    ch = _getch();
    while(ch!=13)
    {
        pass.push_back(ch);
        cout<<'*';
    if(pass =="Wizkhalifa")
    {
        cout<<"\nAccess granted\n";
        system("Color 2C");
        system("cls");
        displayMain();


    }
    else
    {
        cout<<"\nAccess aborted...\n";
        system("Color 6A");
        system("cls");
        password();
    }
    getch();
    system("cls");
}
void ITEMS :: displayMain(void)
     {
     int x;
     system("Color 5E");
     do{
        cout<<"\n\t************ WELCOME TO RELIANCE MART ************\n";
        cout <<"\n You can do the following;"
        <<"\nEnter appropriate Choice\n";
        cout <<"\n1 : Add an item";
        cout <<"\n2 : Display total value";
        cout <<"\n3 : Delete an item";
        cout <<"\n4 : Display all items";
        cout <<"\n5 : Quit";
        cout <<"\n\nWhat is your option?";

        cin>>x;
        switch(x)
        {
            case 1 :getitem();break;
            case 2 :displaySum();break;
            case 3 :remove();break;
            case 4 :displayItems(); break;
            case 5:break;
            default :cout<<"Error in input;try again\n";

        }
   //system("CLS");

     } while(x != 5);
     }




 int main()
 {

     ITEMS order;
     order.CNT();
     order.password();
     return 0;

 }


