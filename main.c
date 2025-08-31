#include <stdio.h>

double calculateArea(double diameter){

    double ray = diameter / 2;
    double partialArea = 1;
    double expoent = 2;
    double pi = 3.14;
    double area;

    for (int i = 0; i < expoent; i++){
        partialArea *= ray;
    }

    area = partialArea * pi;

    printf("The value of the circle area is %.2f \n", area);
    printf("\n");

    return area;
}

double calculatePerimeter(double diameter){

    double pi = 3.14;
    double perimeter = diameter * pi;
    
    printf("The value of the circle perimeter is %.2f \n", perimeter);
    printf("\n");

    return perimeter;
}

int main(){

    int diameter; int quit;

    while (1){

        printf("---- WELCOME TO THE AREA/PERIMTER CIRCLE CALCULATOR ---- \n");
        printf("\n");

        printf("Type the value of the circle diameter: ");
        scanf("%d", &diameter);
        printf("\n");

        calculateArea(diameter);
        calculatePerimeter(diameter);

        printf("Do you wish to quit? [1 -> yes | 2 -> no]: ");
        scanf("%d", &quit);
        printf("\n");

        if (quit == 1){
            break;
        }

        else if (quit == 2){
            continue;
        }

        else {
            printf("Invalid Entry! Try again! \n");
            continue;
        }

    }

}