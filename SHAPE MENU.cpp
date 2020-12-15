#include<toolkit.h>
#define SIZE 100   
char option=' ';
int  perimeter,width,height,base,area,lenght,side,a,b,c;
//float area=0,lenght=0,side=0;
int n, num, digit, rev = 0,size;

char word[SIZE];
char words[SIZE];
char line[150];
int i, vowels;


void first()
{

	line2(2,2,78,24);
	center(3,"Polytechnic University of the Phils.");
	center(4,"San Juan Campus");
	center(5,"City of San Juan");
	center(8,"Shape Menu");
	line1(35,7,46,9);
	printxy(36,11,"A] Polygons");
	printxy(36,12,"B] String");
	printxy(36,13,"C] Close");
	printxy(36,15,"Select an Option");
	gotoxy(53,15);option=toupper(getche());	
	while ((option!='A')&&(option!='B')&&(option!='C'))
	{
		if ((option!='A')&&(option!='B')&&(option!='C'))			
		{
			printxy(36,16,"Invalid Option");Sleep(500);
			printxy(36,16,"               ");
			printxy(53,15,"               ");
			gotoxy(53,15);	
			gotoxy(53,15);option=toupper(getche());
		}
	}
}
void second()
{	system("cls");
	line1(34,9,55,18);
	printxy(36,11,"A] Rectangle");
	printxy(36,12,"B] Square");
	printxy(36,13,"C] Triangle");
	printxy(36,14,"D] Back");
	printxy(36,15,"Select an Option");
	gotoxy(53,15);option=toupper(getche());	
	while ((option!='A')&&(option!='B')&&(option!='C')&&(option!='D'))
	{
		if ((option!='A')&&(option!='B')&&(option!='C')&&(option!='D'))			
		{
			printxy(36,16,"Invalid Option");
			Sleep(500);
			printxy(36,16,"               ");
			printxy(53,15," ");
			gotoxy(53,15);	
			gotoxy(53,15);option=toupper(getche());
		}
	}
}


void third()
{
	{
	system("cls");
	line1(34,9,55,18);
	printxy(36,11,"A] Count");
	printxy(36,12,"B] Palindrome");
	printxy(36,13,"E] Back");
	printxy(36,15,"Select an Option");
	gotoxy(53,15);option=toupper(getche());	
	while((option!='A')&&(option!='B')&&(option!='E'))
	{
		if ((option!='A')&&(option!='B')&&(option!='E'))			
		{
			printxy(36,16,"Invalid Option");Sleep(500);
			printxy(36,16,"               ");
			printxy(53,15," ");
			gotoxy(53,15);	
			gotoxy(53,15);option=toupper(getche());
		}
	}
}
}
void rectangle()
{
	system("cls");
	line1(1,2,22,9);
	gotoxy(2,3);printf("Enter a height ",height);
	scanf("%d",&height);
	gotoxy(2,4);printf("Enter a width ",width);
	scanf("%d",&width);
	gotoxy(2,5);area=height*width;
	printf("area is =%d",area);
	gotoxy(2,6);perimeter=2*(height+width);
	printf("Perimeter is = %d",perimeter);
	gotoxy(2,7);printf("Press any key.....");
	getche();
}
void square()
{
	system("cls");
    line1(1,2,22,9);
	gotoxy(2,3);printf("Enter a length ",side);
	scanf("%d",&side);
	gotoxy(2,4);area=side*side;
	printf("area is = %d",area);
    gotoxy(2,5);perimeter=4*side;
	printf("perimeter is = %d",perimeter);
	gotoxy(2,7);printf("Press any key.....");
	getche();
}
void triangle()
{
	system("cls");
	line1(1,2,22,9);
	gotoxy(2,3);printf("Enter a base ",a);
	scanf("%d",&a);
	gotoxy(2,4);printf("Enter a height ",b);
	scanf("%d",&b);
	gotoxy(2,6);area=(a*b)/2;
	printf("Area is = %d",area);
	gotoxy(2,8);printf("Press any key.....");
	getche();
}

////////////////////////////////////////////
void count()
{
system("cls");
	int c = 0, count = 0;
  	char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' 
	|| s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
    count++;
   	 c++;
  }

  printf("Number of vowels in the string: %d", count);
  getche();

  
}
void palindrome()
{
	system("cls");
	int result;
    printf ("Enter the  words ",word);
    gets(word);
    strcpy(words,word);
    printf ("Word ",word);
    puts (strrev(word));
	result=strcmp (words,word);
    if (result==0)
    printf("A palindrome word ");
    else 
    printf ("Not a palindrome word ");

	getche();
}

main()
{
	while(option!='C'){
		
		system("cls");
		first();
		if(option=='A'){
			while(option!='D'){
	        second();
			system("cls");
			
			if(option=='A')
			{
			rectangle();	
			}
			else if(option=='B')
			{
			square();
			}
			else if(option=='C')
			{
			triangle();
			}
		}
}
	 if(option=='B'){
		while(option!='E'){
			third();
			system("cls");
	          if(option=='A'){
				count();			
			}
			else if(option=='B'){
				palindrome();
			}
	
		}
	
}
 }

	
	if (option=='C'){
		system("cls");
		printf("\nEnd of program");
	}




}

		




