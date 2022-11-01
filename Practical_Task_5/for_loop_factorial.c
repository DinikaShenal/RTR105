#include <stdio.h>
// 3! for c
// 12! for int

int main() {
    
    char type;
    int i,n;
    long long int fact,p_fact,n_fact;
    
    printf("Enter the data type to use(char(c) / int(i) / long long int(l)): ");
    scanf("%c",&type);
    
    printf("Dear user, please, enter one natural number: ");
    scanf("%d",&n);

    p_fact=1;
    fact = 1;
    n_fact =1;
    
    if(type=='c')
    {
        if(n<4 && p_fact==n_fact ){
            for(i=1 ; i<=n ; i++)
            { 
                p_fact = fact;
                fact = fact * i;
                n_fact = fact/i;
            }
            printf("%3d! = %lld\n",i-1,fact);
        }
        
        else{
            printf("Value of factorial of entered number with selected data type is not possible\n");
            return 0;
        }
        
    }
    
    else if(type=='i')
    {
        if(n<13 && p_fact==n_fact ){
            for(i=1 ; i<=n ; i++)
            { 
                p_fact = fact;
                fact = fact * i;
                n_fact = fact/i;
               
            }
            printf("%3d! = %lld\n",i-1,fact);
        }
        
        else{
            printf("Value of factorial of entered number with selected data type is not possible\n");
            return 0;
        }
    }
    
    else if(type=='l')
    {    
         for(i=1 ; i<=n ; i++)
        {
            p_fact = fact;
            fact = fact * i;
            n_fact = fact/i;
            
            if (p_fact!=n_fact)
            {
                printf("Value of factorial of entered number with selected data type is not possible\n");
                return 0;
            }
            else
            {
                continue; 
            }
        }
        
        printf("%3d! = %lld\n",i-1,fact);
    }
    return 0;
}