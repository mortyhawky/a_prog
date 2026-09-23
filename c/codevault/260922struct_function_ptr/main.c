/* cd into working directory
c /a/prog/c/codevault/260922struct_function_ptr/

 * Project; Compile & Run:
clear && make clean && make && make cppcheck && ./stru_func && printf "Exit code = $? \n"

 * Project; Compile & Debug:
clear && make clean && make && make cppcheck && gdb --command gdb.file stru_func

 * Project; Check:

 * Project; Clean & Git
(make clean && gitall) || (ll)
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "stru_func.h"

struct Point {
    double x;
    double y;
};
typedef struct Point Point_t;

static Point_t 
get_mid_by_val(
    const Point_t v_in1,
    const Point_t v_in2);

static void    
get_mid_by_ptr(
    const Point_t* p_in1,
    const Point_t* p_in2,
    Point_t*       p_out);

static void
print_address16(const char *name, 
                const void *address);
static void
print_point_val(const char *name, 
                const Point_t p);

static void
print_point_ptr(const char *name,
                const Point_t *p);

int main(void) {
    printf("-> main:\n");
    puts("-");

    Point_t in1 = {0};
    print_address16("&in1", &in1);
    print_address16("&in1.x", &in1.x);
    print_address16("&in1.y", &in1.y);
    puts("");

    Point_t in2 = {0};
    print_address16("&in2", &in2);
    print_address16("&in2.x", &in2.x);
    print_address16("&in2.y", &in2.y);
    puts("");

    Point_t out = {0};
    print_address16("&out", &out);
    print_address16("&out.x", &out.x);
    print_address16("&out.y", &out.y);
    puts("");

    print_point_val("in1", in1);
    print_point_val("in2", in2);
    puts("");

    in1.x = 7.77; in1.y = 9.99;
    in2.x = 11.11; in2.y = 13.13;
    print_point_val("in1", in1);
    print_point_val("in2", in2);

    out = get_mid_by_val(in1, in2);
    print_point_val("out", out);

    get_mid_by_ptr(&in1, &in2, &out);
    print_point_ptr("out", &out);

    puts("");
    return EXIT_SUCCESS;
}


// Functions
static Point_t 
get_mid_by_val(const Point_t v_in1,
               const Point_t v_in2){
    printf("Calculate middle by value\n");
    Point_t v_out;          // output point as value
    v_out.x = (v_in1.x + v_in2.x) / 2.0;
    v_out.y = (v_in1.y + v_in2.y) / 2.0;

    return v_out;
}

static void 
get_mid_by_ptr(const Point_t* p_in1, 
               const Point_t* p_in2,
                     Point_t* p_out){
    printf("Calculate middle by pointer\n");
    p_out->x = (p_in1->x + p_in2->x) / 2.0;
    p_out->y = (p_in1->y + p_in2->y) / 2.0;

    return;                 // return void, go back to main
}

// static means the function is private to the current source file. 
// Other .c files cannot call it by name.
static void
print_address16( const char *name, 
                 const void *address){
    uintptr_t value = (uintptr_t)address & (uintptr_t)0xFFFF;
    printf("print_address16: %s = 0x%04" PRIxPTR "\n",
                             name, 
                                   value
    );

    return;
}

static void
print_point_val(const char *name, 
                const Point_t p){
    printf("print_by_value..: %s: %lf, %lf \n", 
                              name, 
                                  p.x, 
                                        p.y
    ); 

    return;
}


static void
print_point_ptr(const char *name,
                const Point_t *p){
    printf("print_by_pointer: %s: %lf, %lf \n", 
                              name, 
                                  p->x, 
                                        p->y
    ); 

    return;
}
