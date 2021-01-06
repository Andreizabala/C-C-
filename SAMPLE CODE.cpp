#include<stdio.h>
#include<string.h>

int main(){
	
	char gender[100];
	char name[100]; 
	int age,lifeStyle; 
	float weight,height,fbmr,mbmr,lbmr;
	
	printf("Enter name: ");
	scanf("%s",&name);
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter Weight (in pounds): ");
	scanf("%f",&weight);
	printf("Enter Height (in inches): ");
	scanf("%f",&height);	
	printf("Enter your gender: ");
	scanf("%s",&gender);
	
	fbmr= (655+(4.3*weight)+(4.7*height)-(4.7*age));
	mbmr= (660+(6.3*weight)+(12.9*height)-(6.8*age));
	
	if(strcmp(gender,"female")==0){
		printf("Your BMR: %.2f",fbmr);
		
		printf("\n\n");
		printf("Enter Your Lifestyle: \n");
		printf("1. SEDENTARY \n");
		printf("2. SOMEWHAT ACTIVE\n");
		printf("3. ACTIVE \n");
		printf("4. HIGH ACTIVE\n");
		printf("Enter your lifestyle: ");
		scanf("%d",&lifeStyle);
	
			if(lifeStyle==1){
					lbmr=(fbmr*0.20);
					printf("SEDENTARY \n");
					printf("Your new BMR: %.2f",lbmr);
					
			}
			else if(lifeStyle==2){
					lbmr=(fbmr*0.30);
					printf("SOMEWHAT ACTIVE\n");
					printf("Your new BMR: %.2f",lbmr);
				
			}
			else if(lifeStyle==3){
					lbmr=(fbmr*0.40);
					printf("ACTIVE \n");
					printf("Your new  BMR: %.2f",lbmr);
				
			}	
			else if(lifeStyle==4){
					lbmr=(fbmr*0.50);
					printf("HIGH ACTIVE\n");
					printf("Your new  BMR: %.2f",lbmr);
						
			}	

	}
	
	if(strcmp(gender,"male")==0){
		printf("Your BMR: %.2f",mbmr);
		
		printf("\n\n");
		printf("Enter Your Lifestyle: \n");
		printf("1. SEDENTARY \n");
		printf("2. SOMEWHAT ACTIVE\n");
		printf("3. ACTIVE \n");
		printf("4. HIGH ACTIVE\n");
		printf("Enter your lifestyle: ");
		scanf("%d",&lifeStyle);
	
			if(lifeStyle==1){
					lbmr=(mbmr*0.20);
					printf("SEDENTARY \n");
					printf("Your new  BMR: %.2f",lbmr);
					
			}
			else if(lifeStyle==2){
					lbmr=(mbmr*0.30);
					printf("SOMEWHAT ACTIVE\n");
					printf("Your new  BMR: %.2f",lbmr);
				
			}
			else if(lifeStyle==3){
					lbmr=(mbmr*0.40);
					printf("ACTIVE \n");
					printf("Your new  BMR: %.2f",lbmr);
				
			}	
			else if(lifeStyle==4){
					lbmr=(mbmr*0.50);
					printf("HIGH ACTIVE\n");
					printf("Your new  BMR: %.2f",lbmr);
						
			}	
	}
	

	
	
		
	
	
		
	
}
