#include "exercise.h"
#include <stdio.h>  // for printf

/* 
boot.dev CH3: Pointers L11: Array Casting
C Programming and Memory Management
Boot dev and TJ DeVries


Assignment

Using a index number larger than 10: 
All hell breaks loose. That's because we've ventured out of the bounds of our array!
We're going rogue! We're in the weeds! We're in undefined territory.
This is something you do not want to do. 
It's one of the things that makes C powerful but dangerous.
Other languages stop you from going out of bounds, 
but C will let you fly off the edge of the world.

Fix the loop to only print the values that are actually in the array of structs.
Take a look at the graphics_t struct in exercise.h to figure out how large each struct is.


from exercise.h :
typedef struct Graphics {
  int fps;
  int height;
  int width;
} graphics_t;   // each struct is 3 ints in size

void dump_graphics(graphics_t gsettings[10]);

from main() {}
graphics_t graphics_array[10] = {
//    fps, height, width
      {60, 1080, 1920},  {30, 720, 1280},  {144, 1440, 2560}, {75, 900, 1600},
      {120, 1080, 1920}, {60, 2160, 3840}, {240, 1080, 1920}, {60, 768, 1366},
      {165, 1440, 2560}, {90, 1200, 1920},
  };
  dump_graphics(graphics_array);
We find one "magic" number here: 10
This is an one dimentional array of struct graphics_t
each struct holds 3 integers, thus 10*3=30 ints.
*/

#define NUMB_INTS_IN_STRUCT 3  // Number of integers in our struct
#define GRAPH_ARR_SIZE 10      // Number of structs in our array
#define COL 3                  // Display columns

void dump_graphics(graphics_t gsettings[GRAPH_ARR_SIZE]) {
    printf("Size of graphics_t                 = %zu bytes\n", sizeof(graphics_t) );
    printf("Address of graphics_t gsettings[0] = %p \n", &gsettings[0] );
    printf("Address of gsettings               = %p \n", gsettings );
    int *ptr = (int *)gsettings;  // casting a struct to an array of integers
    printf("Address of new int *ptr            = %p \n\n", ptr );
    // now we can itterate through all the values from the struct as if it 
    // was an array of 30 ints.
    for (int gas = 0; gas < GRAPH_ARR_SIZE; gas++) {   // gas = Graph Array Size 
        printf("{");  // starting curley brace
        int niis = 0; // Number of Integers In Struct
        for (niis = 0; niis < NUMB_INTS_IN_STRUCT; niis++ ) {
           printf("%04d, ", ptr[gas + niis]);
        }//rof 5k
      
        if ( gas == GRAPH_ARR_SIZE - 1 ) {
            printf("}");  // Don't print comma (,) after the last struct.
            return; 
        }//if 2k
        printf("}¸ "); // ending curley brace (and comma (,))
      
        if ( (gas % COL) == COL - 1 ) {
            puts("");  // New line to create our wanted number of columns.
        }//fi 2k
    }//rof 15k
}//dump_graphics 22k

