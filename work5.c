#include<stdio.h>

main(){
	
	int i, a[5], b[5], c[5];


	printf("Enter the elemnets for a: ");
	for(i=1;i<=5;i++){
		
		
		scanf ("%d",&a[i]);
	}
	
		printf("Enter the elemnets for b: ");
	
		for(i=1;i<=5;i++){
			
	
		scanf ("%d",&b[i]);
	}
	
		for(i=1;i<=5;i++){
			
		c[i]= a[i] + b[i];
	}
	
	
	printf("Addition of a and b arrays is: \n");
		
		for(i=1;i<=5;i++){
			
		printf("%d\n",c[i]);
	}
	
	
	
	
	
	
	
	
	
	
}
