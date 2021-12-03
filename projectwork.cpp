#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user{
	char Fname[20];
	char Lname[20];
	char email[20];
	char password[20];
	char username[20];
	char phone[20];
	char gender[20];
	char nationality[20];
};


COORD coordinates;
//Position the cursor in desired coordinates
void CursorPosition(int x, int y)
{
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
};
void DrawRectangle()
{
	int x,y;

	//Left Corner
	CursorPosition(20,2);
	printf("%c",201);
	
	//Top Horizontal
	for(x=21;x<150;x++)
	{
		CursorPosition(x,2);
		printf("%c",205);
	}
	
	//Right Corner
	CursorPosition(150,2);
	printf("%c",187);
 	//Right Verticle 	
	for(x=3;x<35;x++)
	{
		CursorPosition(150,x);
		if(x==5)
			printf("%c",185);
		else
			printf("%c",186);
	}
	
	
	//Bottom right corner
	CursorPosition(150,35);
	printf("%c",188);
	
      
	
	
	// Left Bottom
	CursorPosition(20,35);
	printf("%c",200);
	
	//Left Verticle
	for(x=3;x<35;x++)
	{
		CursorPosition(20,x);
		if(x==5)
			printf("%c",204);
		else
		 	printf("%c",186);
	}
	
	// Center Horizontal Line
	for(x=21;x<150;x++)
	{
	CursorPosition(x,5);
			printf("%c",205);
}
	//Center Vertifle line
	for(x=21;x<150;x++)
	{
		CursorPosition(x,35);
	printf("%c",205);
	}

}
void nnn()
{
	int x;
	
	//Left Corner
	CursorPosition(20,2);
	printf("%c",201);
	
	//Top Horizontal
	for(x=21;x<150;x++)
	{
		CursorPosition(x,2);
		printf("%c",205);
	}
	
	//Right Corner
	CursorPosition(150,2);
	printf("%c",187);
 	//Right Verticle 	
	for(x=3;x<35;x++)
	{
		CursorPosition(150,x);
			printf("%c",186);
	}
	
	
	//Bottom right corner
	CursorPosition(150,35);
	printf("%c",188);
	
      	// Left Bottom
	CursorPosition(20,35);
	printf("%c",200);
	
	//Left Verticle
	for(x=3;x<35;x++)
	{
		CursorPosition(20,x);
		 	printf("%c",186);
	}
	
	// Center Horizontal Line
	for(x=21;x<150;x++)
	{
	CursorPosition(x,35);
			printf("%c",205);


}
}
void mmm()
{
	int x;
	
	//Left Corner
	CursorPosition(20,2);
	printf("%c",201);
	
	//Top Horizontal
	for(x=21;x<130;x++)
	{
		CursorPosition(x,2);
		printf("%c",205);
	}
	
	//Right Corner
	CursorPosition(130,2);
	printf("%c",187);
 	//Right Verticle 	
	for(x=3;x<35;x++)
	{
		CursorPosition(130,x);
			printf("%c",186);
	}
	
	
	//Bottom right corner
	CursorPosition(130,35);
	printf("%c",188);
	
      	// Left Bottom
	CursorPosition(20,35);
	printf("%c",200);
	
	//Left Verticle
	for(x=3;x<35;x++)
	{
		CursorPosition(20,x);
		 	printf("%c",186);
	}
	
	// Center Horizontal Line
	for(x=21;x<130;x++)
	{
	CursorPosition(x,35);
			printf("%c",205);


}
	
}
void kkk()

{
	
		int x;
	CursorPosition(47,11);
	printf("%c",192);
	CursorPosition(47,10);
	printf("%c",179);
		for(x=48;x<80;x++)
	{
		CursorPosition(x,11);
		printf("%c",196);
	}
//	CursorPosition(50,6);
//	printf("%c",191);
	CursorPosition(47,9);
	printf("%c",218);
	for(x=48;x<80;x++)
	{
		CursorPosition(x,9);
		printf("%c",196);
	}
	CursorPosition(80,9);
	printf("%c",191);
	CursorPosition(80,11);
	printf("%c",217);
CursorPosition(80,10);
	printf("%c",179);
	
	
}
void fff()

{
	int x;
	CursorPosition(47,14);
	printf("%c",192);
	CursorPosition(47,13);
	printf("%c",179);
		for(x=48;x<80;x++)
	{
		CursorPosition(x,14);
		printf("%c",196);
	}
//	CursorPosition(50,6);
//	printf("%c",191);
	CursorPosition(47,12);
	printf("%c",218);
	for(x=48;x<80;x++)
	{
		CursorPosition(x,12);
		printf("%c",196);
	}
	CursorPosition(80,12);
	printf("%c",191);
	CursorPosition(80,14);
	printf("%c",217);
CursorPosition(80,13);
	printf("%c",179);
}
void aaa()
{
	int x;
	CursorPosition(30,35);
	printf("%c",192);
//	CursorPosition(20,35);
//	printf("%c",179);
		for(x=31;x<140;x++)
	{
		CursorPosition(x,5);
		printf("%c",196);
	}
	for(x=6;x<35;x++)
	{
		CursorPosition(30,x);
		printf("%c",179);
	}
	
	for(x=6;x<35;x++)
	{
		CursorPosition(140,x);
		printf("%c",179);
	}
	
	CursorPosition(30,5);
	printf("%c",218);
	for(x=31;x<140;x++)
	{
		CursorPosition(x,35);
		printf("%c",196);
	}
	CursorPosition(140,5);
	printf("%c",191);
	CursorPosition(140,35);
	printf("%c",217);	
}
	
	void qqq()

{
	
		int x;
	CursorPosition(75,11);
	printf("%c",192);
	CursorPosition(75,10);
	printf("%c",179);
		for(x=76;x<105;x++)
	{
		CursorPosition(x,11);
		printf("%c",196);
	}
//	CursorPosition(50,6);
//	printf("%c",191);
	CursorPosition(75,9);
	printf("%c",218);
	for(x=76;x<105;x++)
	{
		CursorPosition(x,9);
		printf("%c",196);
	}
	CursorPosition(105,9);
	printf("%c",191);
	CursorPosition(105,11);
	printf("%c",217);
CursorPosition(105,10);
	printf("%c",179);
	
	
}
	void sss()

{
	
		int x;
	CursorPosition(70,20);
	printf("%c",192);
	CursorPosition(70,19);
	printf("%c",179);
		for(x=71;x<90;x++)
	{
		CursorPosition(x,20);
		printf("%c",196);
	}
//	CursorPosition(50,6);
//	printf("%c",191);
	CursorPosition(70,18);
	printf("%c",218);
	for(x=71;x<90;x++)
	{
		CursorPosition(x,18);
		printf("%c",196);
	}
	CursorPosition(90,18);
	printf("%c",191);
	CursorPosition(90,20);
	printf("%c",217);
CursorPosition(90,19);
	printf("%c",179);
	
	
}





void takeinput(char ch[20]){
	fgets(ch,20,stdin);
	ch[strlen(ch) - 1] = 0; 
}

char generateUsername(char email[20],char username[20]){
	//abc123@gmail.com
	for(int i=0;i<strlen(email);i++){
		if(email[i] == '@') break;
		else username[i] = email[i];
	}
}

void takepassword(char pwd[20]){
	int i;
	char ch;
	while(1){
		ch = getch();
		if(ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		}else if(ch == BCKSPC){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}else{
			pwd[i++] = ch;
			printf("* \b");
		}
	}
}

int main(){
	ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
	system("color 0a");
	SetConsoleTitle("LOGIN SYSTEM-TCMIT");
//	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
 //ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
	FILE *fp;
	int opt,usrFound = 0;
	struct user user;
	char password2[20];
	DrawRectangle();
	CursorPosition(5,2);
	printf("\n\t\t\t\t\t\t\t----------Welcome to authentication system----------");
	printf("\n\t\t\t\t\t\t\t\t\t\t Welcome");
   CursorPosition(5,6);
	printf("\n\t\t\t\t\t\t\t\t\tPlease choose your operation");
	CursorPosition(5,8);
	printf("\n\t\t\t\t\t\t\t\t\t1.Sign Up");
	CursorPosition(5,10);
	printf("\n\t\t\t\t\t\t\t\t\t2.Log In");
	CursorPosition(5,12);
	printf("\n\t\t\t\t\t\t\t\t\t3.Change User Information");
	CursorPosition(5,14);
	printf("\n\t\t\t\t\t\t\t\t\t4.Exit");
	sss();
	CursorPosition(5,16);
	printf("\n\n\n\t\t\t\t\t\tEnter your choice :\t\t");
	scanf("%d",&opt);
	fgetc(stdin);
	
	switch(opt){
		case 1:
			system("cls");
			
			nnn();
	
			CursorPosition(4,3);
			printf("\n\t\t\t\t\t\t\t\t\tSIGN UP to be a part of");

			CursorPosition(6,4);
			printf("\n\t\t\t\t\t\t \t\t\t    Awesomeness!!!");
		
			CursorPosition(8,6);
			printf("\t\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++");
		
			printf("\n\n\t\t\t\tEnter your first name :\t");
			takeinput(user.Fname);
			printf("\n\t\t\t\tEnter your last name  :\t");
			takeinput(user.Lname);
			
			printf("\n\t\t\t\tEnter your email      :\t");
			takeinput(user.email);
			printf("\n\t\t\t\tEnter your gender     :\t");
			takeinput(user.gender);
			printf("\n\t\t\t\tEnter your nationality:\t");
			takeinput(user.nationality);
			printf("\n\t\t\t\tEnter your mobile No. :\t");
			takeinput(user.phone);
			printf("\n\t\t\t\tEnter your password   :\t");
			takepassword(user.password);
			printf("\n\n\t\t\t\tConfirm your password :\t");
			takepassword(password2);
			
			if(!strcmp(user.password,password2)){
				generateUsername(user.email,user.username);
				fp = fopen("Users2.dat","a+");
				fwrite(&user,sizeof(struct user),1,fp);
				if(fwrite != 0)
				 printf("\n\n\t\t\t\tUser resgistration successfully.\n\n\t\t\t\tYour username is %s",user.username);
				else printf("\n\n\t\t\t\t\tSorry! Something went wrong :(");
//				fclose(fp);
			}
			else{  
			CursorPosition(8,24);
				printf("\n\t\t\t\t\t\t\t\t\tPassword donot matched!!!");
				Beep(750,300);
				CursorPosition(10,35);
				return 0; 
			}
			CursorPosition(6,26);
			printf("\n\n\t\t\t\t\tNOTE :  You can't change your name,last name,email,gender\n\t\t\t\t\t\tcontact number and password after signing up.\n \t\t\t\t\t\tSo,be careful while entering data :)");
		fclose(fp);
			break;	
		
		
		case 2:

        system("cls");
        mmm();
         
			char username[20],pword[20];
			struct user usr;
			CursorPosition(2,4);
			printf("\t\t\t\t\t\t\t\t   WELCOME BACK!!!");
			printf("\n\t\t\t\t\t\t\t\t  LogIn To Continue.");
			printf("\n\t\t\t\t\t\t\t---------------------------------------");
			kkk();
			CursorPosition(6,10);
			printf("\t\t\tEnter your username  :\t\t");
			takeinput(username);
			fff();
			CursorPosition(6,12);
			printf("\n\t\t\tEnter your password  :\t\t");
			takepassword(pword);
			
			fp = fopen("Users2.dat","r");
			while(fread(&usr,sizeof(struct user),1,fp)){
				if(!strcmp(usr.username,username)){
					if(!strcmp(usr.password,pword)){
						//system("cls");
						printf("\n\n\n\t\t\t\t\t\t\tWEL-COME:%s",usr.Lname);
						printf("\n\n\t\t\t\tFIRST NAME :\t%s",usr.Fname);
						printf("\n\n\t\t\t\tLAST NAME  : \t%s",usr.Lname);
						printf("\n\n\t\t\t\tEMAIL      :\t%s",usr.email);
						printf("\n\n\t\t\t\tGENDER     :\t%s",usr.gender);
						printf("\n\n\t\t\t\tNATIONALITY:\t%s",usr.nationality);
						printf("\n\n\t\t\t\tMOBILE NO. :\t%s",usr.phone);	
						printf("\n\n\t\t\t\tUSER NAME  :\t%s",usr.username);
						CursorPosition(9,32);
						printf("\t\t\t\t\t\t\t  THANK YOU!!!\n\t\t\t\t\t\t\t\t________________");
					}
					else {
						printf("\n\n\n\t\t\t\t\t\tWrong Password!!");
						Beep(800,300);
					}
					usrFound = 1;
				}
			}
			if(!usrFound){
				printf("\n\n\n\t\t\t\t\t\t\tUser is not registered!!!");
				Beep(800,300);
			}
			fclose(fp);
			break;
			case 3:
				//modify student details
    system("cls");
	{
		char user_name[20];
		CursorPosition(7,4);
		printf("\t\t\t\t===========================================================================================================");
		aaa();
		CursorPosition(7,36);
		printf("\t\t\t\t------------------------------------------------------------------------------------------------------------");
		CursorPosition(7,36);
		printf("\n\t\t\t\t------------------------------------------------------------------------------------------------------------");
		CursorPosition(45,6);
		printf("\t\t\t\tModify User Detail");
		CursorPosition(50,7);
		printf("\t\t\t++++++++++++++++++");
		bool isFound=false;
		qqq();
		CursorPosition(6,9);
		printf("\n\t\t\t\t\tEnter your Username to Modify :\t\t ");
		fflush(stdin);
		gets(user_name);
		
		FILE *openfile;
		openfile=fopen("Users2.dat","rb+");
		
		while(fread(&usr,sizeof(usr),1,openfile)==1)
		{
			if(strcmp(user_name,usr.username)==0)
			{
//					//moodify codes
			fflush(stdin);
		CursorPosition(6,11);
				printf("\n\t\t\t\t\tFIRST NAME    : ");
			//	scanf("%s",&usr.Fname);
					gets(usr.Fname);
					CursorPosition(6,13);
				printf("\n\t\t\t\t\tLAST NAME     : ");
				gets(usr.Lname);
					CursorPosition(6,15);
				printf("\n\t\t\t\t\tEMAIL         : ");
					gets(usr.email);
					CursorPosition(6,17);
				printf("\n\t\t\t\t\tGENDER        : ");
					gets(usr.gender);
				CursorPosition(6,19);
					printf("\n\t\t\t\t\tMOBILE NUMBER : ");
				scanf("%s",&usr.phone);
		
	        	CursorPosition(6,21);
				printf("\n\t\t\t\t\tNATIONALITY   : ");
			    scanf("%s",&usr.nationality);
					CursorPosition(6,23);
				printf("\n\t\t\t\t\tPASSWORD      : ");
					scanf("%s",&usr.password);
               			
			fseek(openfile,-sizeof(usr),SEEK_CUR);
				fwrite(&usr,sizeof(usr),1,openfile);
				CursorPosition(6,25);
 			printf("\n\t\t\t\t\tUser Update Successfully.");
				isFound=true;
			
			break;
			
			
		
	}
	if(isFound==false)
//			//msg not found
		CursorPosition(6,13);
		printf("\t\t\t\t\tSorry, No Record Found In Database.");
			Beep(800,300);
			CursorPosition(10,39);
			return 0;
			
	}
}
	break;
	case 4:
			system("cls");
			CursorPosition(90,17);
			printf("\n\n\n\t\t\t\t\t\t\t\t\tBye Bye :)");
			printf("\n\t\t\t\t\t\t\t\t  =====================");
			CursorPosition(10,40);
			return 0;
				default: 
					MessageBox(0,"Please Enter Correct Option.","Warning",0);
					break;
			
	}
	
	CursorPosition(100,130);
	
	return 0;
}
