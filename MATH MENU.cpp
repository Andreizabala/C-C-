#include<dos.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

void gotoxy(int x, int y)
{
HANDLE col= GetStdHandle(STD_OUTPUT_HANDLE);
COORD row;
row.X=x;
row.Y=y;
SetConsoleCursorPosition(col,row);
}
main()
{
char option=' ';
int x,y, result=0;
float result2=0;
char ans=' ';
		
	
		while(option!='E')
		{
			system("cls");
			for(x=2;x<=79;x++)
			{
				gotoxy(x,2);putchar(205);
				gotoxy(x,23);putchar(205);
			}
			for(x=2;x<=23;x++)
			{
				gotoxy(2,x);putchar(186);
				gotoxy(79,x);putchar(186);
			}
			gotoxy(2,2);putchar(201);
			gotoxy(79,2);putchar(187);
			gotoxy(2,23);putchar(200);
			gotoxy(79,23);putchar(188);
			gotoxy(23,4);puts("Polythechnic University of the Philippines");
			gotoxy(33,5);puts("San Juan Campus");
			gotoxy(33,6);puts("City of San juan");
			gotoxy(36,9);puts("Math Menu");
			for(x=35;x<=45;x++)
			{
				gotoxy(x,8);putchar(196);
				gotoxy(x,10);putchar(196);
			}
			for(x=8;x<=10;x++)
			{
				gotoxy(35,x);putchar(179);
				gotoxy(45,x);putchar(179);
			}
			gotoxy(35,8);putchar(218);
			gotoxy(45,8);putchar(191);
			gotoxy(35,10);putchar(192);
			gotoxy(45,10);putchar(217);
			gotoxy(32,11);puts("A] Addition");
			gotoxy(32,12);puts("B] Subtration");
			gotoxy(32,13);puts("C] Multiplication");
			gotoxy(32,14);puts("D] Division");
			gotoxy(32,15);puts("E] Close");
			gotoxy(33,16);puts("Select an Option ");	
			gotoxy(50,16);option=toupper(getche());	
				while ((option!='E')&&(option!='A')&&(option!='B')&&(option!='C')&&(option!='D'))
				{
					gotoxy(33,16);puts("Select an Option ");
					
					if ((option!='E')&&(option!='A')&&(option!='B')&&(option!='C')&&(option!='D'))			
					{
					
						gotoxy(33,17);printf("INVALID INPUT");
						Sleep(1000);
						gotoxy(33,17);printf("               ");
						gotoxy(50,16);printf("               ");
						gotoxy(50,16);	
						gotoxy(50,16);option=toupper(getche());
					}
				}		
				system("cls");
				if(option=='A')
				{
					for(x=1;x<=25;x++)
					{
						gotoxy(x,1);putchar(196);
						gotoxy(x,7);putchar(196);
					}
					for(x=1;x<=7;x++)
					{
						gotoxy(1,x);putchar(179);
						gotoxy(25,x);putchar(179);
					}
					gotoxy(1,1);putchar(218);
					gotoxy(25,1);putchar(191);
					gotoxy(1,7);putchar(192);
					gotoxy(25,7);putchar(217);
					gotoxy(3,3);puts("Enter First Number");
					gotoxy(3,4);puts("Enter Second Number");
					gotoxy(3,5);puts("Sum is ");
					gotoxy(23,3);scanf("%d",&x);
					gotoxy(23,4);scanf("%d",&y);
					result=x+y;
					gotoxy(10,5);printf("%d",result);
					gotoxy(3,6);puts("Press any key...");
					gotoxy(20,6);getch();	
						
				}
				if(option=='B')
				{
					for(x=1;x<=25;x++)
					{
						gotoxy(x,1);putchar(196);
						gotoxy(x,7);putchar(196);
					}
					for(x=1;x<=7;x++)
					{
						gotoxy(1,x);putchar(179);
						gotoxy(25,x);putchar(179);
					}
					gotoxy(1,1);putchar(218);
					gotoxy(25,1);putchar(191);
					gotoxy(1,7);putchar(192);
					gotoxy(25,7);putchar(217);
					gotoxy(3,3);puts("Enter First Number");
					gotoxy(3,4);puts("Enter Second Number");
					gotoxy(3,5);puts("Difference is ");
					gotoxy(23,3);scanf("%d",&x);
					gotoxy(23,4);scanf("%d",&y);
					result=x-y;
					gotoxy(17,5);printf("%d",result);
					gotoxy(3,6);puts("Press any key...");
					gotoxy(20,6);getch();
				}
				if(option=='C')
				{
					for(x=1;x<=25;x++)
					{
						gotoxy(x,1);putchar(196);
						gotoxy(x,7);putchar(196);
					}
					for(x=1;x<=7;x++)
					{
						gotoxy(1,x);putchar(179);
						gotoxy(25,x);putchar(179);
					}
					gotoxy(1,1);putchar(218);
					gotoxy(25,1);putchar(191);
					gotoxy(1,7);putchar(192);
					gotoxy(25,7);putchar(217);
					gotoxy(3,3);puts("Enter First Number");
					gotoxy(3,4);puts("Enter Second Number");
					gotoxy(3,5);puts("Product is ");
					gotoxy(23,3);scanf("%d",&x);
					gotoxy(23,4);scanf("%d",&y);
					result=x*y;
					gotoxy(17,5);printf("%d",result);
					gotoxy(3,6);puts("Press any key...");
					gotoxy(20,6);getch();
				}
				if(option=='D')
				{
					for(x=1;x<=25;x++)
					{
						gotoxy(x,1);putchar(196);
						gotoxy(x,7);putchar(196);
					}
					for(x=1;x<=7;x++)
					{
						gotoxy(1,x);putchar(179);
						gotoxy(25,x);putchar(179);
					}
					gotoxy(1,1);putchar(218);
					gotoxy(25,1);putchar(191);
					gotoxy(1,7);putchar(192);
					gotoxy(25,7);putchar(217);
					gotoxy(3,3);puts("Enter First Number");
					gotoxy(3,4);puts("Enter Second Number");
					gotoxy(3,5);puts("Qoutient is ");
					gotoxy(23,3);scanf("%d",&x);
					gotoxy(23,4);scanf("%d",&y);
					result2=(float)x/(float)y;
					gotoxy(17,5);printf("%.2f",result2);
					gotoxy(3,6);puts("Press any key...");
					gotoxy(20,6);getch();
				}
				else if (option=='E')
				{
				printf("\n End of Program");
				}
//break;
			
		}
	}
