/* Write a program sum.c given an array of n integers where n > 1, return an array of same size as the input array where every index of the output array is the cumulative sum of elements in the array so far. You can have it so that the array is input by the user.*/
#include <stdio.h>
#include <string.h>
int main(){
	int num1[100]; 
	int i=0; 
	int counter=0;
	char x;
	printf("Enter integers:\n");
	do /*inputs variables*/ 
	{
		scanf("%d", &num1[i]);	
		i++;
		counter++;
	}
	while (getchar()!='\n');
	printf("counter is %d\n", counter);
	for (i=0;i<counter; i++) /*if num is negative, subtract one from the counter*/
	{
		if (num1[i]<0)
			counter--;
	}
	int num2[counter];
	num2[0]=num1[0];
	printf("The second array is %d", num2[0]);
	for (i=1;i<=counter; i++)
	{
		if (i!=counter&&num1[i]>0)
		{
			num2[i]=num2[i-1]+num1[i];
			printf(", %d", num2[i]);
		}
		else if (i==counter) /*if last num, new line*/
		{
			printf("\n");
		}
	}
	return 0;
}
