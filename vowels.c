/*MADLEINE CHARITY
  Write a program vowels.c that takes a string as input, removes vowels, and outputs the new string.*/
#include <stdio.h>
#include <string.h>
int main ()
{
	char text[100];
	printf("Enter text:\n");
	fgets(text,sizeof(text), stdin);
	int length=strlen(text);
	int i;
	char new[length];
	for (i=0; i<length; i++)
	{
		if (text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='u'||text[i]=='y')	
			continue;
		else
		{
			new[i]=text[i];
			printf("%c", new[i]);
		}
	}
return 0;
}
