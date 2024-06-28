#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int min, int max);

int main() {
    int a, b;
    char name[10];

    printf("What is your name?\n");
    printf("> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Rolling dice...\n");

    srand((unsigned int)time(NULL));
    a = GetRandom(1, 6);
    b = GetRandom(1, 6);

    printf("Dice 1: %d\n", a);
    printf("Dice 2: %d\n", b);
    printf("Total value : %d\n", a+b);
    
    if (a + b > 7) {
        printf("%s won\n", name);
    } else {
        printf("%s lost\n", name);
    }
}

int GetRandom(int min, int max) {
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
