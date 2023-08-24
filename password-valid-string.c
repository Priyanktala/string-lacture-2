#include<stdio.h>
main()
{
	char password[100];
	int i, length, letter=0, digit=0, symbol=0;
	
	printf("Enter Password=");
	gets(password);
	
	length=strlen(password);
	
	if(length>=6)
	{
		for(i=0; i<=length; i++)
		{
			if(password[i]>='a' && password[i]<='z' || password[i]>='A' && password[i]<='Z')
			{
				letter=1;
			}
			else if(password[i]>=0 && password[i]<=9)
			{
				digit=1;
			}
			else
			{
				symbol=1;
			}
		}
		if(letter==1 && digit==1 && symbol==1)
		{
			printf("Password is Valid");
		}
		else
		{
			printf("Password is Not Valid, Plz Enter Valid Password");
		}
	}
	else
	{
		printf("Plz Enter Password Length Minimum 6 character");
	}
}