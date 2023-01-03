#include <stdio.h>


void ascending_sort(int array[],int arr_size)
{
    int i,j,min,temp;

    for(i=0;i<arr_size-1;i++)
    {
        min=i;
        for(j=i+1; j<arr_size; j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}


int main()
{
    int n=5;
    int array[100];
    int count[100] = {0}; //initialize all numbers to zero
    int i,minimum,maximum,total=0,max_count=0, mode=0;
    float average,median;
    //printf("Enter any amount of numbers");

    printf("\nEnter the elements of the array: \n");
    for (i=0; i<n;i++)
    {
        scanf("%d",&array[i]);
        total+=array[i];  //adding each element to the total
        count[array[i]]++; //increase the count of the element
    }

    printf("\nthe array is: ");
    for (i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

    minimum=array[0];

    for (i=1; i<n; i++)
    {
        if(array[i]<minimum)
        {
            minimum=array[i];
        }
    }

    printf("the minimum number of this array is: %d\n",minimum);

    maximum=array[0];

    for (i=1; i<n; i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];
        }
    }

    printf("the minimum number of this array is: %d\n",maximum);

    average=(float)total/n; //calculate the average
    printf("The average value of the elements entered in the array is: %f\n",average);


    ascending_sort(array,n); //calling the ascending sort function
    
    if(n%2==0) //if the array is even
    {
        median= (array[n/2] + array[n/2 - 1])/2.0; //calculate the median
    }
    else
    {
        median = array[(n / 2)+1];  // The median is the element at the middle position
    }
    printf("The median of the elements in the array is: %f\n", median);

    printf("\nthe new sorted array is: "); //new array sorted
    for (i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

   
    //mode
    for (i = 0; i < n; i++)
    {
        if (count[array[i]] > max_count)
        {
            max_count = count[array[i]];
            mode = array[i];
        }
    }

    printf("The mode of the elements in the array is: %d\n", mode);

    return 0;
}