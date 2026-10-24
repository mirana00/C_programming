#include <stdio.h>
#include <stdbool.h>
int main() {
    //I am re starting C on my own. cus the first time i learned
    // it was in a course but i didn't study properly then i suffered a lot in other courses.
    //printf("Hello, World!\n");
    //printf("I am back");

    /*int age = 22;
    printf("My age is %d years old.\n", age);
    float cg = 2.95;
    printf("My cg is %.2f \n", cg);
   double pi = 3.14159265358979323846;
    printf("the value os pi is %.20lf\n", pi);
   char block = 'C';
    printf("Block is %c\n", block);
    char courses[] = {'A', 'B', 'C', 'D', 'E'};
    printf("my courses are: %s, %s, %s, %s, %s\n", courses[0], courses[1], courses[2], courses[3], courses[4]);
     bool isStudent = true;
    printf("I am a student: %s\n", isStudent ? "true" : "false");
*/

int age = 0;
float gpa = 0.00;
char grade = '\0';
char name[30] = "";

printf("Enter your age: ");
scanf("%d", &age);


printf("Enter your gpa: ");
scanf("%f", &gpa);


printf("Enter your grade: ");
scanf(" %c", &grade);


printf("Enter your name: ");
scanf("%29s", name);


printf("age is %d\n", age);
printf("grade is %c\n", grade);
printf("gpa is %f\n", gpa);
printf("name is %s\n", name);
    return 0;
}