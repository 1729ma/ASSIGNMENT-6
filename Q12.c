#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0, num, res, n, c2=0, i;// declaring variables
    while(c!=4)
    {
      
        printf("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");

        //options for user
        printf("\nEnter your choice:");
        scanf("%d", &c);

        //write case statement for Four options

        switch(c)
        {
            //For factorial block
            case 1:

                //code for factorial functionality
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;
                res=num;
                while(num>1)
                {
                    res = res*(num-1);
                    num = num-1;
                }
                printf("\nFactorial of %d is %d. \n\n",n, res);
                break;

            //For prime block
            case 2:

                //functionality of Prime or not

                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        c2=1;
                        break;
                    }
                }

             
                if(num==1)
                    printf("\n1 is neither prime nor composite");
                else
                {
                        if(c2==0)
                            printf("\n%d is Prime Number.\n\n", n);
                        else
                            printf("\n%d is not a Prime Number.\n\n", n);
                }
                break;

            //For Odd-even block
            case 3:

                //functionality for Odd-even
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
                break;

            //For Exit block
            case 4:
                printf("\nExit");
                break;
        }
    }
}
