#include "seminar_3.h"

void ex_1a() {
    printf("\nExecuting exercise %s...\n", "1a");

    int array[MAX_COLUMNS];
    init_array(array);
    fill_array(array);
    print_array(array);
}

void ex_1b() {
    printf("\nExecuting exercise %s...\n", "1b");

    int matrix[MAX_ROWS][MAX_COLUMNS];
    init_matrix(matrix);
    fill_matrix(matrix);
    print_matrix(matrix);
}

void ex_1c() {
    printf("\nExecuting exercise %s...\n", "1c");

    int* array = create_dyn_array(MAX_COLUMNS);
    fill_dyn_array(array, MAX_COLUMNS);
    print_dyn_array(array, MAX_COLUMNS);
    free_dyn_array(array);
}

void ex_1d() {
    printf("\nExecuting exercise %s...\n", "1d");

    int** matrix = create_dyn_matrix(MAX_ROWS, MAX_COLUMNS);
    fill_dyn_matrix(matrix, MAX_ROWS, MAX_COLUMNS);
    print_dyn_matrix(matrix, MAX_ROWS, MAX_COLUMNS);
    free_dyn_matrix(matrix, MAX_ROWS);
}

void ex_2a() {
    printf("\nExecuting exercise %s...\n", "2a");

    FILE* fd = fopen("resources/students.txt", "r");
    if (fd == NULL){
        printf("File not found!\n");
    }
    else{
        Student* students = NULL;
        int number_of_students = 0;
        students = read_students(fd, &number_of_students);
        printf("The number of enrolled students is %d\n", number_of_students);
        if (students != NULL) {
            print_students(students, number_of_students);
            free(students);
        }
        fclose(fd);
    }
}

void ex_2b() {
    printf("\nExecuting exercise %s...\n", "2b");

    FILE* fd = fopen("resources/courses.txt", "r");
    if (fd == NULL){
        printf("File not found!\n");

    } else {
        Course* courses = NULL;
        int num_of_courses = 0;
        courses = read_courses(fd, &num_of_courses);
        if (courses != NULL) {
            print_courses(courses, num_of_courses);
            free_courses(courses, num_of_courses);
        }

        fclose(fd);
    }
}

void ex_3() {
    printf("\nExecuting exercise %s...\n", "3");

    FILE *f_students = fopen("resources/students.txt", "r");
    if( f_students == NULL ){
        printf("File not found! (students.txt)\n");
        return;
    }
    FILE *f_books = fopen("resources/books.txt", "r" );
    if(f_books == NULL){
        printf("File not found! (books.txt)\n");
        return;
    }

    // Read first the students
    int num_of_students = 0;
    Student* students = read_students(f_students, &num_of_students);
    printf("A total of %d students read:\n", num_of_students);
    print_students(students, num_of_students);

    // Read second the books
    int num_of_books = 0;
    Book* books = read_books(f_books, students, num_of_students, &num_of_books);
    printf("\nA total of %d books read:\n", num_of_books);
    print_books(books, num_of_books);
    printf("\nThe total cost owners has spend in books:\n");
    print_owner_costs(books, num_of_books);

    // Free the dynamic memory
    free(books);
    free(students);
}

void ex_4a() {
    printf("\nExecuting exercise %s...\n", "4a");

    FILE *f_clients = fopen("resources/clients.txt", "r");
    if( f_clients == NULL ){
        printf("File not found! (clients.txt)\n");
        return;
    }

    char command[MAX_NAME_LENGTH];
    char name[MAX_NAME_LENGTH];
    char surname[MAX_NAME_LENGTH];
    QueueArray *queue = make_queue_array();

    while(fscanf(f_clients, "%s", command) > 0){
        if(strcmp(command, "new") == 0){
            if(fscanf(f_clients, "%s %s", name, surname)>0){
                new_client_queue_array(queue, name, surname);
            }
            else{
                // ERROR, expected name and surname
            }
        }
        else if(strcmp(command, "attend") == 0){
            attend_client_queue_array(queue);
        }
        else{
            // ERROR, Unknown command
        }
    }
    printf("All clients processed!\n");
    free_client_queue_array(queue);
}

void ex_4b() {
    printf("\nExecuting exercise %s...\n", "4b");

    FILE *f_clients = fopen("resources/clients.txt", "r");
    if( f_clients == NULL ){
        printf("File not found! (clients.txt)\n");
        return;
    }

    char command[MAX_NAME_LENGTH];
    char name[MAX_NAME_LENGTH];
    char surname[MAX_NAME_LENGTH];
    QueueLinked *list = make_queue_linked();

    while(fscanf(f_clients, "%s", command) > 0){
        if(strcmp(command, "new") == 0){
            if(fscanf(f_clients, "%s %s", name, surname)>0){
                new_client_queue_linked(list, name, surname);
            }
            else{
                // ERROR, expected name and surname
            }
        }
        else if(strcmp(command, "attend") == 0){
            attend_client_queue_linked(list);
        }
        else{
            // ERROR, Unknown command
        }
    }
    printf("All clients processed!\n");
    free_queue_linked(list);
}

int main() {
    // ToDo: uncomment the exercises after being implemented
    //ex_1a();
    //ex_1b();
    //ex_1c();
    //ex_1d();
    //ex_2a();
    ex_2b();
    //ex_3();
    ex_4a();
    ex_4b();

    return 0;
}
