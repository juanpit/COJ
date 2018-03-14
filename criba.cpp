#include<stdio.h>
 int arr[1000000];
int main(){
	int i, j;
	for(i=2;i<=1000000;i++){
		if(arr[i]==0){
			arr[i]=2;
		for(j=i*2;j<=1000000;j+=i){
			arr[j]=1;
			}
		}
	}
	for(i=2;i<=1000;i++){
		printf("%d %d\n", arr[i],i);
	}
	scanf("%");
	return 0;
}
