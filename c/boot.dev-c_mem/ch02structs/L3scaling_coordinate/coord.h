#pragma once

// definition of struct Coordinate
struct Coordinate {
    int x_coo;
    int y_coo;
    int z_coo;
};

// function-prototype: create new coordinate
struct Coordinate new_coord(int new_x, int new_x, int new_z);

// function-prototype: scale current coordinate
struct Coordinate scale_coordinate(struct Coordiante s_coor, int scale);
