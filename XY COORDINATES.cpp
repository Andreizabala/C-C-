#include<toolkit.h>

main(){
	
	int a,b;
	
	printf("ENTER x ");
	scanf("%d",&a);
	printf("ENTER y ");	
	scanf("%d",&b);
		
		if(a>0&&b>0){
			printf("QUADRANT 1");
		}
		else if(a<0&&b>0){
			printf("QUADRANT 2");
		}
		else if(a<0&&b<0){
			printf("QUADRANT 3");
		}
		else if(a>0&&b<0){
			printf("QUADRANT 4");
		}
		else if(a==0&&b==0){
			printf("The xy lies at the origin");
		}
	
	return 0;
	
}
