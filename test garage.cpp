#include<iostream>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void pwd();
void menu();
class automobile
{
	public:
		char owner_name[20];
		int age,year_of_manuf,number_plate;
		long mobile_no;
		float distance,milage,total;
		void get()
		{
		    cout<<"\nENTER OWNER NAME";
		    fflush(stdin);
			gets(owner_name);
			cout<<"\nENTER YOUR AGE";
			fflush(stdin);
			cin>>age;
			cout<<"\nENTER YOUR MOBILE NUMBER";
			fflush(stdin);
			cin>>mobile_no;
			cout<<"\nENTER THE  NUMBER PLATE OF OWNER'S VEHICLE(*NOTE=>1010)";
			fflush(stdin);
			cin>>number_plate;
			cout<<"\nENTER TOTAL DISTANCE TRAVELLED";
			fflush(stdin);
			cin>>distance;
			cout<<"\nENTER THE YEAR OF MANUFACTURE";
			fflush(stdin);
			cin>>year_of_manuf;
			cout<<"\nENTER MILAGE OF VEHICLE";
			fflush(stdin);
			cin>>milage;		
		}	
};
class twowheeler:public automobile
{
	public:
		float pressure,repair_amount,discount_amount;
		char problem[100],promo;
        int i,ch;
        twowheeler()
        {
        	pressure=0;
        	repair_amount=0;
        	discount_amount=0;
        	problem=="1=>>W=WHEEL PROBLEM\n2=>>E=ENGINE PROBLEM\n3=>>I=INDICATOR PROBLEM\n4=>>C=COMPONENT PROBLEM\n5=>>S=SERVICING OF THE AUTOMOBILE\n";
        	ch=0;

		}
		void bill()
		{    
		     cout<<"\nENTER TOTAL PRESSIRE IN YOUR TYRE";
		     fflush(stdin);
		     cin>>pressure;
             for(i=0;i<strlen(problem);i++)
            {
              cout<<problem[i];  	
            }
            cout<<"1=>>WHEEL PROBLEM";
            cout<<"\n2=>>ENGINE PROBLEM";
            cout<<"\n3=>>INDIDCATOR PROBLEM";
            cout<<"\n4=>>COMPONENT PROBLEM";
            cout<<"\n5=>>SERVICING";
            cout<<"\nSELECT YOUR PROBLEM TYPE";
            cin>>ch;
            if(ch==1)
            {
            	
            	repair_amount=425;
			}
			else if(ch==2)
			{
				
				repair_amount=1500;
			}
			else if(ch==3)
			{
				
				repair_amount=200;
			}
			else if(ch==4)
			{
				
				repair_amount=1000;
			}
			else if(ch==5)
			{
				
				repair_amount=750;
			}
			cout<<"\nDO YOU HAVE PROMOCODE(y/n)";
            fflush(stdin);
            cin>>promo;
		}
		float total1()
		{
			
            if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.05))-100;
			}
			else if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.02))-100;
			}
		    else if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.10))-100;
			}
		   else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.05);
			}
			else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.02);
			}
		    else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.10);
		    }
		    return(total);
		}
		void display()
		{
			cout<<"\nNAME\tMOBILE\tAGE\tPLATENO\tVECHILE\tYEAR\tDISTANCE\tMILAGE\tPROBLEM\tTOTAL";
			cout<<"\n"<<owner_name<<"\t"<<age<<"\t"<<number_plate<<"\t"<<"\t"<<year_of_manuf<<"\t"<<distance<<"\t"<<milage<<"\t"<<total1();
			ofstream f;
			f.open("2wheeler.txt",ios::app);
			f<<"\nNAME\tMOBILE\tAGE\tPLATENO\tVECHILE\tYEAR\tDISTANCE\tMILAGE\tPROBLEM\tTOTAL";
			f<<"\n"<<owner_name<<"\t"<<age<<"\t"<<number_plate<<"\t"<<"\t"<<year_of_manuf<<"\t"<<distance<<"\t"<<milage<<"\t"<<total1();
			f.close();
		}	
		
        
};
class fourwheeler:public automobile
{
	public:
		float repair_amount,discount_amount;
		char problem[100],top[50],promo;
		string tov,company;
        int i,ch,modelno;
        fourwheeler()
        {
        	repair_amount=0;
        	discount_amount=0;
        
        	ch=0;
        	tov="4-WHEELER";
        	modelno=0;
        	company="null";
		}
		void bill2()
		{    
		     cout<<"\nENTER YOUR COMPANY";
		     fflush(stdin);
		     cin>>company;
		      cout<<"\nENTER YOUR MODEL";
		     fflush(stdin);
		     cin>>modelno;
		     cout<<"1=>>REGULAR SERVICING";
            cout<<"\n2=>>CAR WASH";
            cout<<"\n3=>>WHEEL PROBLEM";
            cout<<"\n4=>>OILING";
            cout<<"\nSELECT YOUR PROBLEM TYPE";
            cin>>ch;
            if(ch==1)
            {
            	
            	repair_amount=1500;
			}
			else if(ch==2)
			{
				
				repair_amount=200;
			}
			else if(ch==3)
			{
				repair_amount=750;
			}
			else if(ch==4)
			{
				
				repair_amount=325;
			}
			
		}
		float total2()
		{
			cout<<"\nDO YOU HAVE PROMOCODE(y/n)";
            fflush(stdin);
            cin>>promo;
            if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.05))-100;
			}
			else if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.02))-100;
			}
		    else if(age>18&&age<25&&promo=='y')
            {
            	total=(repair_amount-((repair_amount)*0.10))-100;
			}
		   else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.05);
			}
			else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.02);
			}
		    else if(age>18&&age<25&&promo=='n')
            {
            	total=repair_amount-((repair_amount)*0.10);
		    }
		    return(total);
		}
		void display2()
		{
			cout<<"\nNAME\tMOBILE\tAGE\tPLATENO\tVECHILE\tYEAR\tDISTANCE\tMILAGE\tPROBLEM\tTOTAL";
			cout<<"\n"<<owner_name<<"\t"<<age<<"\t"<<number_plate<<"\t"<<tov<<"\t"<<year_of_manuf<<"\t"<<distance<<"\t"<<milage<<"\t"<<company<<"\t"<<modelno<<"\t"<<total2();
			ofstream f;
			f.open("4wheeler.txt",ios::app);
				f<<"\nNAME\tMOBILE\tAGE\tPLATENO\tVECHILE\tYEAR\tDISTANCE\tMILAGE\tPROBLEM\tTOTAL";
		        f<<"\n"<<owner_name<<"\t"<<age<<"\t"<<number_plate<<"\t"<<tov<<"\t"<<year_of_manuf<<"\t"<<distance<<"\t"<<milage<<"\t"<<company<<"\t"<<modelno<<"\t"<<total2();
			f.close();
		}
	
	
};
void pwd()
{
	automobile au;
	twowheeler to;
	fourwheeler fo;
	char a[10],b[]="152207";
	int i,x;
	string user="null";
	system("color 04");
	cout<<"\n\n\n\n\n\t\t\t\t\tENTER USER NAME => ";
	cin>>user;
	cout<<"\n\t\t\t\t\tENTER YOUR PASSWORD => ";
	for(i=0;i<strlen(b);i++)
	{
		a[i]=getch();
		if(a[i]=='\r')
		{
			break;
		}
		cout<<"*";
	}
	sleep(3);
	system("cls");
	x=strcmp(a,b);
	if(x==0 && user=="admin")
	{
		cout<<"\ncorrect pass";
		sleep(3);
		system("cls");
		menu();
		
	}
	else if(x!=0)
	{
		cout<<"\nwrong pass";
		pwd();
	}
}
void menu()
{
		automobile au;
	twowheeler to;
	fourwheeler fo;
	int select,select2;
	do
	{
	cout<<"\n\t\t\t\t\t\t*******WELCOME ADMIN********";
	cout<<"\n\t\t\t\t\t\t1=>> ADD A NEW RECORD";
	cout<<"\n\t\t\t\t\t\t2=>> VIEW ALL RECORD";
	cout<<"\n\t\t\t\t\t\t3=>> EXIT";
	cout<<"\n\t\t\t\t\t\t";cin>>select;
	if(select==1)
	{
		cout<<"\n1=>> 2 WHEELR";
		cout<<"\n2=>> 4 WHEELER";
		cin>>select2;
		if(select2==1)
		{
			au.get();
			to.bill();
			to.total1();
			to.display();
		}
		else if(select2==2)
		{
			au.get();
			fo.bill2();
			fo.total2();
			fo.display2();
		}
	}
	else if(select==2)
	{
		break;
	}
	else if(select==3)
	{
		break;
	}
	
   }while(select!=3);
	
}
int main()
{
  pwd();
}