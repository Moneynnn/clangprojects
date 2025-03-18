#include <stdio.h>

void myaddition ( ) {
    int x = 0;
    int y = 0;
    printf("Enter the first digit. \n");
    scanf("%d", &x);
    printf("Enter the second digit. \n");
    scanf("%d", &y);
    int sum = x + y;
    printf("The total is %d.\n", sum);
    int reply = 0;
    printf("Do you want to continue addition.\n");
    printf("1 for YES\n");
    printf("2 for NO\n");
    scanf("%d", &reply);
    if(reply == 1) {
        myaddition();
    }else{
        printf("Thanks for visit.\n");
    }
}
void mysubstraction ( ) {
    int x = 0;
    int y = 0;
    printf("Enter the first digit. \n");
    scanf("%d", &x);
    printf("Enter the second digit. \n");
    scanf("%d", &y);
    int sum = x - y;
    printf("The total is %d.\n", sum);
    int reply = 0;
    printf("Do you want to continue substraction.\n");
    printf("1 for YES\n");
    printf("2 for NO\n");
    scanf("%d", &reply);
    if(reply == 1) {
        mysubstraction();
    }else{
        printf("Thanks for visit.\n");
    }
}
void mydivision ( ) {
    int x = 0;
    int y = 0;
    printf("Enter the first digit. \n");
    scanf("%d", &x);
    printf("Enter the second digit. \n");
    scanf("%d", &y);
    int sum = x / y;
    printf("The division is %d.\n", sum);
    int reply = 0;
    printf("Do you want to continue division.\n");
    printf("1 for YES\n");
    printf("2 for NO\n");
    scanf("%d", &reply);
    if(reply == 1) {
        mydivision();
    }else{
        printf("Thanks for visit.\n");
    }
}
void mymultiplication ( ) {
    int x = 0;
    int y = 0;
    printf("Enter the first digit. \n");
    scanf("%d", &x);
    printf("Enter the second digit. \n");
    scanf("%d", &y);
    int sum = x * y;
    printf("The total is %d.\n", sum);
    int reply = 0;
    printf("Do you want to continue multiplication.\n");
    printf("1 for YES\n");
    printf("2 for NO\n");
    scanf("%d", &reply);
    if(reply == 1) {
        mymultiplication();
    }else{
        printf("Thanks for visit.\n");
    }
}
void mysquareroot ( ) {
    int x = 0;
    printf("Enter the digit. \n");
    scanf("%d", &x);
    int sum = x * x;
    printf("The squareroot is %d.\n", sum);
    int reply = 0;
    printf("Do you want to continue squareroot.\n");
    printf("1 for YES\n");
    printf("2 for NO\n");
    scanf("%d", &reply);
    if(reply == 1) {
        mysquareroot();
    }else{
        printf("Thanks for visit.\n");
    }
}
void myintro( ) {
    printf("What you want to do?\n");
    int nn = 0;
    printf("1. Addition   ");
    printf("2. Substraction   ");
    printf("3. Division\n");
    printf("4. Multiplication   ");
    printf("5. Squareroot\n");
    printf("6. For exit\n");
    printf("Write reply only in digits!\n");
    scanf("%d", &nn);
    if (nn != 0 && nn <7) {
    switch (nn)
    {
    case 1:
        myaddition();
        break;
    case 2:
        mysubstraction();
        break;
    case 3:
        mydivision();
        break;
    case 4:
        mymultiplication();
        break;
    case 5:
        mysquareroot();
        break;
    case 6:
        printf("Thanks for visit.\n");
        break;
    }
    } else {
        printf("Enter a valid input.\n");
        myintro();
    }
}
int main(){
    printf("Welcome to demo calculator.\n");
    myintro();
    return 0;
}
