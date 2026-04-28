#include <stdio.h>
#include <ctype.h>
// #include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part;

part inventory[MAX_PARTS];

int num_parts = 0; // number of parts currently stored

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void clear_input_buffer(void);
int read_line(char location[], int length);

int main(void)
{
    char code;
    for(;;)
    {
        printf("Operations: Add new part - i, Search part - s, update quantity - u,\nPrint inventory - p, quit - q");
        printf("Enter Operation Code: \n");
        printf("Inventory: %d/%d\n", num_parts, MAX_PARTS);
        printf("Enter command: ");
        scanf(" %c", &code);
        clear_input_buffer();
        

        switch (code)
        {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                printf("Thank you for using. Terminating >_< ....");
                return 0;
            default:
                printf("Invalid code.\n");
        }
    }
}



int find_part(int number)
{
    for(int i = 0; i < num_parts; i++)
    {
        if(number == inventory[i].number)
        {
            return i;
        }
    }
    return (int) -1;
}

void insert(void)
{
    int part_number;
    if(num_parts >= MAX_PARTS)
    {
        printf("Inventory full.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);
    if(find_part(part_number) >= 0)
    {
        printf("Part number already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;

    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);

    printf("Enter quantity on-hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;    
    
}

void search(void)
{
    int n;
    printf("Enter part number: ");
    scanf("%d", &n);
    if(find_part(n) == -1)
    {
        printf("Part does not exist in the inventory.\n");
        return;
    }

    printf("Part number: %d\nPart name: %s\nOn-hand %d\n", n, inventory[find_part(n)].name, inventory[find_part(n)].on_hand);

}

void update(void)
{   
    int n;
    int change;
    printf("Enter part number: ");
    scanf("%d", &n);
    if(find_part(n) == -1)
    {
        printf("This part does not exist.\n");
        return;
    }
    printf("Enter the change in quantity: ");
    scanf("%d", &change);
    inventory[find_part(n)].on_hand += change;
    printf("Quantity for part number %d(%s) has been updated from %d to %d\n", n, inventory[find_part(n)].name, inventory[find_part(n)].on_hand - change, inventory[find_part(n)].on_hand);
}

void print(void)
{
    if(num_parts == 0)
    {
        printf("There is nothing to show.\n");
        return;
    }

    for(int i = 0; i < num_parts; i++)
    {
        printf("Part Number: %d\n", inventory[i].number);
        printf("Part Name: %s\n", inventory[i].name);
        printf("Parts on-hand: %d\n", inventory[i].on_hand);
    }

}

void clear_input_buffer(void)
{
    while(getchar() != '\n')
    {
        continue;
    }
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while(isspace(ch = getchar()))
    {
        continue;
    }

    while(ch != '\n' && ch != EOF)
    {
        if(i < n)
        {
            str[i] = ch;
            i++;
        }
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}