#pragma once

// .h files are for declarations of types and function prototypes.

// Define a struct
struct Coordinate {
    int x;
    int y;
    int z;
};

struct Coordinate set_coord(struct Coordinate c);

void println(const char *str);
