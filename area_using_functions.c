#include <stdio.h>
#include <Math.h>

// AREA OF RECTANGLE:
float areaofrectangle(float length, float breadth){
    return length*breadth;
}

// AREA OF SQUARE:
float areaofsquare(float side){
    return side*side;

}
// AREA OF CIRCLE: 
 float areaofcircle(float radius){
    return 3.14*radius*radius;
    }


int main(int argc, char const *argv[]){

    // FOR SQUARE:
    float side;
    printf("ENTER THE SIDE: ");
    scanf("%f",&side);
    float ar = areaofsquare(side);
    printf("\tTHE AREA OF SQUARE IS %f\n",ar);

    // FOR CIRCLE: 
    float radius;
    printf("ENTER THE RADIUS: ");
    scanf("%f",&radius);
    float rad = areaofcircle(radius);
    printf("\tTHE AREA OF CIRCLE IS %f\n",rad);


    // FOR RECTANGLE:
    float length,breadth;
    printf("ENTER LENGTH OF RECTANGLE: ");
    scanf("%f",&length);
    printf("ENTER THE BREADTH OF RECTANGLE: ");
    scanf("%f",&breadth);
    float rect = areaofrectangle(length,breadth);
    printf("\tTHE AREA OF RECTANGLE IS %f\n",rect);
    return 0;
}
