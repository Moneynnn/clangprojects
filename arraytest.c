#include <stdio.h>

int main() {
    int num;
    printf("How many numbers you want to put in storage? \n");
    scanf("%d", &num);
    int value[num];
    int i;
    int f = 1;
    for(i = 0; i < num; i++) {
        printf("Enter the %d number.\n", f);
        f += 1;
        scanf("%d", &value[i]);
    }
    int j;
    for(j = 0; j < num; j++) {
        printf("%d ", value[j]);
    }
    return 0;
}