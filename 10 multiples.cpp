#include<stdio.h>
main()

{
	int n,i,r;
	
	printf("Donner la valeur de n: ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("Le nombre est negatif. Donner une valeur positif: ");
		scanf("%d",&n);
	}
	for(i=1;i<=10;i++)
	{
		r=n*i;
		printf("les multiples sont: %d\n",r);
	}
}

