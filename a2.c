#include <stdio.h>
#include <stdlib.h>
void  problem1();void  problem2();void  problem3();void  problem4();void  problem5();void  problem6();void  problem7();
void  problem8();void  problem9();void  problem10();void  problem11();void  problem12();void  problem13();void  problem14();
void  problem15();void  problem16();void  problem17();void  problem18();void  problem19();void  problem20();void  problem21();
void  problem22();void  problem23();void  problem24();void  problem25();void exit26();

int main()
{
    int get=0;
while(1)
     {

    printf("\nEnter \n1. for problem 1: \n2. for problem 2: \n3. for problem 3: \n4. for problem 4:\n5. for problem 5:\n6. for problem 6: ");
          printf("\n7. for problem 7: \n8. for problem 8: \n9. for problem 9:\n10. for problem 10:\n11. for problem 11: ");
        printf("\n12. for problem 12: \n13. for problem 13: \n14. for problem 14:\n15. for problem 15:\n16. for problem 16: ");
        printf("\n17. for problem 17:\n18. for problem 18:\n19. for problem 19:\n20. for problem 20:\n21. for problem 21: ");
        printf("\n22. for problem 22:\n23. for problem 23:\n24. for problem 24:\n25. for problem 25:\n26. for exit 26\nChoose: ");
    scanf("%d", &get);

    switch(get) {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    case 4:
        problem4();
        break;
    case 5:
        problem5();
        break;
    case 6:
        problem6();
        break;
    case 7:
        problem7();
        break;
        case 8:
        problem8();
        break;
        case 9:
        problem9();
        break;
        case 10:
        problem10();
        break;
        case 11:
        problem11();
        break;
        case 12:
        problem12();
        break;
        case 13:
        problem13();
        break;
        case 14:
        problem14();
        break;
        case 15:
        problem15();
        break;
        case 16:
        problem16();
        break;
        case 17:
        problem17();
        break;
        case 18:
        problem18();
        break;
        case 19:
        problem19();
        break;
        case 20:
        problem20();
        break;
        case 21:
        problem21();
        break;
        case 22:
        problem22();
        break;
        case 23:
        problem23();
        break;
        case 24:
        problem24();
        break;
        case 25:
        problem25();
        break;
        case 26:
        exit26();
        break;
    }
      }
getch();
}

void problem1()
{

	int i, j;
	printf("Enter the number of * :");
	scanf("%d",&j);
	printf("Sample output : ");
	for(i=0; i<j; i++)
	{

		{
			printf("* ");
		}

	}
	printf("\n");
}
void problem2()
{
int i,n,m, j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
		printf("Enter the number of columns :");
	scanf("%d",&m);
	printf("Sample output : \n");
	for(i=0; i<n; i++)
	{
        for(j=0; j<m; j++)
		{
			printf("* ");
		}
			printf("\n");

	}
}

void problem3()
{

}

void problem4()
{

}
void problem5()
{

}
void problem6()
{

}
void problem7()
{

}
void problem8()
{

}void problem9()
{

}void problem10()
{

}void problem11()
{

}void problem12()
{

}void problem13()
{

}void problem14()
{

}void problem15()
{

}void problem16()
{

}void problem17()
{

}void problem18()
{
int num,r,c,sp;
 printf("Enter number of rows : ");
 scanf("%d",&num);
 for(r=1; r<=num; r++)
 {
   for(sp=num-r; sp>=1; sp--)
       printf(" ");
   for(c=1; c<=r; c++)
       printf("%d",c);
   for(c=r-1; c>=1; c--)
       printf("%d",c);
   printf("\n");
 }
 for(r=1; r<=num; r++)
 {
   for(sp=r; sp>=1; sp--)
       printf(" ");
   for(c=1; c<=(num-r); c++)
       printf("%d",c);
   for(c=num-r-1; c>=1; c--)
       printf("%d",c);
   printf("\n");
 }
}void problem19()
{

}void problem20()
{

}void problem21()
{

}void problem22()
{

}void problem23()
{

}void problem24()
{

}void problem25()
{
int i,j,n;
    printf("Enter number of lines[height of triangle] : \t");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%d",j);
        for(j=i-1; j>=1; j--)
            printf("%d",j);
        printf("\n");
    }
}
void exit26()
{
exit(0);
}
