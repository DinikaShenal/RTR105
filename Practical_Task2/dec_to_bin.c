
#include <stdio.h>


void decimalToBinary(int num /*, char type_bitshift, int num_bitshift*/) {   
    //if the decimal number entered is Zero
    int count=0;
    int total_count;
    
    
    if (num == 0) {
        printf("0");
        return;
    }
  
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i;
   
   for (i=0;num>0;i++)
   {
      binaryNum[i] = num % 2; //allocates the remainder of number/2
      num /= 2;  // new number divided by 2
      count+=1;
   }
   //adding zeros to front
   if(count<=4)
   {
       total_count=4;
       for(int x=count;x<total_count;x++)
       {
           binaryNum[x]=0;
       }
   }

   else if(count<=8)
   {
       total_count=8;
       for(int x=count;x<total_count;x++)
       {
           binaryNum[x]=0;
       }
   }
   
   else if(count<=12)
   {
       total_count=12;
       for(int x=count;x<total_count;x++)
       {
           binaryNum[x]=0;
       }
   }
   
   // Printing array in reverse order.
   for (int j = total_count-1 ; j >= 0; j--)
      printf("%d", binaryNum[j]);

   
}

//Bitshift part
int Bitshift(int num)
{
     
    int dec_num;
    int num_bitshift;
    char type_bitshift;
    
    printf("\nWhat type of bit shift you want?( left(L) or right(R)): ");
    scanf("%s", &type_bitshift);
    printf("\n");
    printf("Enter the number of bits to shift: ");
    scanf("%d", &num_bitshift);
    printf("\n");
    if(type_bitshift='L')//performs the left bitshift
    {
        dec_num = num;
        dec_num = dec_num<<num_bitshift; //num_bitshift;
    }

    else if(type_bitshift='R')//performs the right bitshift
    {
        dec_num = num;
        dec_num = dec_num>>num_bitshift; //num_bitshift;
    }
    
    
    //returns the bitshifted decimal result
    return dec_num;
}


int main() {
  int num;
  int new_number;
  
  printf("Enter decimal number: ");
  scanf("%d", &num);
  printf("\n");
  printf("Binary Digit is: ");
  decimalToBinary(num);
  printf("\n");
  new_number = Bitshift(num);
  printf("New Binary Digit is: ");
  decimalToBinary(new_number);
  printf("\n");
  printf("\n");
  return 0;
}