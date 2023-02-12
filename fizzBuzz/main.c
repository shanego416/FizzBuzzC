//
//  main.c
//  fizzBuzz
//
//  Created by shanego416 on 2022-02-21.

/*Create a program that will take a user's input, and print every number before n replacing numbers divisible
by 3 with the word Fizz, numbers divisible by 5 with the word Buzz and numbers divisible by both 3 and 5 with
FizzBuzz*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1, index;
    printf("Enter a positive number >");
    scanf("%d", &n);
    do
    {
        if (index % 3 ==0 && index % 5 == 0)
            printf("Fizz Buzz\n");
        else if (index % 3 == 0)
            printf("Fizz\n");
        else if (index % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", index);
        index = index + 1;
    } while (index <= n);

    return 0;
}
