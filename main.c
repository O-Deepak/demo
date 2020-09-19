#include<myfn.h>

void main()
{
    head x, side, main, dess, o;
    x.start=side.start=main.start=dess.start=o.start=NULL;
    float fcode;
    int quantity, location;
    insert(&side, 1.1, "Samosa", 1, 25);
    insert(&side, 1.2, "Grilled Cheese Sandwich", 1, 50);
    insert(&side, 1.3, "Nachos", 1, 100);
    insert(&main, 2.6, "Veg Pulao", 1, 200);
    insert(&main, 2.1, "Pav Bhaji", 1, 100);
    insert(&main, 2.2, "Punjabi Thali", 1, 350);
    insert(&main, 2.3, "Mexican Sizzler", 1, 250);
    insert(&main, 2.5, "Margherita Pizza", 1, 200);
    insert(&main, 2.4, "Peri Peri Chicken Pizza", 1, 250);
    insert(&side, 1.4, "Chicken Burger", 1, 150);
    insert(&side, 1.5, "BBQ Chicken Roll", 1, 250);
    insert(&main, 2.7, "Chicken Handi Biryani", 1, 250);
    insert(&dess, 3.1, "Chocolate Overload Waffle", 1, 150);
    insert(&dess, 3.2, "Cinnamon Waffle", 1, 50);
    insert(&dess, 3.3, "Chocolate Cake", 1, 50);
    insert(&dess, 3.4, "Red Velevet Cake", 1, 50);
    insert(&dess, 3.5, "Strawberry Mouse", 1, 100);
    insert(&dess, 3.6, "Orea Freakshake", 1, 150);
    insert(&dess, 3.7, "Fruit Milkshake", 1, 80);
    //login
    char userid[30], password[30], userid1[30], password1[30], c=' ', k=' ';
    int i=0, ch;
    while(1)
    {
        cls();
mainscr: printf("\n\nEnter Choice: 1. Login 2.New User 3.Exit\n");
        scanf("%d", &ch);
        if(ch==3)
            break;
    //register new user
        if(ch==2)
        {
            printf(" \n\n  ENTER USERNAME:-");
            gets(userid1);
            printf(" \n\n  ENTER PASSWORD:-");
            while(i<20)
            {
                scanf("%c",&password1[i]);
                //password1[i]=getch();
                c=password1[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            password1[i]='\0';
            printf("\n\n Registered Successfully!\n");
//<<<<<<< branch
          
//=======
            
//>>>>>>> master
        }
        else
        {

            printf(" \n\n Enter username:-");
            gets(userid);
            printf(" \n\n Enter password:-");
            c=' '; i=0;
            while(i<20)
            {
                scanf("%c",&password1[i]);
                //password[i]=getch();
                c=password[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            password[i]='\0';
            if(strcmp(userid,userid1)==0&&strcmp(password,password1)==0)
            {
                printf("\n\n !!!!!!!!!!!LOGIN SUCCESFUL!!!!!!!!!!!");
///<<<<<<< branch
//=======
                
//>>>>>>> master
                cls();
                int i, ch;
      mainmenu: printf("Enter choice: 1.View Menu 2.View Previous Order 3.Log Out\n");
                scanf("%d", &ch);
                if(ch==2)
                {
                    if(o.start==NULL)
                    {
                        printf("Sorry, Previous Order does not exist!\n");
//<<<<<<< branch
//=======
                        
//>>>>>>> master
                        cls();
                        goto mainmenu;
                    }
                    else
                    {
                        cls();
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto mainmenu;
                        }
                    }

                }
                else if(ch==1)
                {
             order: printf("Enter Choice:\n");
                    printf("1.Side\n2.Main Course\n3.Dessert\n");
                    scanf("%d", &ch);
                    while(1){
                    switch(ch)
                    {
                        case 1: foodlist(&side);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter the quantity:\n");
                                scanf("%d", &quantity);
                                order(&side, &o, fcode, quantity);
                                foodlist1(&o);
                                break;
                        case 2: foodlist(&main);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter the quantity:\n");
                                scanf("%d", &quantity);
                                order(&main, &o, fcode, quantity);
                                foodlist1(&o);
                                break;
                        case 3: foodlist(&dess);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter the quantity:\n");
                                scanf("%d", &quantity);
                                order(&dess, &o, fcode, quantity);
                                foodlist1(&o);
                                break;
                        default: printf("Sorry, Invalid Choice.\n");
                    }
        afterorder: printf("\n\n");
                    printf("\n\t\tEnter Choice: \n\t\t1.Hungry For More? \n\t\t2.View Order \n\t\t3.Confirm Order?\n");
                    scanf("%d", &ch);
                    if(ch==1)
                    {
                        cls();
                        goto order;
                    }
                    else if(ch==2)
                    {
                        cls();
                        printf("Current Order status:\n");
                        foodlist1(&o);
                        goto afterorder;
                    }

                    else if(ch==3)
                    {
                        cls();
                        foodlist1(&o);
                        printf("\nTotal bill amount: %0.2f\n", getbill(&o));
                        printf("\nEnjoy Your Meal :D !\n");
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            cls();
                            goto mainmenu;
                        }
                    }
                }
                }
                else if(ch==3)
                {
                    cls();
                    goto mainscr;
                }
                else
                    printf("\nInvalid Choice.\n");
            }
            //admin
            else if(strcmp(userid,"admin")==0&&strcmp(password,"admin123")==0)
            {
                printf("\n\n WELCOME ADMIN");
//<<<<<<< branch
//=======
                
//>>>>>>> master
                cls();
                int addchoice;
        admin:  printf("\n\n Enter Choice:\n");
                printf("1. View Menu\n");
                printf("2. Update Menu\n");
                printf("3. View Recent Order\n");
                printf("4. Log Out\n");
                scanf("%d", &addchoice);
                cls();
                if(addchoice==4)
                    goto mainscr;
                switch(addchoice)
                {
                    case 1:cls();
                        printf("\nSide:\n");
                        foodlist(&side);
                         printf("\nMAIN COURSE:\n");
                        foodlist(&main);
                         printf("\nDESSERT:\n");
                        foodlist(&dess);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                        }
                        break;
                    case 3: //Sleep(3000);
                        cls();
                        printf("Recent Order:\n");
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto admin;
                        }
                        break;
                    case 2:
                        cls();
                        float fcu, pu;
                        char fnameu[50];
                        printf("UPDATE MENU\n");
                        printf("What do you want to update?\n");
                        printf("Enter Choice:\n");
                        printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                            case 1: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    gets(fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insert(&side, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&side);
                                    break;
                            case 2: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    gets(fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insert(&main, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&main);
                                    break;
                            case 3: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    gets(fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insert(&dess, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&dess);
                                    break;

                        }
                        goto admin;
                        break;

                default:printf("\nInvalid Choice\n");
                }
            }
            else
            {
                printf("\n\n INCORRECT USERNAME OR PASSWORD");
//<<<<<<< branch
               
//=======
                
//>>>>>>> master
            }
    }
}
}
