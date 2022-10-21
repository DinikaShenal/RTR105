#include <stdio.h>

int main()
{
    int a,b,c;
    int min,mid,max;
    char order;
    printf("\nEnter the order you want(Ascending('a') or Descending('d')) : ");
    scanf("%c",&order);
    printf("\nEnter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    printf("Enter the Third Number: ");
    scanf("%d",&c);

    min = a;
    mid = b;
    max = c;
    
    //ascending order code
    if (min>mid)
    {
        mid = a; min = b;
    }
    if(mid>max)
    {
        max = mid;
        mid = c;
        if(min>mid)
        {
            mid = min;
            min = c;
        }
    }

//Ascending order
if(order=='a'){
    printf("\nLetters are %d %d %d\n\n",min,mid,max);
}
//Descending order
else if(order=='d'){
    printf("\nLetters are %d %d %d\n\n",max,mid,min);
}
    
return 0;

   

}