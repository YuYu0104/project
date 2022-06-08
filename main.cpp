#include <iostream>
#include <windows.h>
#include <conio.h>
void display();
void rules();

using namespace std;

int main()
{
    display();
    int flag=0;
    string name;
    int amout=0;
    int deposite;
       int input;
    cout<<"please enter your name : ";
    cin>>name;
    cout<<"\n";
    cout<<"please enter your amount kyat : ";
    cin>>amout;
    do{
        int deposite;
        rules();
        cout<<"\n";
        label:
       cout<<"enter amount you want to bet : ";
       cin>>deposite;
       cout<<"\n";
       cout<<"************************************************************************************************************"<<endl;
       cout<<"\n\n";
       if(deposite>amout){
        cout<<"You have not enough money"<<endl;
        goto label;
       }
       int ball=rand()%10+1;
       int guess;
       label2:

       cout<<"press 1 if you want to input your guessing number where ball will stop"<<endl;

       cout<<"\n\n";
       cout<<"please enter input :  ";
       cin>>guess;
       cout<<"\n";
       if(guess==1){
            int gn;
            cout<<"please enter your guessing number 1 to 10 : ";
            cin>>gn;
            cout<<"\n";
       if(gn==ball){
         flag=1;
       }else{
           flag=0;
       }

       }else{
           cout<<"something wrong"<<endl;
           goto label2;
       }
       if(flag==1){
        cout<<"congratulations.you win"<<endl;
        cout<<"\n";
        cout<<"you win kyat"<<deposite*10<<endl;
        cout<<"\n";
        amout=amout+deposite*10;
        cout<<"your total amount"<<amout<<endl;
        cout<<"\n";
       }else{
           cout<<"sorry"<<endl;
           cout<<"\n";
           cout<<"you lose  "<<deposite<<endl;
           cout<<"\n";
           amout=amout-deposite;
           cout<<"your total amount"<<amout<<endl;
           cout<<"\n";
       }
       cout<<"\n";
       cout<<"***********************************************************************************************************************\n";
       cout<<"\n";
      cout<<"if you do not want to play press 1"<<endl;
      cout<<"\n";
       cout<<"if you want to play press 2"<<endl;
       cout<<"\n";
       cout<<"please enter 1 or 2 :  ";
       cin>>input;
       if(amout==0){
        cout<<"you have not money";
        break;

       }
       if(input==1){
        cout<<"good bye";
       }




    }while(input!=1);
    getch();

}
void display(){
     string var="\n====================================================================================================================="
    "\n    CCCCC        A       SSSSSSSSS   IIIIIIIIII  NN       NN      OOOOOOOO        "
    "\n  CC            A A      SS              III     NN  N    NN     OO       OO     "
    "\nCC             A   A     SSSSSSSSS       III     NN   N   NN     OO       OO     "
    "\n  CC          AAAAAAA           SS       III     NN     N NN     OO       OO    "
    "\n   CCCCC     A        A  SSSSSSSSS   IIIIIIIIII  NN       NN      OOOOOOOO     "
    "\n========================================================================================================================\n";
    for(int i=0;i<var.size();i++){
        Sleep(10);
        cout<<var[i];
    }
}
void rules(){
    system("cls");
    cout<<"\n\n";
    cout<<"\n=======================================================================================================================\n";
    cout<<"                                         RULE OF THE GANE\n";
    cout<<"\n=======================================================================================================================\n";
    cout<<"\n";
    cout<<"1.Choose ant number 1 to 10\n";
    cout<<"2.If you will you will get 10 times of money you bet\n";
    cout<<"3.If you bet on wrong number you will loose your betting amount\n";
    cout<<"\n====================================================================================================================\n";
}
