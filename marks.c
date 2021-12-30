# include <stdio.h>
int main() {
    int marks1, marks2, marks3, marks4, marks5;
    
    printf("Enter marks1 : ");
    scanf("%d", &marks1);

    printf("Enter marks2 : ");
    scanf("%d", &marks2);

    printf("Enter marks3 : ");
    scanf("%d", &marks3);

    printf("Enter marks4 : ");
    scanf("%d", &marks4);

    printf("Enter marks5 : ");
    scanf("%d", &marks5);

    int total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
    
    printf("Total Marks scored = %d\n", total_marks );
    printf("Average Marks scored = %d\n", total_marks/5 );

    return 0;
}
