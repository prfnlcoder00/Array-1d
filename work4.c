#include<stdio.h>

main(){
	
	int a[10],n,i;
	float sum = 0;

	
	
	printf("Enter the value:- ");
	scanf ("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++){
		
		sum = sum+a[i];

	}
	
	printf("\n%f",sum);
	

	
	
	
}
