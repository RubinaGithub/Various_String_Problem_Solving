#include<stdio.h>
#include<string.h>


void manu_choice()
{
	printf("PRESS 1 TO KNOW TOTAL NUMBER\n");
	printf("PRESS 2 TO KNOW EVEN SECTION\n");
	printf("PRESS 3 TO KNOW ODD SECTION\n");
	printf("PRESS 4 TO KNOW NUMBER OF VOWEL,CONSONANT,DIGIT AND SPACE\n");
	printf("PRESS 5 TO KNOW NUMBER OF UPPERCASE AND LOWERCASE ALPHABET\n");
	printf("PRESS 6 TO KNOW LENTH\n");
	printf("PRESS 7 TO KNOW WORD FOUND AND POSITION\n");
}

int totalword(char a[100])
{
	int i,n=0;
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	
	return n;
}

void evenprint(char a[100])
{
	
    int i;
	char b[100];
	int j,n;
    
	n=totalword(a);
	
	for(i=0,j=0;i<n;i++)
	{
		
		if(i%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	puts(b);
	printf("\n");
}

void oddprint(char a[100])
{
int k,i,n;
 n=totalword(a);
	char c[100];
	for(i=0,k=0;i<=n;i++)
	{
		if(i%2==1)
		{
			c[k]=a[i];
			k++;
		}
	}
	c[k]='\0';
	puts(c);
}

void vowel_cons_spce(char a[100])
{
	int vow=0,con=0,dig=0,spa=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			vow++;
		}
		else if(a[i]!= ' ')
		{
			con++;
		}
		else if(a[i]>=0 && a[i]<=9)
		{
			dig++;
		}
		else
		{
			spa++;
		}
	}
	printf("\nNumber of Vowel:%d\n\n",vow);
	printf("Number of Consonant:%d\n\n",con);
	printf("Number of digits:%d\n\n",dig);
	printf("Numer of spaces:%d\n\n",spa);
}

void upeer_lower_count(char a[100])
{
	int upper=0,lower=0,i;
	 for(i=0;a[i] != '\0'; i++)
	 {
		if (a[i] >= 'A' && a[i] <= 'Z')
	    {
			upper++;
	    }
        else if (a[i] >= 'a' && a[i] <= 'z')
	    {
			lower++;
	    }
     }
	printf("Number of uppercase:%d\n\n",upper);
	printf("Number of lowercase:%d\n\n",lower);
}

void string_length(char a[100])
{
	int count=0,i;
	i=0;
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	printf("Length:%d\n\n",count);
}

void position_search(char a[100], int n)
{
	char index[100];
	int loc=0,i,j;
	printf("Enter a word: ");
	scanf("%c",&index);
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]==index[j])
		{
			printf("FOUND");
			index[j]=i;
			j++;
			printf(", LOCATION:%d",loc);
			break;
		}
		else
		{
			printf("NOT FOUND");
		}
		printf("\n");
		break;
	}
}

int main()
{
	char a[100];
	int i,n;
	printf("Enter your String:");
	gets(a);
	printf("\n");
	printf("Your String is:");
	puts(a);
	
	char choice1;
	int choice;

	do
	{
	manu_choice();
	printf("Enter your choice :");
	scanf("%d", &choice);
	if(choice==1)
	{
	n=totalword(a);
	printf("\nTotal word=%d\n\n",n);
	}
	else if(choice==2)
	{
	evenprint(a);
	}
	else if(choice==3)
	{
	oddprint(a);
	}
	else if(choice==4)
	{
	vowel_cons_spce(a);
	}
	else if(choice==5)
	{
	upeer_lower_count(a);
	}
	else if(choice==6)
	{
	string_length(a);
	}
	else if(choice==7)
	{
	position_search(a,n);
	}
	printf("PRESS y TO DO AGAIN OR ANY KEY TO EXIT :");
	scanf("%s", &choice1);
	}
	while(choice1=='y');
	getchar();
	getchar();
	return 0;
}