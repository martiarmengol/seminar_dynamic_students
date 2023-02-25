#include "seminar_3.h"

/**** Exercise 1 - auxiliary functions - START ****/
void clear_input() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int read_value() {
    int value = 0;
    int matched = 0;
    while (matched != 1) {
        printf("Please, write an integer:\n");
        matched = scanf("%d", &value);
        if (matched != 1) {
            clear_input();
            printf("This is not a number! Try again...\n");
        }
    }
    return value;
}
/**** Exercise 1 - auxiliary functions - END ****/

/// Exercise 1.a.1
void init_array(int array[MAX_COLUMNS]) {
    for(int i=0;i<MAX_COLUMNS;i++){
        array[i]=0;
    }
}

/// Exercise 1.a.2
void fill_array(int array[MAX_COLUMNS]) {
    for(int i=0;i<MAX_COLUMNS;i++){
        array[i]=
        fscanf
    }
}

/// Exercise 1.a.3
void print_array(int array[MAX_COLUMNS]) {
    // Do the exercise here...
}

/// Exercise 1.b.1
void init_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]) {

}

/// Exercise 1.b.2
void fill_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]) {
    // Do the exercise here...
}

/// Exercise 1.b.3
void print_matrix(int matrix[MAX_ROWS][MAX_COLUMNS]) {
    // Do the exercise here...
}

/// Exercise 1.c.1
int* create_dyn_array(int size) {
    return (int*) malloc(sizeof(int)*size);
}

/// Exercise 1.c.2
void fill_dyn_array(int* array, int size) {
    for(int i=0;i<size;i++){
        array[i]=read_value();
    }
}

/// Exercise 1.c.3
void print_dyn_array(int* array, int size) {
    // Do the exercise here...
}

/// Exercise 1.c.4
void free_dyn_array(int* array) {
    free(array);
}

/// Exercise 1.d.1
int** create_dyn_matrix(int rows, int columns) {
    int** matrix = (int**) malloc(sizeof(int*)*rows);
    for(int i=0;i<columns;i++){
        matrix[i]= create_dyn_array(columns);
    }
}

/// Exercise 1.d.2
void fill_dyn_matrix(int** matrix, int rows, int columns) {
    // Do the exercise here...
}

/// Exercise 1.d.3
void print_dyn_matrix(int** matrix, int rows, int columns) {
    // Do the exercise here...
}

/// Exercise 1.d.4
void free_dyn_matrix(int** matrix, int rows) {
    // Do the exercise here...
}

/// Exercise 2.a.1
Student* read_students(FILE *f, int* num_of_students){
    // Do the exercise here...
}

/// Exercise 2.a.2
void print_students(Student* students, int size) {
    // Do the exercise here...
}

/// Exercise 2.b.1
Course* read_courses(FILE *f, int* num_of_courses){

    int read = fscanf(f,)
}

/// Exercise 2.b.2
void print_courses(Course* courses, int size){
    // Do the exercise here...
}

/// Exercise 2.b.3
void free_courses(Course* courses, int size){
    // Do the exercise here...
}


/// Exercise 3.b
Book* read_books(FILE *f, Student* students, int num_of_students, int* num_of_books){
    // Do the exercise here...
}


/// Exercise 3.c.1
void print_books(Book* books, int size){
    // Do the exercise here...
}

/// Exercise 3.c.2
void print_owner_costs(Book* books, int size){
    // Do the exercise here...
}


/**** Exercise 4.a - auxiliary functions - START ****/
QueueArray* make_queue_array(){
    QueueArray* q = (QueueArray*) malloc(sizeof(QueueArray));
    q->clients = NULL;
    q->size = 0;
    q->first = 0;
    return q;
}

void free_client_queue_array(QueueArray *q){
    free(q->clients);
    free(q);
}

int get_num_unserved_queue_array(QueueArray *q){
    return (q->size) - (q->first);
}
/**** Exercise 4.a - auxiliary functions - END ****/

/// Exercise 4.a.1
void new_client_queue_array(QueueArray* q, char name[], char surname[]){
    q->clients = (Client*) realloc(q->clients,(q->size+1)*sizeof(Client));
    strcpy(q->clients[q->size+1].name,name);
    strcpy(q->clients[q->size+1].surname,surname);
}


/// Exercise 4.a.2
void attend_client_queue_array(QueueArray *q){
    // Do the exercise here...
}

/**** Exercise 4.b - auxiliary functions - START ****/
ClientLinked* make_client_linked(char name[], char surname[]){
    ClientLinked* c = (ClientLinked*) malloc(sizeof(ClientLinked)); // Allocate memory for a new ClientLinked
    c->client = (Client*) malloc(sizeof(Client)); // Allocate memory for its Client variable
    strcpy(c->client->name, name);
    strcpy(c->client->surname, surname);
    c->next = NULL;
    return c;
}

QueueLinked* make_queue_linked(){
    QueueLinked* list = (QueueLinked*) malloc(sizeof(QueueLinked));
    list->first = NULL;
    list->last = NULL;
    return list;
}

void free_client_linked(ClientLinked *c){
    free(c->client);
    free(c);
}

void free_queue_linked(QueueLinked *l){
    ClientLinked* tmp;
    while(l->first != NULL){
        tmp = l->first;
        l->first = l->first->next;
        free_client_linked(tmp);
    }
    if(l->last != NULL){ // This should never happen
        free_client_linked(l->last);
    }
    free(l);
}

int get_num_unserved_queue_linked(QueueLinked* l){
    int counter = 0;
    ClientLinked* tmp = l->first;
    while(tmp != NULL){
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
/**** Exercise 4.b - auxiliary functions - END ****/

/// Exercise 4.b.1
void new_client_queue_linked(QueueLinked* l, char name[], char surname[]){
    ClientLinked *client = make_client_linked(name,surname);
    if(l->last==NULL) {
        l->first = client;
        l->last = client;
    }else{
        l->last
    }
}


/// Exercise 4.b.2
void attend_client_queue_linked(QueueLinked *l){
    // Do the exercise here...
}