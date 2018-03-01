#include<stdio.h>
int main()
{
	int n=0, i=0, may=0, min=0;
	char p[10];
	scanf("%d",&n);
	scanf("%s",p);
	for(i=0; i<n; i++){
		if((p[i]>='A')&&(p[i]<='Z')){
			may++;
		}
		else{
			min++;	
			}
	}
	printf("%d %d\n", may,min);
	return 0;
}
