//
// Created by amirhosein on 10/26/16.
//

#ifndef DSPROJ_EDGE_H
#define DSPROJ_EDGE_H


#include "vector.h"

class Edge {
public:
    Edge(unsigned short int);

    unsigned short int tail;
    vector<unsigned short int> values;
};


#endif //DSPROJ_EDGE_H
