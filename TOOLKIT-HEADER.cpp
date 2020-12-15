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
