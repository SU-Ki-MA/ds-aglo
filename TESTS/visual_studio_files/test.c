// includes //

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// declartion of structure //
struct node
{
  int data;
  struct node *address;
} *head = NULL;
typedef struct node NODE;

// declaration of functions //
void create();
void display();
void modify();
void del();
void clear();
void insert();
int count();
void reverse();

// the main block //
void main()
{
  int ch;
  do
  {
    system("cls");

    printf("/*****/ MAIN MENU /*****/ \n");
    printf("\n 1 . Creation");
    printf("\n 2 . Modification");
    printf("\n 3 . Deletion");
    printf("\n 4 . Display");
    printf("\n 5 . Insertion");
    printf("\n 6 . Count");
    printf("\n 7 . Exit");
    printf("\n\n ENTER YOUR CHOICE :\t");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      create();
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 2:
      modify();
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 3:
      del();
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 4:
      display();
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 5:
      insert();
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 6:
      printf("\n\n The Linked list contains %d no. of elements", count());
      printf("\n\n click any button to continue...");
      getch();
      break;
    case 7:
      printf("\n Bye");
      printf("\n\n click any button to clear the list...");
      getch();
      break;
    default:
      printf("\n Invalid choice. please run the program again.");
      clear();
      exit(0);
      break;
    }
  } while (ch < 7);

  clear();
  exit(0);
}
// end of the main block //

// FUNCTIONS //

// Create //
void create()
{
  if (head != NULL)
  {
    system("cls");
    printf("\n There is already a linked list created...");
    display();
    printf("\n Delete the previous linked list in order to create a new one...");
  }
  else
  {
    system("cls");
    NODE *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->address = NULL;
    int d = 0;
    printf("\n Enter the no. in the head : ");
    scanf("%d", &d);
    temp->data = d;
    head = temp;
    display();
    printf("\n Do you wish to insert some elements to this list ?");
    printf("\n 1 . YES!!");
    printf("\n 2 . NO!");
    printf("\n\n Enter your choice : ");
    int f = 0;
    scanf("%d", &f);
    if (f == 1)
    {
      printf("\n How many more elements do you want to add to this list? : ");
      int no = 0;
      scanf("%d", &no);
      while (no > 5 || no < 1)
      {
        printf("\n Please enter a no. withing 1-5 : ");
        scanf("%d", &no);
      }
      for (int i = 0; i < no; i++)
      {
        insert();
      }
    }
    display();
  }
}

// Insert //
void insert()
{
  if (head == NULL)
  {
    printf("\n Please create a linked list before trying to insert...");
  }
  else
  {
    system("cls");
    display();
    NODE *temp, *t, *prev;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->address = NULL;
    int ch, d, pos;
    printf("\n Enter the no. you want in your new node : ");
    scanf("%d", &d);
    temp->data = d;
    printf("\n\n 1. Insert at beginning");
    printf("\n 2. Insert at any middle position");
    printf("\n 3. Insert at end");
    printf("\n\n ENTER YOUR CHOICE :\t");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      temp->address = head;
      head = temp;
      break;
    case 2:
      t = head;
      printf("\n ENTER THE POSITION TO INSERT :\t");
      scanf("%d", &pos);
      while (pos >= count() || pos <= 1)
      {
        printf("\n Please enter a no inbetween 1 & %d :", count());
        scanf("%d", &pos);
      }
      for (int j = 1; j < pos; j++)
      {
        prev = t;
        t = t->address;
      }
      temp->address = prev->address;
      prev->address = temp;
      break;
    case 3:
      t = head;
      while (t->address != NULL)
      {
        t = t->address;
      }
      t->address = temp;
      break;
    default:
      free(temp);
      printf("\n Invalid choice. Please try again");
      printf("\n Click any key to continue...");
      getch();
      insert();
      break;
    }
    display();
  }
}

// Delete //
void del()
{
  if (head == NULL)
  {
    printf("\n There is no linked list there to delete.");
  }
  else
  {
    system("cls");
    display();
    NODE *t, *prev;
    int pos, ch;
    printf("\n\n 1 . Delete at beginning");
    printf("\n 2 . Delete any mid position");
    printf("\n 3 . Delete at end");
    printf("\n 4 . Delete the whole linked list");
    printf("\n\n ENTER YOUR CHOICE :\t");
    scanf("%d", &ch);
    t = head;
    switch (ch)
    {
    case 1:
      head = head->address;
      free(t);
      break;
    case 2:
      printf("\n ENTER THE POSITION TO INSERT :\t");
      scanf("%d", &pos);
      while (pos >= count() || pos <= 1)
      {
        printf("\n Please enter a no inbetween 1 & %d :", count());
        scanf("%d", &pos);
      }
      for (int j = 1; j < pos; j++)
      {
        prev = t;
        t = t->address;
      }
      prev->address = t->address;
      free(t);
      break;
    case 3:
      while (t->address != NULL)
      {
        prev = t;
        t = t->address;
      }
      prev->address = NULL;
      free(t);
      break;
    case 4:
      clear();
      break;
    default:
      printf("\n Invalid choice. Please try again");
      printf("\n Click any key to continue...");
      getch();
      del();
      break;
    }
    system("cls");
    display();
  }
}

// Clear //
void clear()
{
  if (head == NULL)
  {
    printf("\n No available linked list to delete");
  }
  else
  {
    NODE *t;
    while (head != NULL)
    {
      t = head;
      head = t->address;
      free(t);
    }
    printf("\n The whole linked list is deleted");
  }
}

// Display //
void display()
{
  if (head = NULL)
  {
    printf("There is no linked list created yet");
  }
  else
  {
    NODE *t;
    t = head;
    printf("\n No. of elements in list : %d", count());
    while (t != NULL)
    {
      printf("\n %d - %p", t->data, (void *)t->address);
    }
  }
}

// Counting //
int count()
{
  if (head == NULL)
  {
    return 0;
  }
  else
  {
    NODE *t;
    t = head;
    int n = 0;
    while (t != NULL)
    {
      t = t->address;
      n = n + 1;
    }
    return n;
  }
}

// Reverse //
void reverse()
{
  printf("\n\n Under Maintenance.");
}

// Modify //
void modify()
{
  if (head == NULL)
  {
    system("cls");
    printf("\n No linked list there to modify");
  }
  else
  {
    system("cls");
    display();
    printf("\n\n 1 . Modify value in a specific position");
    printf("\n 2 . Modify value in all the nodes with a specific value");
    int ch = 0;
    printf("\n\n ENTER YOUR CHOICE :\t");
    scanf("%d", &ch);
    int pos = 0, old, new;
    NODE *t, *prev;
    t = head;
    switch (ch)
    {
    case 1:
      printf("\n ENTER THE POSITION TO MODIFY :\t");
      scanf("%d", &pos);
      while (pos >= count() || pos <= 1)
      {
        printf("\n Please enter a no inbetween 1 & %d :", count());
        scanf("%d", &pos);
      }
      for (int j = 1; j < pos; j++)
      {
        t = t->address;
      }
      int v = 0;
      printf("ENTER THE VALUE : ");
      scanf("%d", &v);
      t->data = v;
      break;
    case 2:
      t = head;
      printf("\n Enter the no to be modifided :\t");
      scanf("%d", &old);
      printf("\n Enter the value you want :\t");
      scanf("%d", &new);
      while (t != NULL)
      {
        if (t->data == old)
        {
          t->data = new;
          t = t->address;
        }
        else
        {
          t = t->address;
        }
      }
    default:
      printf("Invalid input");
    }
    display();
  }
}
