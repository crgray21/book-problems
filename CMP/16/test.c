#include <stdio.h>
#include <strings.h>

#define NAME_LEN 20
#define FIRST_NAME_LEN 20
#define LAST_NAME_LEN 20


void print_part(struct part p);
struct part build_part(int number, const char *name, int on_hand);

int main(void) {

    // struct that initializes structures when the struct is declared. This is problematic if
    // you ever want to create more struct objects at other parts of the program or if you
    // want to use your structs as arguments to functions.
    struct {
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } part1 = {528, "Disk drive", 10},
      part2 = {914, "Printer cable", 5};


    // declaring a struct using a structure tag. The tag can be used to declare variables!
    struct part {
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } part3, part4;
    
    struct part part5 = {528, "Disk drive", 10};
    part3 = part5;



    // an alternative to using a structure tag is using typedef to define a type name.
    // to define a type named Part:
    typedef struct {
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } Part;

    // now we don't need to use the keyword struct before the type like we did with tags.
    // there are situations when we should use tags such as when creating linked lists.
    Part part6, part7;


    // arrays may have structs as elements, and structs may contain arrays and other structs as members
    struct person_name {
        char first[FIRST_NAME_LEN+1];
        char middle_initial;
        char last[LAST_NAME_LEN+1];
    };

    struct student {
        struct person_name name;
        int id;
        int age;
        char sex;
    } student1, student2;
}


void print_part(struct part p) {
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

struct part build_part(int number, const char *name, int on_hand) {
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    return p;
}
