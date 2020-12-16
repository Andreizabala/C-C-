#include<toolkit.h> // DELETE THIS IF YOU WANT TO RUN IN YOUR OWN 

/* //INSTEAD USE THIS 
#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;

void gotoxy(int x, int y)

{

HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);
COORD row;
row.X=x;
row.Y=y;
SetConsoleCursorPosition(col,row);
}
char option=' ';
void box(int x1,int y1,int x2,int y2, char ch)
{

int x;

for(x=x1;x<=x2;x++)
{

	gotoxy(x,y1);putchar(ch);
	gotoxy(x,y2);putchar(ch);
}
for(x=y1;x<=y2;x++)
{

    gotoxy(x1,x);putchar(ch);
    gotoxy(x2,x);putchar(ch);
}

}

void fillscreen(int x1,int y1,int x2,int y2, char ch)
{
	int col,row;
	for(col=x1;col<=x2;col++)
	{
		for(row=y1;row<=y2;row++)
		{
			gotoxy(col,row);
			putchar(ch);
		}
	}
}
	
	void clearportion(int x1,int y1,int x2,int y2)
	{
	
		int col,row;
		for(col=x1;col<=x2;col++)
	
		for(row=y1;row<=y2;row++)
		{
			gotoxy(col,row);
			putchar(' ');
		}
	}
	
	void line1(int x1,int y1,int x2,int y2)\
{
	int x;
	for(x=x1;x<=x2;x++)
{

	gotoxy(x,y1);putchar(196);
	gotoxy(x,y2);putchar(196);
	
}
for(x=y1;x<=y2;x++)
{

    gotoxy(x1,x);putchar(179);
    gotoxy(x2,x);putchar(179);
}
    gotoxy(x1,y1);putchar(218);
    gotoxy(x2,y1);putchar(191);
    gotoxy(x2,y2);putchar(217);
    gotoxy(x1,y2);putchar(192);
}
	void line2(int x1,int y1,int x2,int y2)\
{
	int x;
	for(x=x1;x<=x2;x++)
{

	gotoxy(x,y1);putchar(205);
	gotoxy(x,y2);putchar(205);
	
}
for(x=y1;x<=y2;x++)
{

    gotoxy(x1,x);putchar(186);
    gotoxy(x2,x);putchar(186);
}
    gotoxy(x1,y1);putchar(201);
    gotoxy(x2,y1);putchar(187);
    gotoxy(x2,y2);putchar(188);
    gotoxy(x1,y2);putchar(200);
}

void printxy(int col, int row,char ch[])
{
	gotoxy(col,row);puts(ch);
}

void center(int row, char ch[])
{
	int col=(80-strlen(ch))/2+1;
	gotoxy(col,row);puts(ch);
}

void hline(int x1, int y1, int x2, char ch)
{
	int x;
	for(x=x1;x<=x2;x++)
	{
		gotoxy(x,y1);
		putchar(ch);
		
	}
}

	void vline(int x1,int y1,int y2,char ch)
{
	int x;
	for(x=y1;x<=y2;x++)
	{
		gotoxy(x1,x);
		putchar(ch);
		
	}
}
*/ //INSTEAD USE THIS 

int x,y;

void hi(){
	
	line2(2,2,105,40);system("color e");
	//H
		for(x=5;x<=30;x++){
			gotoxy(20,x);putchar(4);Sleep(30);
			gotoxy(35,x);putchar(4);Sleep(30);
			
		}
		
		for(x=20;x<=35;x++){
			gotoxy(x,17);putchar(4);Sleep(30);
			
		}
	//EOH
	
	//I 
		for(x=5;x<=30;x++){
			gotoxy(50,x);putchar(4);Sleep(30);
		
		}
		
		for(x=40;x<=60;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}
	
		for(x=5;x<=20;x++){
			gotoxy(75,x);putchar(4);Sleep(30);
		
		}
	
		for(x=25;x<=27;x++){
			gotoxy(75,x);putchar(4);Sleep(30);
		
		}
	
	Sleep(2000);
	system("cls");


}

void merielle(){
	//M	
		for(x=5;x<=30;x++){
			gotoxy(5,x);putchar(4);Sleep(30);
			gotoxy(20,x);putchar(4);Sleep(30);
			
		}
	
		for(x=6;x<=9;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			
		}
		
		for(x=20;x>=16;x--){
			gotoxy(x,5);putchar(4);Sleep(30);
			
		}
	
		for(x=5;x<=15;x++){
			gotoxy(16,x);putchar(4);Sleep(30);
			
		}
	
		for(x=5;x<=15;x++){
			gotoxy(9,x);putchar(4);Sleep(30);
			
		}
		
		for(x=9;x<=16;x++){
			gotoxy(x,15);putchar(4);Sleep(30);
			
		}	
	
		for(x=5;x<=30;x++){
			gotoxy(25,x);putchar(4);Sleep(30);
		
		}
	//EOM
	
	//E
		for(x=25;x<=37;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}
		
		for(x=25;x<=34;x++){
			gotoxy(x,17);putchar(4);Sleep(30);
	
		}
	//EOE
	
	//R
		for(x=5;x<=30;x++){
			gotoxy(40,x);putchar(4);Sleep(30);
			
		}
	
		for(x=40;x<=53;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			gotoxy(x,15);putchar(4);
			
		}
		
		for(x=5;x<=15;x++){
			gotoxy(53,x);putchar(4);Sleep(30);
			
		}
		
		for(x=15;x<=16;x++){
			gotoxy(41,x);putchar(4);Sleep(30);
			
		}
		
		for(x=17;x<=17;x++){
			gotoxy(42,x);putchar(4);Sleep(30);
			
		}
	
		for(x=18;x<=18;x++){
			gotoxy(43,x);putchar(4);Sleep(30);
			
		}
	
		for(x=19;x<=19;x++){
			gotoxy(44,x);putchar(4);Sleep(30);
			
		}
	
		for(x=20;x<=20;x++)	{
			gotoxy(45,x);putchar(4);Sleep(30);
		
		}
	
		for(x=21;x<=21;x++){
			gotoxy(46,x);putchar(4);Sleep(30);
		}
	
		for(x=22;x<=22;x++){
			gotoxy(47,x);putchar(4);Sleep(30);
		
		}
	
		for(x=23;x<=23;x++){
			gotoxy(48,x);putchar(4);Sleep(30);
			
		}
	
		for(x=24;x<=24;x++){
			gotoxy(49,x);putchar(4);Sleep(30);
			
		}	
		
		for(x=25;x<=25;x++){
			gotoxy(50,x);putchar(4);Sleep(30);
		
		}
	
		for(x=26;x<=26;x++){
			gotoxy(51,x);putchar(4);Sleep(30);
		
		}
	
		for(x=27;x<=27;x++){
			gotoxy(52,x);putchar(4);Sleep(30);
			
		}
	
		for(x=28;x<=28;x++){
			gotoxy(53,x);putchar(4);Sleep(30);
			
		}
	
		for(x=29;x<=29;x++){
			gotoxy(54,x);putchar(4);Sleep(30);
		
		}
	
		for(x=30;x<=30;x++){
		gotoxy(55,x);putchar(4);Sleep(30);
		
		}
	//EOR
	
	//I 
		for(x=5;x<=30;x++){
			gotoxy(59,x);putchar(4);Sleep(30);	
			
		}
		
	//EOI
	
	//E
		for(x=5;x<=30;x++){
			gotoxy(63,x);putchar(4);Sleep(30);
			
		}
		
		for(x=63;x<=74;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}	
		
		for(x=63;x<=71;x++){
			gotoxy(x,17);putchar(4);Sleep(30);
		
		}
	
	// L
		for(x=5;x<=30;x++){
		gotoxy(77,x);putchar(4);Sleep(30);
		
		}
		
		for(x=77;x<=83;x++){
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}
	// END OF L
	
	// E
		for(x=5;x<=30;x++){
			gotoxy(87,x);putchar(4);Sleep(30);
			
		}
	
		for(x=87;x<=93;x++){
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}
	
		for(x=5;x<=30;x++){
			gotoxy(96,x);putchar(4);Sleep(30);
			
		}
		
		for(x=96;x<=107;x++){
			gotoxy(x,5);putchar(4);Sleep(30);
			gotoxy(x,30);putchar(4);Sleep(30);
		
		}
		
		for(x=96;x<=102;x++){
			gotoxy(x,17);putchar(4);Sleep(30);
	
		}
		//EOE
	
	Sleep(2000);
	system("cls");

}

main(){

	hi();
	merielle();
	getche();
}
