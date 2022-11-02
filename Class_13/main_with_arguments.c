//https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
    int counter;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++)
            {
            printf("\nargv[%d]: %s",counter,argv[counter]);
            if(counter>0)
                //printf("\nargv[%d]^2: %s",counter,argv[counter]*argv[counter]);
                printf("\nargv[%d]^2: %d\n",counter,atoi(argv[counter])*atoi(argv[counter]));
            }
    }
    printf("\n");
    return 0;
}
