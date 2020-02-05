#include<stdio.h>
int main(){
int T,i,n,d,temp;
scanf("%d",&T);
while(T>0){

printf("Enter size of array\n");
scanf("%d",&n);
int ar[n];
for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
for(i=0;i<n;i++){
  printf("%d\t",ar[i]);
}
printf("\nEnter rotating value\n");
scanf("%d",&d);
if(d>n){
  printf("Not possible");
}
else{

while(d>0){
temp=ar[0];
for(i=1;i<n;i++){
   ar[i-1]=ar[i];
}
ar[n-1]=temp;
d--;
}
for(i=0;i<n;i++){
  printf("%d\t",ar[i]);
  }
}
T--;
}
return 0;
}