#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int front = -1;
int rare = -1;
int arr[5];
int size = 5;
int data;
void insert();
void delete();
void display();
int main()
{

    while (1)
    {
        system("cls");
        int choice;
        printf("\t\t......QUEUE......\n");
        printf("\t\t1. too insert data: \n");
        printf("\t\t2. too delete data: \n");
        printf("\t\t3. too display: \n");
        printf("\t\t4. too exit: \n");
        printf("\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\tWrong choice!!!");
            break;
        }
    }
    return 0;
}
void insert()
{
    if (rare == size - 1)
    {
        printf("Queue OVERFLOW!!!\n");
        getch();
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter data too insert: ");
        scanf("%d", &data);
        rare = rare + 1;
        arr[rare] = data;
        printf("\tData inserted...\n");
        getch();
    }
}
void delete()
{
    if (front == -1 || front > rare)
    {
        printf("Queue UNDERFLOW!!!\n");
        getch();
    }
    else
    {
        printf("\t%d is deleted...\n", arr[front]);
        front++;
        getch();
    }
}
void display()
{
    if (front == -1)
    {
        printf("QUEUE is empty!!!\n");
        getch();
    }
    else
    {
        for (int i = front; i <= rare; i++)
        {
            printf("%d  ", arr[i]);
        }
        getch();
        printf("\n");
    }
}