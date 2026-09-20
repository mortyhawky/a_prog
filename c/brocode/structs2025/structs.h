#pragma once
#include <stdlib.h>

// blueprint
typedef struct {
    char  navn[80];
    int   alder;
    float snitt;
    bool  fulltid;
} Elev_t;






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
