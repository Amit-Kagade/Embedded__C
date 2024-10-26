/*Define a structure Course with members coursename (string of 100 char) and credits(integers).
Define another structure Student with name (string of 50 characters), age (integer) and
 an array of course structure.
 Write a function to print the details of a stu including all the courses they are wnrolled in


Author Name : Amit Santosh Kagade*/

#include <stdio.h>

// Define the Course structure
struct Course {
    char courseName[100];
    int credits;
};

// Define the Student structure
struct Student {
    char name[50];
    int age;
    struct Course courses[5]; // Array of 5 courses (can be adjusted as needed)
    int courseCount;          // To track the number of courses a student is enrolled in
};

// Function to print student details and courses
void printStudentDetails(struct Student student) {
    printf("\nStudent Name: %s", student.name);
    printf("Age: %d\n", student.age);
    
    printf("Courses Enrolled: \n");
    for (int i = 0; i < student.courseCount; i++) {
        printf("  Course %d: %s  Credits: %d\n", i + 1, student.courses[i].courseName, student.courses[i].credits);
    }
}

int main() {
    // Create a student
    struct Student student;

    // Input student details
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter student's age: ");
    scanf("%d", &student.age);
    
    // Input number of courses
    printf("Enter number of courses the student is enrolled in: ");
    scanf("%d", &student.courseCount);
    
    // Input details for each course
    for (int i = 0; i < student.courseCount; i++) {
        printf("Enter name of course %d: ", i + 1);
        getchar(); // Consume newline character left by scanf
        fgets(student.courses[i].courseName, sizeof(student.courses[i].courseName), stdin);
        
        printf("Enter credits for course %d: ", i + 1);
        scanf("%d", &student.courses[i].credits);
    }

    // Print student details
    printStudentDetails(student);

    return 0;
}
