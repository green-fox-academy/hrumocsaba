#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct point {
    float x;
    float y;
} point_t;

point_t create_point (float x, float y){
    point_t point = {x,y};
    return point;
}

float distance (point_t* point1, point_t* point2){
    //printf("%f", point1->x);
    float calc_distance = sqrtf((point1->y - point2->y)*(point1->y - point2->y) + (point1->x - point2->x)*(point1->x - point2->x));

    return calc_distance;
}


int main()
{
    point_t point1 = create_point(3,1);
    point_t point2 = create_point(10,5.5);
    float dist = distance(&point1, &point2);
    printf("%.2f", dist);

	return 0;
}