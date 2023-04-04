/* BROUGHT TO YOU BY code-projects.org */
#include<stdio.h>
#include<conio.h>
#include<windows.h>

#include<stdlib.h>

struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;
void gotoxy(int,int);
void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
void login();
char get;
int main()
{	int password;
	int phonenumber;
	char choice;
	
    system("cls");
    system("color 0");
    gotoxy(10,2);
	system("cls");
	system("color 0F");
gotoxy(0,2); 
	printf("\t\t****************************************************************");
	printf("\n\t\t  ------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM------");
	printf("\n\t\t****************************************************************");
	printf("\n\n\n\t\t Press Any Key To Continue. . ");
	Sleep(0);
	getch();
	system("cls");
	login();
	system ("color 0F");

	system("cls");
	system ("color 0F");
 	gotoxy(30,0);
		system("color 0F");
		printf("\n\n\xDB\xDB\xDB\xDB\xDB  TELECOM BILLING SYSTEM  \xDB\xDB\xDB\xDB\xDB");
		
		
	while (1){
	      printf(" \n\n \xDB\xDB 1 : Add New Records.\n\n \xDB\xDB 2 : List Of Records");
	     printf("\n\n \xDB\xDB 3 : Modify Records.\n\n \xDB\xDB 4 : For Payment");
		printf("\n\n \xDB\xDB 5 : Search Records.");
		printf("\n\n \xDB\xDB 6 : Delete Records.\n\n \xDB\xDB 7 : Exit\n");
	     printf("\n Enter Your Choice:-");
		 choice=getche();
		choice=toupper(choice);
		switch(choice)
		{    
			case '1':
			        addrecords();break;
			case '2':
			listrecords();break;
			case '3':
			modifyrecords();break;
			case '4':
		    payment()	;break;
			case '5':
		     searchrecords()	;break;
			case '6':
				deleterecords();break;
			case '7':
				system("cls");
				system("color 0F");
				gotoxy(1,25);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(1,26);
				printf("   \xDB");
				gotoxy(1,27);
				printf("   \xDB");
				gotoxy(1,28);
				printf("   \xDB");
				gotoxy(1,29);
				printf("   \xDB");
				gotoxy(1,30);
				printf("   \xDB");
				gotoxy(1,31);
				printf("   \xDB");
				gotoxy(10,25);
				printf("\xDB     \xDB");
				gotoxy(10,26);
				printf("\xDB     \xDB");
				gotoxy(10,27);
				printf("\xDB     \xDB");
				gotoxy(10,28);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(10,29);
				printf("\xDB     \xDB");
				gotoxy(10,30);
				printf("\xDB     \xDB");
				gotoxy(10,31);
				printf("\xDB     \xDB");
				gotoxy(19,25);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(19,26);
				printf("\xDB     \xDB");
				gotoxy(19,27);
				printf("\xDB     \xDB");
				gotoxy(19,28);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(19,29);
				printf("\xDB     \xDB");
				gotoxy(19,30);
				printf("\xDB     \xDB");
				gotoxy(19,31);
				printf("\xDB     \xDB");
				gotoxy(28,25);
				printf("      \xDB");
				gotoxy(28,26);
				printf("\xDB\xDB    \xDB");
				gotoxy(28,27);
				printf("\xDB \xDB   \xDB");
				gotoxy(28,28);
				printf("\xDB  \xDB  \xDB");
				gotoxy(28,29);
				printf("\xDB   \xDB \xDB");
				gotoxy(28,30);
				printf("\xDB    \xDB\xDB");
				gotoxy(28,31);
				printf("\xDB");
			    gotoxy(37,25);
				printf("\xDB     \xDB");
				gotoxy(37,26);
				printf("\xDB    \xDB");
				gotoxy(37,27);
				printf("\xDB   \xDB");
				gotoxy(37,28);
				printf("\xDB\xDB\xDB\xDB");
				gotoxy(37,29);
				printf("\xDB   \xDB");
				gotoxy(37,30);
				printf("\xDB    \xDB");
				gotoxy(37,31);
				printf("\xDB     \xDB");
				gotoxy(46,25);
				printf("\xDB     \xDB");
				gotoxy(46,26);
				printf(" \xDB   \xDB");
				gotoxy(46,27);
				printf("  \xDB \xDB");
				gotoxy(46,28);
				printf("   \xDB");
				gotoxy(46,29);
				printf("   \xDB");
				gotoxy(46,30);
				printf("   \xDB");
				gotoxy(46,31);
				printf("   \xDB");
				gotoxy(55,25);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(55,26);
				printf("\xDB     \xDB");
				gotoxy(55,27);
				printf("\xDB     \xDB");
				gotoxy(55,28);
				printf("\xDB     \xDB");
				gotoxy(55,29);
				printf("\xDB     \xDB");
				gotoxy(55,30);
				printf("\xDB     \xDB");
				gotoxy(55,31);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
				gotoxy(64,25);
				printf("\xDB     \xDB");
				gotoxy(64,26);
				printf("\xDB     \xDB");
				gotoxy(64,27);
				printf("\xDB     \xDB");
				gotoxy(64,28);
				printf("\xDB     \xDB");
				gotoxy(64,29);
				printf("\xDB     \xDB");
				gotoxy(64,30);
				printf("\xDB     \xDB");
				gotoxy(64,31);
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				system("color 0F");
				gotoxy(30,20);
				printf("Incorrect Input");
				printf("\a......");
				gotoxy(30,24);
				printf("Any key to continue");
				getch();
		}
	}
}
 COORD coord = {0, 0};
// sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;
void gotoxy (int x,int y)
{
        
coord.X = x; coord.Y = y;
// X and Y coordinates
        
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void addrecords()
{
	FILE *f;
	char test;
	f=fopen("pro.txt","ab+");
	if(f==0)
	{   f=fopen("pro.txt","wb+");
		system("cls");
		printf("Please wait while we configure your computer");
		printf("\npress any key to continue");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter phone number: ");
		scanf("%s",&s.phonenumber);
		printf("\n Enter name: ");
		fflush(stdin);
		scanf("%s",&s.name);
		printf("\n Enter amount: ");
		scanf("%f",&s.amount);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n Record Is Successfully Added");
		printf("\n Press esc Key to exit or Press any other key to add other record:");
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
	system("cls");
}
void listrecords()
{
	FILE *f;
	int i;
	if((f=fopen("pro.txt","rb"))==NULL)
		exit(0);
	system("cls");
	printf("Phone Number\t\tUser Name\tAmount\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%s\t\t%s\t\tRs. %.2f /-",s.phonenumber,s.name,s.amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");

fclose(f);
printf("\n\nPress Any Key To Go Back");
getch();
system("cls");
}
void deleterecords()
{
	FILE *f,*t;
	char phonenumber[20];
	system("cls");
	f=fopen("pro.txt","rb+");
	t=fopen("pro1.txt","wb+");
	do{
	rewind(f);
	printf("Enter the phone number to be deleted from the Database: ");
	scanf("%s",phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)!=0)
		{       	fwrite(&s,sizeof(s),1,t);

		}
		else
		printf("Record deleted successfully.");
	}

	fclose(f);
	fclose(t);
	remove("pro.txt");
	rename("pro1.txt","pro.txt");
	
	f=fopen("pro.txt","rb+");
	t=fopen("pro1.txt","wb+");
    printf("\nDo you want to delete another record (y/n):");
	fflush(stdin);
	  }
    	while(getche()=='y'||getche()=='Y');
		fclose(f);
	getch();
	system("cls");
}
void searchrecords()
{
	FILE *f;
	char phonenumber[20];
	int flag=1;
	f=fopen("pro.txt","rb+");

	fflush(stdin);
	system("cls");
	printf("Enter Phone Number to search in our database: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nPhonenumber: %s\nName: %s\nAmount: Rs.%0.2f\n",s.phonenumber,s.name,s.amount);
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("Requested Phone Number Not found in our database");
		}
	}
	getch();
	fclose(f);
	system("cls");
}
void modifyrecords()
{
		FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	if((f=fopen("pro.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number of the subscriber to modify: ");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Enter phone number: ");
			scanf("%s",&s.phonenumber);
			printf("\n Enter name: ");
			fflush(stdin);
			scanf("%[^\n]",&s.name);
			printf("\n Enter amount: ");
			scanf("%f",&s.amount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
	system("cls");
}
void payment()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("pro.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number of the subscriber for payment: ");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			printf("\n ***DETAILS***");
			printf("\n Phone No.: %s",s.phonenumber);
			printf("\n Name: %s",s.name);
			printf("\n Current amount: %f",s.amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nEnter amount of payment: ");
			fflush(stdin);
			scanf(" %f",&amt);
			s.amount=s.amount-amt;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	printf("\n\n");
	printf("System Message: THANK YOU %s FOR YOUR TIMELY PAYMENTS!!",s.name);
	getch();
	fclose(f);
	system("cls");
}
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();//holds the screen
		system("cls");
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}

