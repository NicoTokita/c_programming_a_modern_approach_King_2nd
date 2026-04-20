#include <stdio.h>

int largest(int n, int a[n]);
float average(int n, int a[n]);
int num_positives(int n, int a[n]);
void clear_input_buffer(void);
int main(void)
{
    int n;
    printf("How many numbers do you have?: ");
    scanf("%d", &n);
    int numbers[n];

    printf("Enter the numbers: ");
    clear_input_buffer();
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(;;)
    {   
        int command;
        printf("Your numbers: {");
        for(int i = 0; i < n; i++)
        {
            printf("%d ", numbers[i]);
        }
        printf("}\n");
        printf("1 => Largest || 2 => Average || 3 => number of positive numbers || 0 => Exit\n");
        clear_input_buffer();
        scanf("%d", &command);
        switch (command)
        {
            case 1:
                printf("The largest number is: %d\n", largest(n, numbers));
                break;
            case 2:
                printf("The average of them is: %g.\n", average(n, numbers));
                break;
            case 3:
                printf("There is/are %d positive number(s)\n", num_positives(n, numbers));
                break;
            case 0:
                printf("Thank you for using this app. Exiting....\n");
                return 0;
            default:
                printf("Chose a correct option from the menu.\n");
                break;
        }
    }
}

void clear_input_buffer(void)
{
    int c;
    while((c = getchar()) != '\n' && c != EOF)
    continue;
}
int largest(int n, int a[n])
{
    int largest = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}
float average(int n, int a[n])
{
    int sum = 0;
    for(int i =0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / (float) n;
}
int num_positives(int n, int a[n])
{
    int positives = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] >= 0)
        {
            positives++;
        }
    }
    return positives;
}