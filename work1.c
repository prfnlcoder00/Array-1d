#include<stdio.h>

main(){
	
	int n;
	
	printf("Enter size of Array: ");
	scanf ("%d",&n);
	
	int a[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	
	
}
