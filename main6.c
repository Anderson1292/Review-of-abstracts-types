#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct point{
	float x;
	float y;
}Point;

typedef struct circle{
	Point p;
	float radius;
}Circle;

void capturePoint(Point *p){
	printf("Enter the coordinates of the points(x,y):\n");
	scanf("%f %f",&p->x,&p->y);
}

void captureCircle(Circle *c){
	printf("Enter the radius of the circle:\n");
	scanf("%f",&c->radius);
}

float distance(Point *p1,Point *p2){
	return sqrt((p1->x - p2->x)*(p1->x - p2->x)+(p1->y - p2->y)*(p1->y - p2->y));
}

int inside(Circle *c,Point *p){
	float d = distance(&c->p,p);
	return (d < c->radius);
}

int main(int argc, char *argv[]) {
	Point p; Circle c;
	capturePoint(&p); captureCircle(&c);
	if(inside(&c,&p)){
		printf("The point is inside the circle.");
	} else {
		printf("The point is not inside the circle.");
	}
	return 0;
}
