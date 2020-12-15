#include<toolkit.h>

main(){
	
	float hr=0,hw=0,gp=0,wt=0,np=0;
	
	
	printf("Hourly Rate: ");
	scanf("%f",&hr);
	printf("Hours Worked: ");
	scanf("%f",&hw);
	gp=(hr*hw);
	wt=(gp*0.32);
	np=(gp-wt);
	printf("Gross Pay: %.2f\n",gp);
	printf("Withholding Tax: %.2f\n",wt);
	printf("Net Pay: %.2f",np);
	
	
	
}
