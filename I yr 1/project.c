/*Unique Portal for DATABASE MANAGEMNET SYSTEM*/
#include<stdio.h>
#include<time.h>
struct date
{
int year,month,date;
};
struct login
{
char firstname[20];
char lastname[20];
char email[60];
int length;
struct date d;
};
void input(struct login);
int main()
{
    struct login a;
    input(a);//function call
    return 0;

    }
void input(struct login s)
{
    int i;
    srand((unsigned int)time(NULL));
    printf("****************#Create your Unique password#***************");
    printf("\nEnter First Name:");
    gets(s.firstname);
    printf("Enter Last Name:");
    gets(s.lastname);
    printf("Enter Email id:");
    scanf("%s",&s.email);
    printf("Enter your Date of Birth:\n(Note: Please Enter Dated in DD/MM/YYYY format):");
    scanf("%d%d%i",&s.d.date,&s.d.month,&s.d.year);
    printf("\n*******************************#THIS IS AN AUTOMATIC PASSWORD GENERATION SYSTEM#*******************************");
    printf("\nEnter Password length \n(Note:It must be greater than Seven):");
    scanf("%d",&s.length);
	if (s.length>7)

{


	    for (i=0;i<s.length;i++)
	    {
		int k=rand()%128;
		if((k>=48 && k<=57)|| (k>=65 && k<=90)|| (k>=97 && k<=122)|| (k>=35 && k<=37)|| k==64)
		    {
			printf("%c",k);

		    }
		    else
		    {
			i--;
		    }
			    }

	printf("\n");
}
    else
    printf("Length should be greater than seven ...Please try again!!\n");
    printf("\t CONGRATULATIONS YOUR DATA IS STORED IN OUR DATABASE ");
}

