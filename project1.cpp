#include<iostream>

#include<cstring>

#include<cstdlib>

#include<iomanip>

#include<windows.h>





#include<dos.h>

#include<conio.h>

#include<cstdio>

#define max 20

using namespace std;

struct employee

{

 char name[20];

 long int code;

 char designation[20];

 int exp;

 int age;

};

int num;

employee emp[max],tempemp[max],sortemp[max],sortemp1[max];

int main()

{

 system("cls");

 void build();

 void list();

 void insert();

 void deletes();

 void edit();

 void search();

 void sort();

 char option;

 void menu();

 menu();

 while((option=cin.get())!='q')

 {

  switch(option)

  {

   case '1':

         build();

         break;

   case '2':

         list();

         break;

   case '3':

         insert();

         break;

   case '4':

         deletes();

         break;

   case '5':

       edit();

        break;

   case '6':

        search();

        break;

   case '7':

         sort();

         break;
    case'8':
         
         exit(0);

  }

   menu();

  }

  return 0;

 }

 void menu()

 {

  system("cls");

 

cout<<"          ";

printf("\n*****  Employees record management system ***** ");





cout<<endl;

cout<<"             ";

cout<<"\n\t\t Press  1->Built The Employee Table ";

cout<<"             ";

cout<<"\n\t\t Press  2->List The Employee Table  ";

cout<<"             ";

cout<<"\n\t\t Press  3->Insert New Entry        ";

cout<<"             ";

cout<<"\n\t\t Press  4->Delete An Entry         ";

cout<<"             ";

cout<<"\n\t\t Press  5->Edit An Entry           ";

cout<<"             ";

cout<<"\n\t\t Press  6->Search Arecord          ";

cout<<"             ";

cout<<"\n\t\t Press  7->Sort The Table          ";

cout<<"             ";

cout<<"\n\t\t Press  8->Quit Program              ";

cout<<"             ";

cout<<"\n\n \t\t Select Your Option Please = ";

}


void build()

{


 system("cls");



 cout<<"enter the information:";

 cout<<endl;

 cout<<"maximum number of entries are ->  20"<<endl;

 cout<<"how many do you want    ->";

 cin>>num;

 cout<<"Enter The following information"<<endl;

 for(int i=0;i<=num-1;i++)

 {

  cout<<" first Name  ";

  cin>>emp[i].name;

  cout<<"Code  ";

  cin>>emp[i].code;

  cout<<"designation  ";

  cin>>emp[i].designation;

  cout<<"Years of Experience  ";

  cin>>emp[i].exp;

  cout<<"Age  ";

  cin>>emp[i].age;

 }

  cout<<"going to main menu...";

 Sleep(500);

}


void  list()

{

 system("cls");



 printf("       ********List The Table********");

 cout<<endl;

 

 cout<<"     Name     Code     Designation     Years(EXP)     Age "<<endl;

 cout<<"    ------------------------------------------------------"<<endl;

 for(int i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<emp[i].name;

  cout<<setw(6)<<emp[i].code;

  cout<<setw(15)<<emp[i].designation;

  cout<<setw(10)<<emp[i].exp;

  cout<<setw(15)<<emp[i].age;

  cout<<endl;

 }

  cout<<"going to main menu";

 getch();

  }

  void insert()

  {

  system("cls");

  int i=num;

  num+=1;

 

  cout<<"Insert New Record";

  cout<<endl;

  

  cout<<"Enter The Following Items"<<endl;

  cout<<"Name  ";

  cin>>emp[i].name;

  cout<<"Code  ";

  cin>>emp[i].code;

  cout<<"Designation  ";

  cin>>emp[i].designation;

  cout<<"Years of Experience  ";

  cin>>emp[i].exp;

  cout<<"Age  ";

  cin>>emp[i].age;

  cout<<endl<<endl;

  cout<<"going to main menu";

 Sleep(500);


  }



  void deletes()

  {

   system("cls");

  

   int code;

   int check;

   printf("Delete An Entry");

   

   cout<<endl;

   cout<<"Enter An JobCode To Delete That Entry  ";

   cin>>code;

   int i;

   for(i=0;i<=num-1;i++)

   {

    if(emp[i].code==code)

    {

      check=i;

    }

   }

   for(i=0;i<=num-1;i++)

   {

    if(i==check)

    {

    continue;

    }

    else

    {

    if(i>check)

    {

     tempemp[i-1]=emp[i];

    }

    else

    {

     tempemp[i]=emp[i];

    }

     }

   }

  num--;


  for(i=0;i<=num-1;i++)

  {

   emp[i]=tempemp[i];

  }

 }


void edit()

{

 system("cls");

 int jobcode;



 cout<<"          Edit An Entry           ";

 cout<<endl;

 cout<<endl;

 int i;

 void editmenu();

 void editname(int);

 void editcode(int);

 void editdes(int);

 void editexp(int);

 void editage(int);

 char option;

 

 cout<<"Enter An jobcode To Edit An Entry----  ";

 cin>>jobcode;

  editmenu();

 for(i=0;i<=num-1;i++)

   {

    if(emp[i].code==jobcode)

    {


while((option=cin.get())!='q')

{

      switch(option)

      {

       case 'n':

            editname(i);

            break;

       case 'c':

            editcode(i);

            break;

       case 'd':

            editdes(i);

            break;

       case 'e':

            editexp(i);

            break;

       case 'a':

           editage(i);

           break;

     }

   editmenu();

    }

  }

  }

  }

  void editmenu()

  {

   system("cls");

   cout<<"        What Do You Want To edit";

   cout<<"          n--------->Name ";

   cout<<"          c--------->Code ";

   cout<<"          d--------->Designation";

   cout<<"          e--------->Experience ";

   cout<<"          a--------->Age        ";

   cout<<"              q----->QUIT                            ";

   cout<<"   Options Please ---->>>  ";

  }

  void editname(int i)

  {

     cout<<"Enter New Name----->  ";

     cin>>emp[i].name;

  }

  void editcode(int i)

  {

   cout<<"Enter New Job Code----->  ";

   cin>>emp[i].code;

  }

  void editdes(int i)

  {

   cout<<"enter new designation----->  ";

   cin>>emp[i].designation;

  }

  void editexp(int i)

  {

   cout<<"Enter new Years of Experience";

   cin>>emp[i].exp;

  }

  void editage(int i)

  {

   cout<<"Enter new Age ";

   cin>>emp[i].age;

  }


void search()

{

 system("cls");

 

  printf("Welcome To Search Of Employee Database ");

  

  cout<<endl;

  cout<<endl;

  int jobcode;

  cout<<"You Can Search Only By Jobcode Of An Employee";

  cout<<"Enter Code Of An Employee                    ";

 cin>>jobcode;

 for(int i=0;i<=num-1;i++)

   {

    if(emp[i].code==jobcode)

    {


    cout<<"     Name     Code     Designation     Years(EXP)     Age ";

 cout<<"     ------------------------------------------------------                                  ";

  cout<<setw(13)<<emp[i].name;

  cout<<setw(6)<<emp[i].code;

  cout<<setw(15)<<emp[i].designation;

  cout<<setw(10)<<emp[i].exp;

  cout<<setw(15)<<emp[i].age;

  cout<<endl;

 }


  }

    cout<<"going to main menu";

 getch();



}


void sort()

{

 system("cls");



 printf("Sort The Databse By JobCode");

 //normvideo();

 void sortmenu();

 void sortname();

 void sortcode();

 void sortdes();

 void sortexp();

 char option;

 void sortage();


 cout<<endl;

 cout<<endl;

 sortmenu();

 while((option=cin.get())!='q')

 {

  switch(option)

  {

   case 'n':

          sortname();

          break;

   case 'c':

          sortcode();

          break;

   case 'd':

          sortdes();

          break;

   case 'e':

          sortexp();

          break;

   case 'a':

          sortage();

          break;

   }

   sortmenu();

  }

 }



 void sortmenu()

 {

    system("cls");

   cout<<"          What Do You Want To edit";

   cout<<"          n--------->Name         ";

   cout<<"          c--------->Code         ";

   cout<<"          d--------->Designation  ";

   cout<<"          e--------->Experience   ";

   cout<<"          a--------->Age          ";

   cout<<"                               q----->QUIT            ";

   cout<<"   Options Please ---->>>  ";  }




void sortname()

{

 system("cls");

 int i,j;

 struct employee temp[max];

 for(i=0;i<=num-1;i++)

 {

  sortemp1[i]=emp[i];

 }

 for(i=0;i<=num-1;i++)

  {

   for(j=0;j<=num-1;j++)

   {

    if(strcmp(sortemp1[i].name,sortemp1[j].name)<=0)

    {

     temp[i]=sortemp1[i];

     sortemp1[i]=sortemp1[j];

     sortemp1[j]=temp[i];

    }

   }

 }


 for( i=0;i<=num-1;i++)

   {


    cout<<"     Name     Code     Designation     Years(EXP)     Age ";

 cout<<"     ------------------------------------------------------                                  ";

 for( i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<sortemp1[i].name;

  cout<<setw(6)<<sortemp1[i].code;

  cout<<setw(15)<<sortemp1[i].designation;

  cout<<setw(10)<<sortemp1[i].exp;

  cout<<setw(15)<<sortemp1[i].age;

  cout<<endl;

 }

  cout<<"Press Any Key To Go Back";

 getch();


} }


void sortcode()

{

 system("cls");

 int i,j;

 struct employee temp[max];

 for(i=0;i<=num-1;i++)

 {

  sortemp1[i]=emp[i];

 }

 for(i=0;i<=num-1;i++)

  {

   for(j=0;j<=num-1;j++)

   {

    if(sortemp1[i].code<sortemp1[j].code)

    {

     temp[i]=sortemp1[i];

     sortemp1[i]=sortemp1[j];

     sortemp1[j]=temp[i];

    }

   }

 }


 for( i=0;i<=num-1;i++)

   {


    cout<<"     Name     Code     Designation     Years(EXP)     Age ";

 cout<<"     ------------------------------------------------------                                  ";

 for( i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<sortemp1[i].name;

  cout<<setw(6)<<sortemp1[i].code;

  cout<<setw(15)<<sortemp1[i].designation;

  cout<<setw(10)<<sortemp1[i].exp;

  cout<<setw(15)<<sortemp1[i].age;

  cout<<endl;

 }

  cout<<"Press Any Key To Go Back";

 getch();


} }



void sortdes()

{

 system("cls");

 int i,j;

 struct employee temp[max];

 for(i=0;i<=num-1;i++)

 {

  sortemp1[i]=emp[i];

 }

 for(i=0;i<=num-1;i++)

  {

   for(j=0;j<=num-1;j++)

   {

    if(strcmp(sortemp1[i].designation,sortemp1[j].designation)<=0)

    {

     temp[i]=sortemp1[i];

     sortemp1[i]=sortemp1[j];

     sortemp1[j]=temp[i];

    }

   }

 }


 for( i=0;i<=num-1;i++)

   {


    cout<<"     Name     Code     Designation     Years(EXP)     Age";

 cout<<"     ------------------------------------------------------                                 ";

 for( i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<sortemp1[i].name;

  cout<<setw(6)<<sortemp1[i].code;

  cout<<setw(15)<<sortemp1[i].designation;

  cout<<setw(10)<<sortemp1[i].exp;

  cout<<setw(15)<<sortemp1[i].age;

  cout<<endl;

 }

  cout<<"Press Any Key To Go Back";

 getch();


} }


void sortage()

{

 system("cls");

 int i,j;

 struct employee temp[max];

 for(i=0;i<=num-1;i++)

 {

  sortemp1[i]=emp[i];

 }

 for(i=0;i<=num-1;i++)

  {

   for(j=0;j<=num-1;j++)

   {

    if(sortemp1[i].age<sortemp1[j].age)

    {

     temp[i]=sortemp1[i];

     sortemp1[i]=sortemp1[j];

     sortemp1[j]=temp[i];

    }

   }

 }


 for( i=0;i<=num-1;i++)

   {


    cout<<"     Name     Code     Designation     Years(EXP)     Age";

 cout<<"     ------------------------------------------------------                                 ";

 for( i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<sortemp1[i].name;

  cout<<setw(6)<<sortemp1[i].code;

  cout<<setw(15)<<sortemp1[i].designation;

  cout<<setw(10)<<sortemp1[i].exp;

  cout<<setw(15)<<sortemp1[i].age;

  cout<<endl;

 }

  cout<<"Press Any Key To Go Back";

 getch();


} }



void sortexp()

{

 system("cls");

 int i,j;

 struct employee temp[max];

 for(i=0;i<=num-1;i++)

 {

  sortemp1[i]=emp[i];

 }

 for(i=0;i<=num-1;i++)

  {

   for(j=0;j<=num-1;j++)

   {

    if(sortemp1[i].exp<sortemp1[j].exp)

    {

     temp[i]=sortemp1[i];

     sortemp1[i]=sortemp1[j];

     sortemp1[j]=temp[i];

    }

   }

 }


 for( i=0;i<=num-1;i++)

   {


    cout<<"     Name     Code     Designation     Years(EXP)     Age ";

 cout<<"  ------------------------------------------------------ ";

 for( i=0;i<=num-1;i++)

 {

  cout<<setw(13)<<sortemp1[i].name;

  cout<<setw(6)<<sortemp1[i].code;

  cout<<setw(15)<<sortemp1[i].designation;

  cout<<setw(10)<<sortemp1[i].exp;

  cout<<setw(15)<<sortemp1[i].age;

  cout<<endl;

 }

  cout<<"Press Any Key To Go Back";

 getch();


} }
