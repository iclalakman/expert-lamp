#include <stdio.h>
int main() {
    int speed;

    printf("Enter the speed: ");
    scanf("%d",&speed);

    if (speed>90)
        printf("Very fast");
    else if (speed>70)
        printf("Fast");
    else if (speed>50)
        printf("Medium");
    else if (speed>30)
        printf("Slow");
    else
        printf("Very slow");

    return 0;
}

