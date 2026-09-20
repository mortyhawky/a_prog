#pragma once
//#include <stdlib.h>

#define MAXLEN 99
// "struct Student" is the type name.
struct Student {
    char  name[MAXLEN];
    int   age;
    float gpa;  // Grade Point Average
    bool  isFullTime;
};

typedef struct {
    char  navn[MAXLEN];
    int   alder;
    float snitt;
    bool  fulltid;
} Elev_t;   // Elev_t is the type name.

void display_student(struct Student student);
void vis_elev(Elev_t elev);




//Mental model:
//
//TYPE
//  ↓
//describes what an object consists of
//
//OBJECT
//  ↓
//actual instance of that type
//  ↓
//has storage
//  ↓
//holds values
