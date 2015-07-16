/*
   Exercise Program on HackerRank - Dynamic Programming
Link : https://www.hackerrank.com/challenges/maxsubarray	
 */

#include <stdio.h>
#define MAX 7

int main(void)
{

#if 0
    int a[MAX] = {0};
#endif
    int a[MAX] = {-2, -5, 3, 4, 15, -7, -8};

    int i, j;
    int t1 = 0, tmp = 0, arr_total = 0;

    /* Hold values for the two Output */
    int max1 = 0, max2 = 0;

#if 0
    printf ("Enter the contents of Array: ");
    for (i=0; i< MAX; i++)
	scanf("%d", &a[i]);
#endif

    printf ("Contents of Array: \n");
    for (i=0; i< MAX; i++)
    {
	printf ("%d ", a[i]);
    }
    printf("\n");


    /* Get Array Total */ 
    for (i=0; i< MAX; i++)
    {
	arr_total += a[i];
	/* Array total for +ve no */
	if (a[i] >= 0)
	    tmp += a[i];
    }

    /* Assign max2 as max sum */
    (tmp >= arr_total) ? (max2 = tmp):(max2 = arr_total);
    printf("Max sum of element in Array    : [%d]\n", max2);

    for (i=0; i< MAX; i++)
    {
	tmp = a[i];
	for (j=i+1; j< MAX; j++)
	{
	    tmp += a[j];
	    if (tmp > max1)
		max1 = tmp;

	    printf("tmp=%d\n", tmp);
	    printf("max1=%d\n", max1);
	}
    }

    printf("Max sum of element in Subarray : [%d]\n", max1);
    return 0;
}
