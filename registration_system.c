#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct student{
	char name[81];
	int mat;
	char address[121];
	char phone[21];
} Student;

void initialize(int n, Student **student){
	int i;
	for(i = 0;i < n;i++){
		student[i] = NULL;
	}
}
void fillList(int n, Student **student,int i){
	
	if(i < 0 || i >= n){
		printf("Index out of bound\n");
		exit(1);
	}
	if(student[i] == NULL){
		student[i] = (Student*)malloc(sizeof(Student));
		
		if(student[i] == NULL){
			printf("Memory Insufficient!");
			exit(1);
		}
		
		printf("Enter the student's name: ");
		scanf("%[^\n]",student[i]->name);
		printf("Enter the student's enrollment: ");
		scanf("%d",student[i]->mat);
		printf("Provide the student's address: ");
		scanf("%[^\n]",student[i]->address);
		printf("Enter the student's phone number: ");
		scanf("%[^\n]",student[i]->phone);
	}
}
void printOut(int n, Student **student, int i){
	
	if(i < 0 || i >= n){
		printf("Index out of bound\n");
		exit(1);
	}
	if(student[i] != NULL){
		printf("Name: %s\n",student[i]->name);
		printf("Enrollment: %d\n",student[i]->mat);
		printf("Address: %s\n",student[i]->address);
		printf("Phone number: %s\n",student[i]->phone);
	}
}
void printAll(int n,Student **student){
	int i;
	for(i = 0;i < n;i++){
		printOut(n,student,i);
	}
}
void dell(int n, Student **student,int i){
	if(i < 0 || i >= n){
		printf("Index out of bound!");
		exit(1);
	}
	if(student[i] != NULL){
		free(student[i]);
		student[i] = NULL;
	}
}
int main(int argc, char *argv[]) {
	int n, i;
	
	printf("Enter the number of student: ");
	scanf("%d",&n);
	
	Student **student = (Student**)malloc(n*sizeof(Student));
	if(student == NULL){
		printf("Memory Insufficient!\n");
		exit(1);
	}
	initialize(n,student);
	for(i = 0;i < n;i++){
		fillList(n,student,i);
	}
	printAll(n,student);
	return 0;
}
