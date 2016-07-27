/*Implement an algorithm to determine if a string has all unique characters. Name this program unique.c.*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	int x;
	printf("Enter text:\n");
	fgets(s, sizeof(s), stdin);
	sscanf(s, "%d", &x);
	int length=strlen(s);
	int i=0;
	int add=0;
	int counter=0;
/*	printf("length is %d\n", length);*/
	for(i=0; i<length; i++)
	{				/*these two for loops rotate the numbers being compared*/
	if (s[i]==' ') 			/*makes program ignore spaces*/
		continue; 
		for(add=1;add+i<length;add++)
		{
			if (s[i]==s[i+add])		
			{
				printf("The characters are not unique\n");
				counter++;
				break;	
			}
		}
		if (s[i]==s[i+add])
			break; 
	}
	if (counter==0)
		printf("The characters are unique\n");
	return 0;


	}
