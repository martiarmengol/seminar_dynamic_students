#ifndef __SEMINAR_3_H__
#define __SEMINAR_3_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"

#define MAX_ROWS 2
#define MAX_COLUMNS 3

/**
 * Exercise 1.a.1
 * Pre: ???
 * Post: ???
 */
void init_array(int array[MAX_COLUMNS]);

/**
 * Exercise 1.a.2
 * Pre: ???
 * Post: ???
 */
void fill_array(int array[MAX_COLUMNS]);

/**
 * Exercise 1.a.3
 * Pre: ???
 * Post: ???
 */
void print_array(int array[MAX_COLUMNS]);

/**
 * Exercise 1.b.1
 * Pre: ???
 * Post: ???
 */
void init_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]);

/**
 * Exercise 1.b.2
 * Pre: ???
 * Post: ???
 */
void fill_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]);

/**
 * Exercise 1.b.3
 * Pre: ???
 * Post: ???
 */
void print_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]);

/**
 * Exercise 1.c.1
 * Pre: ???
 * Post: ???
 */
int* create_dyn_array(int size);

/**
 * Exercise 1.c.2
 * Pre: ???
 * Post: ???
 */
void fill_dyn_array(int* array, int size);

/**
 * Exercise 1.c.3
 * Pre: ???
 * Post: ???
 */
void print_dyn_array(int* array, int size);

/**
 * Exercise 1.c.4
 * Pre: ???
 * Post: ???
 */
void free_dyn_array(int* array);


/**
 * Exercise 1.d.1
 * Pre: ???
 * Post: ???
 */
int** create_dyn_matrix(int rows, int columns);

/**
 * Exercise 1.d.2
 * Pre: ???
 * Post: ???
 */
void fill_dyn_matrix(int** matrix, int rows, int columns);

/**
 * Exercise 1.d.3
 * Pre: ???
 * Post: ???
 */
void print_dyn_matrix(int** matrix, int rows, int columns);

/**
 * Exercise 1.d.4
 * Pre: ???
 * Post: ???
 */
void free_dyn_matrix(int** matrix, int rows);

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int nia;
    double grade;

} Student;

/**
 * Exercise 2.a.1
 * Pre: ???
 * Post: ???
 */
Student* read_students(FILE* f, int* num_of_students);

/**
 * Exercise 2.a.2
 * Pre: ???
 * Post: ???
 */
void print_students(Student* students, int size);

typedef struct{
    int code;
    Student* students;
    int count;
} Course;

/**
 * Exercise 2.b.1
 * Pre: ???
 * Post: ???
 */
Course* read_courses(FILE* f, int* num_of_courses);

/**
 * Exercise 2.b.2
 * Pre: ???
 * Post: ???
 */
void print_courses(Course* courses, int size);

/**
 * Exercise 2.b.3
 * Pre: ???
 * Post: ???
 */
void free_courses(Course* courses, int size);


/***************************************/
/**** Seminar 3 - Student Exercises ****/
/***************************************/

/**
 * Exercise 3.a - Book data structure
 */
typedef struct {
    int id;
    double cost;
    Student* owner;
} Book;

/**
 * Exercise 3.b
 * Pre: ???
 * Post: ???
 */
Book* read_books(FILE *f, Student* students, int num_of_students, int* num_of_books);

/**
 * Exercise 3.c.1
 * Pre: ???
 * Post: ???
 */
void print_books(Book* books, int size);

/**
 * Exercise 3.c.2
 * Pre: ???
 * Post: ???
 */
void print_owner_costs(Book* books, int size);


/**
 * Exercise 4.a - data structures and auxiliary functions
 */
typedef struct {
    char name[MAX_NAME_LENGTH];
    char surname[MAX_NAME_LENGTH];
} Client;

typedef struct{
    Client* clients;
    int size;
    int first; // index of the first unserved client
} QueueArray;

/**
 * Exercise 4.a (auxiliary)
 * Pre: ???
 * Post: ???
 */
QueueArray* make_queue_array();

/**
 * Exercise 4.a (auxiliary)
 * Pre: ???
 * Post: ???
 */
void free_client_queue_array(QueueArray *q);

/**
 * Exercise 4.a.1
 * Pre: ???
 * Post: ???
 */
void new_client_queue_array(QueueArray* q, char name[], char surname[]);

/**
 * Exercise 4.a.2
 * Pre: ???
 * Post: ???
 */
void attend_client_queue_array(QueueArray *q);


/**
 * Exercise 4.b - Data structures and auxiliary functions
 */
typedef struct client_linked_list{
    Client* client;
    struct client_linked_list* next;
} ClientLinked;

typedef struct{
    ClientLinked* first;
    ClientLinked* last;
} QueueLinked;

/**
 * Exercise 4.b (ClientLinked - auxiliary)
 * Pre: ???
 * Post: ???
 */
ClientLinked* make_client_linked(char name[], char surname[]);
/**
 * Exercise 4.b (ClientLinked - auxiliary)
 * Pre: ???
 * Post: ???
 */
void free_client_linked(ClientLinked *c);

/**
 * Exercise 4.b (QueueLinked - auxiliary)
 * Pre: ???
 * Post: ???
 */
QueueLinked* make_queue_linked();

/**
 * Exercise 4.b (ClientLinked - auxiliary)
 * Pre: ???
 * Post: ???
 */
void free_queue_linked(QueueLinked *l);

/**
 * Exercise 4.b.1
 * Pre: ???
 * Post: ???
 */
void new_client_queue_linked(QueueLinked *l, char name[], char surname[]);

/**
 * Exercise 4.b.2
 * Pre: ???
 * Post: ???
 */
void attend_client_queue_linked(QueueLinked *l);


#endif //__SEMINAR_3_H__
