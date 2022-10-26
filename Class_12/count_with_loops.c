#include <stdio.h>

int main()
{
int n=1,x=1;
//int n1,n2,x;
/*char type;
char loop;

printf("Enter the first number: ");
scanf("%d",&n);

printf("Enter the last number: ");
scanf("%d",&n2);

printf("\nIs it a decrement or increment(type "d"(decrement) or "i"(increment)): ");
scanf("%c",&type);

printf("\nEnter the number that you want to increase or decrease by: ");
scanf("%d",&x);

printf("\nEnter the type of loop ("f"-for loop / "w"-while loop / "d"-do while loop)");
scanf("%c",&loop);

if(loop == 'f')
{
 if(type == 'i')
 {
  for(n;n<=n2;n+=x){
  printf("The digit is %d\n",n);
 } 
 }
}

*/

/*
for(n=1;n<=100;x+=1,n+=2){
 printf("The %d digit is %d\n",x,n);
 }
*/


while(n<=100)
{
 printf("The %d digit is %d\n",x,n);
 n+=2;
 x+=1;
}

/*
do
 {
   printf("The %d digit is %d\n",x,n);
   n+=2;
   x+=1;
 }
while(n<=100);
*/
return 0;
}
