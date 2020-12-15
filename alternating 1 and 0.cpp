#include<toolkit.h>


main()
{
	
	char word[20];
	int num0=0,num1=0;
	
	printf("ENTER ");
	scanf("%s",word);
	
		for(int i=0;i<strlen(word);i++){
			if(word[i]=='0'){
			num0 +=1;
			}
			else if  (word[i]=='1'){
			num1 +=1;
			}
}


	//printf("number 0 in string\n : ",num0);
	//printf("number 1 in string \n ",num1);
	int value;

	if((num1-num0)<=0){
	//printf(" alternated");
		value=(num1-num0)*-1;
	}
	if(value<2){
		printf(" alternated");
	}
	else {
		printf("not");
	}
}
 


