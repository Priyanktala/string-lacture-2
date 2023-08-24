#include<stdio.h>
main()
{
	char email[]="com";
	char pass[]="123456";
	
	char c_email[100];
	char c_pass[100];
	
	printf("Enter Email=");
	gets(c_email);
	printf("Enter Password=");
	gets(c_pass);
	
	if(strcmp(email,c_email)==0 || strcmp(pass,c_pass)==0)
	{
		printf("Login Succesfully");
	}
	else
	{
		printf("Login is Not Valid");		
	}

}