#pragma once

// Definition of the struct Coordinate type.
//
// Coordinate            -> the structure tag
// struct Coordinate     -> the structure type
// struct Coordinate { ... }; -> defines the structure type
// struct Coordinate point;  -> declares an object of that type

struct Coordinate {
    int x_coo;  // declaration of a structure member; ends with ;
    int y_coo;  // declaration of a structure member; ends with ;
    int z_coo;  // declaration of a structure member; ends with ;
};              // structure definition ends with ;


// Function prototype == function declaration.
//
// Because these declarations appear before the function definitions,
// they can also be described as forward declarations.

struct Coordinate  new_coord          (int new_x, int new_y, int new_z);

struct Coordinate  scale_coordinate   (struct Coordinate s_coor, int scale);


//return type       function name       parameters
void               display_coordinate (struct Coordinate c);
