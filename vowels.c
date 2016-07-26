/*Write a program vowels.c that takes a string as input, removes vowels, and outputs the new string.*/
#include <stdio.h>
#include <string.h>
int main ()
{
	char text[100];
	printf("Enter text:\n");
	fgets(text,sizeof(text), stdin);
//	while (fgets!="\n");
	int length=strlen(text);
//	printf("%d", length);
	int i;
	char new[length];
	for (i=0; i<length; i++)
	{
		if (text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='u'||text[i]=='y')	
			continue;
		else
		{
			printf("%c", text[i]);
			new[i]=text[i];
		}
	}
return 0;
}
