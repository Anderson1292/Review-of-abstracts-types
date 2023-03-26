#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define SEMALUNO -1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct student{
	char name[81];
	float ira;
}Student;

void initialize(int n,Student students[]){
	int i;
	for(i = 0;i < n;i++){
		students[i].ira = SEMALUNO;
	}
}
void update(int n,Student students[],int i){
	float ira;
	if(n < 0 || n >= 100){
		printf("Index out of bound!\n");
		exit(1);
	}
	printf("Enter the student's name: ");
	scanf("%[^\n]",students[i].ira);
	
	while(1){
		printf("Enter the IRA's students: ");
		scanf("%f",&ira);
		if(ira < 0 || ira > 100){
			printf("The IRA belongs to the range[0.0 to 100.0]!\n");
		}
		else break;
	}
	students[i].ira = ira;
}
void printOut(int n,Student students[],int i){
	if(n < 0 || n >= 100){
		printf("Index out of bounds!");
		exit(1);
	}
	if(students[i].ira != SEMALUNO){
		printf("Name: %s\n",students[i].name);
		printf("IRA: %.2f\n",&students[i].ira);
	}
}
void printAll(int n,Student students[]){
	int i;
	printf("List of students:\n");
	for(i = 0;i < n;i++){
		printOut(n,students,i);
	}
}
void dell(int n, Student students[],int i){
	
}
int main(int argc, char *argv[]) {
	Student students[MAX];
	int i;
	initialize(MAX,students);
	for(i = 0;i < MAX;i++){
		update(MAX,students,i);
	}
	printAll(MAX,students);
	return 0;
}
