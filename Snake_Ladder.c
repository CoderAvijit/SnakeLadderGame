#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>


int dice;
int dice1;
int i=0;
int count=0;
void Dice()
{
      srand(time(NULL));
      dice=((rand()%6)+1);
      
}
void ladder()
{
    if(count==4)
        {   
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count=35;
        }
    else if(count==7)
        {
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count = 23;
        }
    else if(count==14)
        {
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count=43;
        }
    else if(count==24)
        {   
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count = 58;
        }
    else if(count==27)
        {
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count = 37;
        }
    else if(count==53)
        {
            printf("You are in box of = %d \n",count);
            printf("You are in ladder\n\n");
            count = 58;
        }
    else{}
}


void snake()
{
    if(count==9)
        {   
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count=5;
        }
    else if(count==7)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 23;
        }
    else if(count==17)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count=13;
        }
    else if(count==21)
        {   
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 3;
        }
    else if(count==34)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 20;
        }
    else if(count==42)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 11;
        }
    else if(count==49)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 32;
        }
    else if(count==63)
        {
            printf("You are in box of = %d \n",count);
            printf("You are on snake\n\n");
            count = 2;
        }
    else{}
}


int main()
{
        printf ("\n--------------------------------------\n");
        printf ("\n\nWelcome to Snakes and Ladders.\n\n");
        printf ("\n--------------------------------------\n");
        printf ("\n97  98  99  100                        1=Start                100=End              ");
        printf ("\n96  95  94  93  92  91  90  89         4=Ladder to 35         76=snake   to  36    ");
        printf ("\n81  82  83  84  85  86  87  88         7=Ladder to 23         63=Snake  to 2       "); 
        printf ("\n80  79  78  77  76  75  74  73         9=Snake  to 5          49=Snake  to 32      "); 
        printf ("\n65  66  67  68  69  70  71  72         14=Ladder to 43        46=Ladder to 53      ");
        printf ("\n64  63  62  61  60  59  58  57         17=Snake  to 13        42=Snake  to 11      ");
        printf ("\n49  50  51  52  53  54  55  56         21=Snake  to 3         34=Snake  to 20      ");
        printf ("\n48  47  46  45  44  43  42  41         24=Ladder to 58        27=Ladder to 37      ");
        printf ("\n33  34  35  36  37  38  39  40");
        printf ("\n32  31  30  29  28  27  26  25");
        printf ("\n17  18  19  20  21  22  23  24");
        printf ("\n16  15  14  13  12  11  10   9");
        printf (" \n1   2   3   4   5   6   7   8");  /*Prints the board for user's reference*/
        printf ("\n                                --------------------------------------\n");
        printf("                                         This Game is Designed By Avi");
        printf ("\n                                --------------------------------------\n");



        while(count<=100)
                {
                printf("\n\n\nType and press enter to roll\n");
                scanf("%d", &dice1);
                Dice();
                
                printf("You have rolled a %d\n\n", dice);

                    if(dice==1)
                        {
                            printf ("\n--------------------------------------\n");
                            printf("        The game is strated!!!\n");
                            printf ("\n--------------------------------------\n");
                            while(count<=100)
                            {
                            printf("\nType and press enter to roll\n");
                            scanf("%d", &dice1);
                            Dice();
                            printf("You have rolled a %d\n\n", dice);
                        
                            count = count + dice;
                            ladder();
                            snake();
                            printf("You are in box of = %d \n",count);
                            i++;
                            }
                            printf ("\n--------------------------------------\n");
                            printf("	  Game is ended you won!!!!\n\n");
 			                printf ("\n--------------------------------------\n");
                            printf("\n\nyou won at trying of %d times!!!!\n\n",i);
                            exit;
                        }
                    else
                        {
                        printf("try again!!!");
                        }
                }
        
getch();
return 0;
}
