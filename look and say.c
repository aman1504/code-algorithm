/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="1";
	char str2[]="11";
	char str[100];
	char temp[100];
	int n,i,j;
	strcpy(str,str2);
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%s",str1);
	}
	else if(n==2)
	{
		printf("%s",str2);
	}
    
	else
	{
		printf("%s\n",str1);
		printf("%s\n",str2);
		for( i=3;i<=n;i++)
		{
			int k=0;
			for(j=0;j<strlen(str);j++)
			{  
				int count=49;
				while(str[j]==str[j+1] && (j+1)<strlen(str))
				{
					count++;
					j++;
				}
				temp[k]=count;
				temp[k+1]=str[j];
				k=k+2;
					
			}
	
			strcpy(str,temp);
			printf("%s\n",str);
		}
	}
	
	
}
