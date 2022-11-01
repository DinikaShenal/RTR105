

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

    i = 1;
    p_fact=1;
    fact = 1;
    n_fact=1;
    //for(i=1,fact=1;;)
    if(type=='c')
    {
        if(n<4){
            while(i<=n && p_fact==n_fact)
            {
                p_fact = fact;
                fact = fact * i;
                n_fact = fact/i;
                i+=1;
    
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
        if(n<13)
        {
            while(i<=n && p_fact==n_fact)
            {
                p_fact = fact;
                fact = fact * i;
                n_fact = fact/i;
                i+=1;
    
            }
            
            printf("%3d! = %lld\n",i-1,fact);
        }
        
        else
        {
            printf("Value of factorial of entered number with selected data type is not possible\n");
            return 0;
        }
    }
    
    else if(type=='l')
    {     
            while(i<=n)
            {   
                p_fact = fact;
                fact = fact * i;
                n_fact = fact/i;
                i+=1;
                
                if(p_fact==n_fact)
                {  
                    continue;
                }
                else
                {
                    printf("Value of factorial of entered number with selected data type is not possible\n");
                    return 0;
                }
    
            }
            
            printf("%3d! = %lld\n",i-1,fact);
            
    }
    
    return 0;
}