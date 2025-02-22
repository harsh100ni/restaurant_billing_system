#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>

void breakFast();
void lunch();
void dinner();
void mainmenu();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	mainmenu();
}

void mainmenu()
{
	char choice = ' ' ;
  printf("              ==============================          \n");
  printf("                   Food Ordering System          \n ");
  printf("                     (: Cash only :)             \n");
  printf("             ==============================          \n\n");

  printf("\t\tEnter [1.] -> Breakfast Menu\n");
  printf("\t\tEnter [2.} -> Lunch Menu\n");
  printf("\t\tEnter [3.] -> Dinner Menu\n");
  printf("\t\tEnter [4.] -> Exit\n\n");
  
  printf("              ==============================          \n");
  time_t t;   // not a primitive datatype
  time(&t);
  printf("\t\t %s", ctime(&t));
  printf("              ==============================          \n\n");
  
  printf("\t      Kindly Enter Your Choice: ");
  scanf("%c", &choice);
  
  system("cls");

    {
		if (choice == '1')
              breakFast();
        else if (choice == '2')
              lunch();
        else if (choice == '3')
              dinner();
        else if (choice == '4')
              exit(0);
        else if (choice != '1', '2' , '3' , '4')
            {
            	mainmenu();
            }
	}

}

void breakFast() ///Breakfast Menu Screen
{

  int choice = 0;
  int quantity = 0;
  int again = 0;
  printf("\t            ==============================          \n");
  printf("\t                    Breakfast Menu   \n");
  printf("\t            ==============================          \n\n");

  printf("\t   [1] Pancakes                           - Rs.209 only \n");
  printf("\t   [2] Avocado Toasts                     - Rs.299 only\n");
  printf("\t   [3] Granola                            - Rs.186 only\n");
  printf("\t   [4] Sausage Gravy Breakfast Lasagna    - Rs.379 only\n");
  printf("\t   [5] Instant Pot Mini Frittatas         - Rs.186 only\n");
  printf("\t   [6] Scrambled Eggs with Herbs          - Rs.146 only\n");
  printf("\t   [7] Breakfast Bread Pudding            - Rs.156 only\n");
  printf("\t   [8] Blueberry Scones with Lemon Glaze  - Rs.466 only\n");
  printf("\t   [9] Sheet-Pan Bacon Egg Sandwiches     - Rs.499 only\n");
  printf("\t   [10] Burritos with Chorizo             - Rs.409 only\n");
  printf("\t   [11] Add New One             \n");
  printf("\t   [12] Back To Main-Menu         ");

  printf("\n\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
           printf("\nIngredients : All-Purpose Flour,Sugar,Baking Powder,Teaspoon Salt,Ground Nutmeg,Eggs,Unsalted Butter,\n\n");
	       printf("Enter Quantity : ");
	       scanf("%d", &quantity);
           total = 209 * quantity ;
           printf("===================================          ");
           printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
           printf("====================================          \n");
	       printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
           scanf("%d", &again);
           system("cls");

			 if (again == 1 )
				 breakFast();
			 else if (again == 2 )
                 mainmenu();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
				   exit(0);
				}
       }

	else if ( choice == 2)
       {
		  printf("\nIngredients : Ripe Avocado, Fine Salt, Ground Black Pepper, Slices of Whole Grain, Clove Garlic, Extra-Virgin Oil, Flaky Sea Salt, Red Pepper Flakes\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 299 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
          printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
          scanf("%d", &again);
          system("cls");

			 if (again == 1 )
				breakFast();
			 else if (again == 2 )
				mainmenu();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
				   exit(0);
				}
        }
    else if ( choice == 3 )
        {
			  printf("\nIngredients : Oats, Slivered Almonds, Cashews, Sweet Coconut, Dark Brown Sugar, Vegetable Oil, Salt, Raisin\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 186 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 4 )
        {
			  printf("\nIngredients : Kosher Salt, Ground Black Pepper, Lasagna Noodles, Olive Oil, Sausage, Scallions, Flour, Milk, Grated Nutmeg, Mozzarella Cheese, Cheddar, Parmesan, Spinach, Parsley Leaves\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 379 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 5 )
        {
			  printf("\nIngredients : Bacon, Mushrooms, Thyme Leaves, Kosher Salt, Baby Spinach, Cheddar, Eggs, Cream, Grated Nutmeg \n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 186 * quantity ;
			  printf("===================================          ");
           	  printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 6 )
        {
			  printf("\nIngredients : Eggs, Milk, Heavy Cream, Fresh Chives, Parsley Leaves, Tarragon Leaves, Black Pepper, Unsalted Butter \n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 146 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 7 )
        {
			  printf("\nIngredients : Eggs, Honey, Vanilla Extract, Orange Zest, Kosher Salt, Brioche Leaf, Golden Raisins, Maple Syrup \n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 156 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 8 )
        {
			  printf("\nIngredients : Flour, Baking Poweder, Salt, Unsalted Butter, Blueberries, Heavy Creams, Lemon Juice, Zest finely Grated\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 466 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 9 )
        {
			  printf("\nIngredients : Bacon, Eggs, Scallions, Black Pepper, Vegetable Oil, Plum Tomatoes, Cheddar, Potato Sandwich Rolls, Hot Sauce \n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 499 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 10 )
        {
			  printf("\nIngredients : Jalapeno Pepper, Red Onion, Cilantro, Lime Juice, Kosher Salt, Pepper, Chorizo, Hash Brown Potatoes, Eggs, Refried Beans, Tortillas, Mozzarella Cheese \n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 409 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   breakFast();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					 exit(0);
                }
        }
    else if ( choice == 11 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file.");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Suggest Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Denounce Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item's Name to add: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            breakFast();
        }
    }

        }
    else if ( choice == 12 )
        {
            mainmenu();

        }
    else if (choice != 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11 , 12)
        {
            system("cls");
            printf("\n\n\t\tOops! Invalid Choice Entered.\n\n");
            breakFast();
        }
  }

}

void lunch() /// Lunch Screen Menu
{
  int choice;
  int quantity;
  int again;

  printf("\t               ==============================          \n");
  printf("\t                        Lunch Menu   \n");
  printf("\t               ==============================          \n\n");
  
  printf("\t   [1] Lemon-Herb Rice Salad                      - Rs.299 only \n");
  printf("\t   [2] Lightened-Up Stuffed Peppers               - Rs.366 only\n");
  printf("\t   [3] Tex-Mex Chicken Quinoa                     - Rs.319 only\n");
  printf("\t   [4] Veggie Lover's Club Sandwich               - Rs.299 only\n");
  printf("\t   [5] Nordic Shrimp Toast                        - Rs.339 only\n");
  printf("\t   [6] Chicken Tacos with Avocado Salad           - Rs.419 only\n");
  printf("\t   [7] Pizza with Cauliflower Crust               - Rs.479 only\n");
  printf("\t   [8] Pork and Broccoli Grain Bowl               - Rs.519 only\n");
  printf("\t   [9] Monte Cristo Crepes                        - Rs.319 only\n");
  printf("\t   [10] Antipasti Penne                           - Rs.319 only\n");
  printf("\t   [11] Grilled Spiced Chicken and Plums          - Rs.489 only\n");
  printf("\t   [12] Shrimp Fajita Salad                       - Rs.489 only\n");
  printf("\t   [13] Veggie-Stacked Pita Pockets               - Rs.399 only\n");
  printf("\t   [14] Creamy Hummus and Smoked Turkey Sandwich  - Rs.589 only\n");
  printf("\t   [15] Turkey Frittata                           - Rs.639 only\n");
  printf("\t   [16] Add New One                     \n");
  printf("\t   [17] Back To Main-Menu               \n");

  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
	      printf("\nIngredients : Red Onion, Carrot, Vegetable Oil, Long-Grain Rice, Wine Vinegar, Brown Sugar, Cucumber, Peanuts, Fresh Mint, Basil, Watercress, Cilantro \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total = 299 * quantity ;
	      printf("===================================          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
	        {
		       printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      lunch();
               else if (again == 2 )
				  mainmenu();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
			      exit(0);
			   }
            }
       }
	else if ( choice == 2)
       {
		  printf("\nIngredients : Bell Peppers, Kosher Salt, Ground Black Pepper, Olive Oil, Cloves Garlic, Onion, Beef, Oregano, Cinnamon, Cumin, Tomato Paste, Chicken Broth, Long-Grain White Rice, Brown Lentils, Parsley or Dried Mint \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 366 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
		  {
		    printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   lunch();
		    else if (again == 2 )
				mainmenu();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
			   exit(0);
			}
		  }//codeastro.com
       }
    else if ( choice == 3 )
        {
            printf("\nIngredients : Cumin, Chili Powder, Black Pepper, Olive Oil, Red Onion, Chicken, Quinoa, Black Beans, Avocado, Cheese, Lime Juice, Cilantro \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 319 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nIngredients : Avocado, Balsamic or White Wine Vinegar, Oregano, Yogurt, Cloves Garlic, Whole Wheat, Arugula, Smoked Tofu or Mozzarella Cheese, Red Onion, Cucumber, Pepperoncini, Red Bell Pepper, Roasted Peppers \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 299 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nIngredients : Coriander Seed, Lemon, Kosher Salt, Black Pepper, Shrimp, Cream Cheese, Greek Yogurt, Pumpernickel Bread, Persian Cucumber, Radishes \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 339 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nIngredients : Chicken Thighs, Jarred Salsa, Lime Juice, Vegetable Oil, Sour Cream, Cilantro, Kosher Salt, Avocado, Radishes, Corn Tortilla, Lettuce \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 419 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					  lunch();
				else if (again == 2 )
                      mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nIngredients : Cauliflower, Mozarella Cheese, Parmesan Cheese, Oregano, Kosher Salt, Garlic Powder, Eggs, Marinara Sauce, Bell Peppers and Onion \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 479 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nIngredients : Pork Tenderlion, Garlic, Oregano, Cumin, Pepper, Sweet Potato, Broccoli Florets, Extra-Virgin Olive Oil, Quinoa, Orange Juice, Red Wine Vinegar, Red Pepper Flakes \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 519 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nIngredients : Raspberry Jam, Dijon Mustard, Unsalted Butter, Crepes, Black Forest Ham, Deli Turkey, Muenster Cheese, Greens, Small Head Frisee, Extra-Virgin Olive Oil, Kosher Salt, Pepper \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 319 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nIngredients : Whole-Grain Penne, Olive Oil, Soppressata or Salami, Spanish Queen Olives, Tomatoes, Basil Leaves, Mozzarella \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 319 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nIngredients : Chicken Drumsticks, Allspice, Cayenne Pepper, Kosher Salt, Black Pepper, Cloves Garlic, Extra-Virgin Olive Oil, Lemon Juice, Plums, Honey, Broccoli, Almonds, Low-Fat Yogurt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 489 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nIngredients : Shrimp, Tortillas, Extra-Virgin Oil, Onion, Bell Peppers, Fajita Seasoning, Lime Juice, Honey, Cilantro, Pepper, Kosher Salt, Lettuce \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 489 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 13 )
        {
            printf("\nIngredients : White Beans, Water, Pecorino Romano Cheese, Lemon Juice, Kosher Salt, Red Pepper Flakes, Extra-Virgin Olive Oil, Black Pepper, Avocado, Cucumber, Whole-Wheat Pita Minis \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 399 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 14 )
        {
            printf("\nIngredients : Smoked Turkey, Creamy Veggie Hummus, Whole Wheat Bagel, Spinach Leaves, Tomato, Cucumber,Neufchatel, Carrot, Clove, Scallion \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 589 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 15 )
        {
            printf("\nIngredients : Olive Oil, Onion, Red or Green Bell Pepper, Potatoes, Turkey, Eggs, Cream, Salt, Pepper, Parsley, Basil, Cheddar or Mozzarella \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 639 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
   
    else if ( choice == 16 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file.");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Suggest Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Denounce Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name to add: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            lunch();
        }
    }

        }
    else if ( choice == 17 )
        {
            mainmenu();

        }
    else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17)
                    {

						system("cls");
						printf("\n\n\t\tOops! Invalid Choice Entered.\n\n");
						lunch();
                    }
  }

}

void dinner() /// Dinner Menu Screen
{
  int choice;
  int quantity;
  int again;

  printf("\t               ==============================          \n");
  printf("\t                        Dinner Menu   \n");
  printf("\t               ==============================          \n\n");
  printf("\t   [1] Ground Turkey Enchilada Stir-Fry with Couscous  - Rs.609 only \n");
  printf("\t   [2] Chili Chicken with Hominy Hash                  - Rs.459 only \n");
  printf("\t   [3] Chicken Katsu with Ginger Rice                  - Rs.476 only \n");
  printf("\t   [4] Ribbony Shrimp and Pasta Scampi                 - Rs.419 only \n");
  printf("\t   [5] Coconut-Crusted Shrimp w Pineapple-Chili Sauce  - Rs.459 only \n");
  printf("\t   [6] Whole-Wheat Fettuccine with Zucchini Ribbons    - Rs.439 only \n");
  printf("\t   [7] Honey-Soy Grilled Salmon with Edamame           - Rs.536 only \n");
  printf("\t   [8] Thai Curry Veggie Noodles with Chicken          - Rs.409 only \n");
  printf("\t   [9] Sheet Pan Chicken Fajitas                       - Rs.489 only \n");
  printf("\t   [10] Pork Tenderloin with Seasoned Rub              - Rs.499 only \n");
  printf("\t   [11] Spicy Kale and Corn Stuffed Chicken Breasts    - Rs.439 only \n");
  printf("\t   [12] Vietnamese Pork Chops with Ginger Rice         - Rs.519 only \n");
  printf("\t   [13] Chicken Thighs and Couscous with Dill          - Rs.466 only \n");
  printf("\t   [14] Tricolore Penne Pasta with Chicken             - Rs.409 only \n");
  printf("\t   [15] Tricolor Salad Pizzas                          - Rs.469 only \n");
  printf("\t   [16] Bacon and Kimchi Noodle Stir-Fry               - Rs.479 only \n");
  printf("\t   [17] Add New One                     \n");
  printf("\t   [18] Back To Main-Menu               \n");


  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
      if (choice == 1)
	   {
	      printf("\nIngredients : Wheat Couscous, Turkey, Black Pepper, Olive Oil, Butternut Squash, Broccoli, Black Beans, Enchilada Sauce, Salsa, Cilantro, Avocado, Shredded Cheese, Lime Juice \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total = 609 * quantity ;
	      printf("===================================          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
	        {
		       printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      dinner();
               else if (again == 2 )
				  mainmenu();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
			      exit(0);
			   }
       }
}
	else if ( choice == 2)
       {
		  printf("\nIngredients : Chili Powder, Cumin, Kosher Salt, Cinnamon, Lime Zest, Chicken-Thighs, Acorn Squash, Bell Pepper, Extra-Virgin Olive Oil, Lime Juice, Scallions, Cilantro \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 459 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
		  {
		    printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   dinner();
		    else if (again == 2 )
				mainmenu();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("\nIngredients : Flour, Eggs, Chicken Cutlets, Kosher Salt, Pepper, Vegetable Oil, Garlic, Ginger, White Rice, Scallions, Katsu Sauce \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 476 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nIngredients : Kosher Salt, Wheat Spaghetti, Yellow Squash, Zucchini, Shrimp, Black Pepper, Olive Oil, Tomatoes, Garlic, Red Pepper Flakes, Chicken Broth, Chives \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 419 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nIngredients : Shrimp, Coconut, Lime Juice, Black Pepper, Egg Whites, Cilantro, Red Pepper Flakes, Clove Garlic, Pineapple \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 459 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nIngredients : Whole-Wheat Fettuccini, Green Zucchini, Yellow Zucchini, Olive Oil, Cloves Garlic, Chicken Broth, Parmesan, Parsley Leaves, Basil Leaves, Red Pepper Flakes, Black Pepper, Salt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 439 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nIngredients : Cilantro Leaves, Scallions, Vegetable Oil, Grated Ginger, Pepper, Salmon, Lime Juice, Soy Sauce, Honey, Sesame Seeds, Edamame, Lime Wedges \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 536 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nIngredients : Extra-Virgin Olive Oil, Black Pepper, Coconut Milk, Lime Juice, Almond Butter, Red Curry Paste, Carrot, Cabbage, Cucumber, Scallions, Cashews \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 409 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nIngredients : Chili Powder, Kosher Salt, Black Pepper, Baby Bell Peppers, Onion, Extra-Virgin Olive Oil, Chicken Breast, Lime Wedges, Tortillas, Cheese, Hot Sauce, Salsa, Sour Cream \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 489 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nIngredients : Garlic Powder, Oregano, Cumin, Coriander, Salt, Pork, Olive Oil, Garlic \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 499 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nIngredients : Olive Oil, Garlic, Kosher Salt, Corn, Cheese, Chicken Breast, Black Pepper, Chicken Broth, Flour, Lemon Juice \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 439 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nIngredients : Brown Sugar, Soy Sauce, Fish Sauce, Lemongrass, Garlic, Shallot, Pork, Jasmine Rice, Ginger, Mint, Cucumber, Kosher Salt, Pepper \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 519 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 13 )
        {
            printf("\nIngredients : Unsalted Butter, Kosher Salt, Couscous, Chicken Thighs, Tomatoes, Lemon Juice, Olive Oil, Oregano, Black Pepper, Persian Cucumber, Greek Yogurt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 466 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 14 )
        {
            printf("\nIngredients : Whole-Wheat Penne, Olive Oil, Garlic, Tomatoes, Chicken Breast, Arugula Leaves, Chicken Broth, Salt, Black Pepper, Basil Leaves, Parmesan \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 409 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 15 )
        {
            printf("\nIngredients : Parmesan Cheese, Mozzarella Cheese, Pizza Dough, Cornmeal, Extra-Virgin Olive Oil, Ricotta Cheese, Pepper, Radicchio, Endive, Tomatoes, Arugula, Balsamic Vinegar \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 469 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 16 )
        {
            printf("\nIngredients : Kosher Salt, Broccolini, Kimchi, Sesame Oil, Brown Sugar, Garlic, Red Pepper Flakes, Vegetable Oil, Bacon, Onion, Chinese Egg Noodles, Sesame Seeds \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 479 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry, Invalid Decision Entered!!\n\n");
					  exit(0);
					}
            }
        }
    
     else if ( choice == 17 )
       {
           FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file.");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Suggest Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Denounce Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name to add: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a inteRs.ediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            dinner();
        }
    }

       }
     else if ( choice == 18 )
        {
            mainmenu();
        }
     else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18)
            {
                system("cls");
                printf("\n\n\t\tOops! Invalid Choice Entered.\n\n");
                dinner();

            }
  }

}

void exit(back)  /// Exit Screen
{
  printf("\n\n\t=============== F.O.S.==================          ");
  printf("   \n         Thanks for visiting our restaurant.\n\n");
  printf("             We hope to see you soon!  \n");
  printf("\t====================================  \n");
  getch();
  exit(0);
}
