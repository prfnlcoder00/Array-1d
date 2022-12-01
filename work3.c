#include<stdio.h>

main(){
	
	int a[25],n,i;
	float sum = 0;
	float avg = 0;
	
	
	printf("Enter the value:- ");
	scanf ("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++){
		
		sum = sum+a[i];
		avg = sum / n;
	}
	
	printf("\n%f",avg);
	

	
	
	
}
