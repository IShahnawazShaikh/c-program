#include<stdio.h>
int main(){
	int p=0,c=0,i,j,temp=0,n,min;
	printf("\nEnter the number of element to be sorted\n");
	scanf("%d",&n);
	int a[n];
    printf("\nEnter %d element in the Array\n",n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		min=a[i];
		j=i-1;
		while(min<a[j] && j>=0){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=min;
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

