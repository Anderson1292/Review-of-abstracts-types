#include <stdio.h>
#include <stdlib.h>
#define SEMALUNO -1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student{
	char name[81];
	float ira;
} Student;

void initialize(int n, Student **students){
	int i;
	for(i = 0;i < n;i++){
		students[i] = NULL;
	}
}
void printOut(int n, Student **students,int i){
	if(n < 0 || n >= 100){
		printf("Index out of bound!");
		exit(1);
	}
	if(students[i] != NULL){
		printf("Name: %s\n",students[i]->name);
		printf("IRA: %.2f\n",students[i]->ira);
	}
}
void printAll(int n,Student **students){
	int i;
	printf("List of students:\n");
	for(i = 0; i < n;i++){
		printOut(n,students,i);
	}
}
void update(int n,Student **students,int i){
	float ira;
	if(n < 0 || n >= 100){
		printf("Index out of bound!\n");
		exit(1);
	}
	if(students[i] == NULL){
		students[i] = (Student*)malloc(sizeof(Student));
		if(students[i] == NULL){
			printf("Insufficient memory!\n");
			exit(1);
		}
	}
	printf("Enter the student's name: ");
	scanf("%[^\n]",students[i]->name);
	
	while(1){
		printf("Enter the student's IRA: ");
		scanf("%f",&ira);
		if(ira < 0 || ira > 100){
			printf("The IRA belongs to the range [0.0 to 100.0]\n");
		}
		else break;
	}
	students[i]->ira = ira;
}
void delet(int n, Student **students,int i){
	if(n < 0 || n >= 100){
		printf("Index out of bound!\n");
		exit(1);
	}
	if(students[i] != NULL){
		free(students[i]);
		students[i] = NULL;
	}
}
int main(int argc, char *argv[]) {
	int i, n;
	Student** students;
	
	printf("Enter the number of students: ");
	scanf("%d",&n);
	
	students = (Student**)malloc(n*sizeof(Student*));
	if(students == NULL){
		printf("Insufficient memory!\n");
		exit(1);
	}
	
	initialize(n,students);
	for(i = 0;i < n;i++){
		update(n,students,i);
	}
	printAll(n,students);
	for(i = 0;i < n;i++){
		delet(n,students,i);
	}
	free(students);
	return 0;
}
