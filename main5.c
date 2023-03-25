#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct point{
	float x;
	float y;
}Point;
void capture(Point *pp){
	printf("Enter the coordinates of the points(x,y):\n");
	scanf("%f %f",&pp->x,&pp->y);
}
float distance(Point *p1,Point *p2){
	return sqrt((p1->x - p2->x)*(p1->x - p2->x)+(p1->y - p2->y)*(p1->y - p2->y));
}
int main(int argc, char *argv[]) {
	
	Point p1,p2;
	capture(&p1);
	capture(&p2);
	printf("Distance between points: %.2f\n",distance(&p1,&p2));
	return 0;
}
