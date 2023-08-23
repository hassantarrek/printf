#include<stdio.h>
void binary(int x){
int res[32],m=0,i;
while(x!=0){
res[m]=x%2;
x/=2;
m++;
}
for (i = m-1; i >=0; i--)
  printf("%d",res[i]);
printf("\n") ;

}
int main (){
int number,i;
printf("enter a number \n" );
scanf("%d",&number );
for ( i = 1; i <= number; i++)
binary(i);

  return 0;
 }

