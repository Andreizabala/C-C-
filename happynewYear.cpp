#include<toolkit.h>

 int x,y;
 void Happy(){
 	
 
 	//H
 	for(x=10;x<=30;x++){
			gotoxy(10,x);putchar(4);
			gotoxy(25,x);putchar(4);
	}
		
	for(x=11;x<=24;x++){
			gotoxy(x,19);putchar(4);
	}
	
 	//A 
   	for(x=10;x<=30;x++){
 			gotoxy(29,x);putchar(4);
 			gotoxy(44,x);putchar(4);	
	 }
	 for(x=30;x<=43;x++){
	 		gotoxy(x,10);putchar(4);
	 }
	 for(x=30;x<=43;x++){
	 		gotoxy(x,19);putchar(4);
	 }
	 
	 //P1
	for(x=10;x<=30;x++){
 			gotoxy(48,x);putchar(4);
	 }
	for(x=49;x<=64;x++){
			gotoxy(x,10);putchar(4);
			gotoxy(x,19);putchar(4);
	}
	for(x=11;x<=18;x++){
			gotoxy(65,x);putchar(4);
	}
	//P2
	for(x=10;x<=30;x++){
			gotoxy(69,x);putchar(4);
	}
	for(x=70;x<=85;x++){
			gotoxy(x,10);putchar(4);
			gotoxy(x,19);putchar(4);
	}
	for(x=11;x<=18;x++){
			gotoxy(86,x);putchar(4);
	}
	
	//Y
	for(x=10;x<=19;x++){
			gotoxy(90,x);putchar(4);
			gotoxy(105,x);putchar(4);
	}
	for(x=91;x<=104;x++){
			gotoxy(x,19);putchar(4);
	}
	for(x=20;x<=30;x++){
			gotoxy(97,x);putchar(4);
	}

 }
 
 void New(){
 	int x,y; 	
 	
	 for(x=10;x<=30;x++){
 			gotoxy(29,x);putchar(4);
 			gotoxy(44,x);putchar(4);	
	 }
	 for(x=11;x<=12;x++){
	 		gotoxy(30,x);putchar(4);
	 }
     for(x=12;x<=13;x++){
	 		gotoxy(31,x);putchar(4);
	 }
	 for(x=13;x<=14;x++){
	 		gotoxy(32,x);putchar(4);
	 }
	 for(x=14;x<=17;x++){
	 		gotoxy(33,x);putchar(4);
	 }
	 for(x=17;x<=19;x++){
	 		gotoxy(34,x);putchar(4);
	 }
	 for(x=19;x<=21;x++){
	 		gotoxy(35,x);putchar(4);
	 }
	 for(x=21;x<=23;x++){
	 		gotoxy(36,x);putchar(4);
	 }
	 for(x=23;x<=25;x++){
	 		gotoxy(37,x);putchar(4);
	 }
	 for(x=25;x<=27;x++){
	 		gotoxy(38,x);putchar(4);
	 }
	 for(x=27;x<=29;x++){
	 		gotoxy(39,x);putchar(4);
	 }
	 for(x=29;x<=29;x++){
	 		gotoxy(40,x);putchar(4);
	 }
	 for(x=30;x<=30;x++){
	 		gotoxy(41,x);putchar(4);
	 }
	  for(x=43;x<=43;x++){
	 		gotoxy(x,30);putchar(4);
	 }
	
	
	
	
	 
	 //E
	 	 for(x=10;x<=30;x++){
 			gotoxy(48,x);putchar(4);
 			//gotoxy(44,x);putchar(4);	
	 }
	 	 for(x=49;x<=62;x++){
	 		gotoxy(x,10);putchar(4);
	 		gotoxy(x,30);putchar(4);
	 }
	  	for(x=49;x<=58;x++){
	 		gotoxy(x,20);putchar(4);
	 }
 	
 }
 
 void Year(){
 	int x,y;
 	
 	
 }
 
 
 int main(){
 		line2(2,2,130,40);
 /*	while(1){
 		system("color a");
 		system("color c");
 		system("color e");
 		system("color c");
 		system("color e");
 		system("color a");
 	Happy();
 }*/
 	New();
 	Year();
 	getch();
	 	
	 
 
 	
 }
