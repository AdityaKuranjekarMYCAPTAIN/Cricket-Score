#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<winbase.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

void welcome();
void menu();
void newscoresheet();
void entering_real_scr_sheet();
void scrboard();
void out();
void out2();
void team2();
void scrboard2();
void win();
void viewscrsheet();

int ch;
char m;
char batsm[100][30];
char batsm2[100][30];
char balrs[100][30];
char balrs2[100][30];
int runs[20][6];
int runs2[20][6];
int run[20];
int run2[20];
int c;
int a;
int a2;
int i;
static int t;
static int t2;
int j;
int k;
int b;
int ou;
int pout;
int ov;
char team_1;
char team_2;


int main()
{
	welcome();
	while(1)
	{system("cls");
	menu();
		switch (ch)
		{
			case 1:
			{
				newscoresheet();
				entering_real_scr_sheet();
				team2();
				system("cls");
				win();
				getch();
				break;	
			}
			case 2:
			{
				system("cls");
				viewscrsheet();
				getch();
				break;	
			}
			case 3:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("\ninvalid choice");
				getch();
				break;
			}	getch();
			
		}
	}
	return 0;
}

void menu()
{
	printf("\n\n\t\t\t::::::::::Menu::::::::::\n");
	printf("\n\n\n1.New Scoresheets: \n");
	printf("\n\n\n2.View Scoresheet: \n");
	printf("\n\n\n3.Exit: \n");
	printf("\n\n\n.Enter Choice: ");
	scanf("%d",&ch);
}

void welcome()
{
printf("\n\n\n\n\t\t\t\tCreated By Aditya Kuranjekar->Cricket Scoresheet\n");	
printf("\n\n\n\n\t\t\t\t         Press Any Key To Continue          \n");	
getch();
system("cls");
}

void newscoresheet()
{
	system("cls");
	printf("------------------------------\nEnter Match Type(T20): ");
	scanf("%s",&m);
	printf("------------------------------\nEnter Both Teams: \n");
	printf("----------\nEnter First Team: ");	
	scanf(" %[^\n]",&team_1);
	printf("----------\nEnter Second Team: ");
	scanf(" %[^\n]",&team_2);	
	printf("------------------------------\n'%s' Team won the toss\n",&team_1);
	printf("------------------------------\nEnter No.Of Batsman in '%s' team: ",&team_1);
	scanf("%d",&b);
	printf("------------------------------\nEnter the Names of Batsman:\n");
	for(i=0;i<b;i++)
	{
		printf("----\nBATSMAN %d: ",i+1);
		scanf(" %[^\n]",&batsm[i]);
    }
	for(i=0;i<2;i++)
	{
		printf(" --------------------------\n--_'%s' is Batting now_--\n",&batsm[i]);
	}
	printf("------------------------------\nEnter No.Of Ballers in '%s' team: ",&team_2);
	scanf("%d",&c);
	printf("------------------------------\nEnter the Names of Ballers:\n");
	for(i=0;i<c;i++)
	{
		printf("----\nBaller %d: ",i+1);
		scanf(" %[^\n]",&balrs[i]);
    }
    for(i=0;i<1;i++)
	{
		printf(" --------------------------\n--_'%s' will do balling now_--\n",balrs[i]);
	}
	printf("-------------------------------\nNow you are entering the Main Scoresheets......\nSo hold on Your keyboard and press any key to continue_|");
	getch();
	system("cls");
	printf("\nHow many overs are there in the match?");
	scanf("%d",&ov);
	
}

void entering_real_scr_sheet()
{
	for(i=0;i<ov;i++)
	{
		
 		printf("\n-------------------------------\nEnter Runs of over %d:",(i+1));
 		int a=0;
 		for(j=0;j<6;j++)
 		{
 			printf("\nEnter runs of %d ball: ",(j+1));
 			scanf(" %d",&runs[i][j]);
 			a+=runs[i][j];
		}
		run[i]=a;
		t+=run[i];
		system("cls");
		out();
		system("cls");
		scrboard();
		getch();
		
		}
		printf("----------------------------\n---------------------------\n%s team made %d runs giving target of %d runs to %s team.",&team_1,t,t+1,&team_2);
		getch();
		system("cls");
}

void scrboard()
{
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("Runs\t\t\t%s Batting.\n",&team_1);
	int k=0;
	for(k=0;k<i+1;k++)
	{
		printf("Over %d : %d\n",k+1,run[k]);
	}
	printf("--------------------\nTotal Runs: %d",t);
}

void out()
{
	system("cls");
	printf("\n----------------------------------------\nIf any one is out in this over press 1 , else press 0 :  ");
	scanf("%d",&ou);
	if(ou==1)
	{
		printf("\n--------------------------------------\nHow many Players are out till now: ");
		scanf("%d",&pout);
		printf("%s and %s are batting now",&batsm[0+pout],&batsm[1+pout]);
		getch();
	}
}

void team2()
{
	printf("\t\t\t\t\t\tNow %s team is doing batting.");
	printf("------------------------------\nEnter No.Of Batsman in '%s' team: ",&team_2);
	scanf("%d",&b);
	printf("------------------------------\nEnter the Names of Batsman:\n");
	for(i=0;i<b;i++)
	{
		printf("----\nBATSMAN %d: ",i+1);
		scanf(" %[^\n]",&batsm2[i]);
    }
    printf("------------------------------\nEnter the Names of Ballers:\n");
	for(i=0;i<c;i++)
	{
		printf("----\nBaller %d: ",i+1);
		scanf(" %[^\n]",&balrs2[i]);
    }
    for(i=0;i<1;i++)
	{
		printf(" --------------------------\n--_'%s' will do balling now_--\n",balrs2[i]);
	}
	printf("-------------------------------\nNow you are entering the Main Scoresheets......\nSo hold on Your keyboard and press any key to continue_|");
	getch();
	system("cls");
	for(i=0;i<ov;i++)
	{
		
 		printf("\n-------------------------------\nEnter Runs of over %d:",(i+1));
 		int a2=0;
 		for(j=0;j<6;j++)
 		{
 			printf("\nEnter runs of %d ball: ",(j+1));
 			scanf(" %d",&runs2[i][j]);
 			a2+=runs2
			 [i][j];
		}
		run2[i]=a2;
		t2+=run2[i];
		system("cls");
		out2();
		system("cls");
		scrboard2();
		getch();
		
		}
	
}

void scrboard2()
{
	printf("------------------------------------------------------------------------------------------------------------\n");
	printf("Runs\t\t\t%s Batting.\n",&team_2);
	int k=0;
	for(k=0;k<i+1;k++)
	{
		printf("Over %d : %d\n",k+1,run2[k]);
	}
	printf("--------------------\nTotal Runs: %d",t2);
}

void out2()
{
	system("cls");
	printf("\n----------------------------------------\nIf any one is out in this over press 1 , else press 0 :  ");
	scanf("%d",&ou);
	if(ou==1)
	{
		printf("\n--------------------------------------\nHow many Players are out till now: ");
		scanf("%d",&pout);
		printf("%s and %s are batting now",&batsm[0+pout],&batsm[1+pout]);
		getch();
	}
}

void win()
{
	
	if((t+1)>t2)
		printf("%s won the match.",&team_1);
	else if((t+1)==t2)	
		printf("It's a tie.");
	else
		printf("%s won the match.",&team_2);
	
}

void viewscrsheet()
{
	printf("\n------------------------------------\nMatch Between %s and %s teams.\n",&team_1,&team_2);
	printf("\n-----------------------------------\n%s gives target of %d runs.\n",&team_1,t);
	win();
}
\\Made By Aditya Kuranjekar.......MyCaptain->under Aviral Kapoor---------------HAPPY CODING----------------
