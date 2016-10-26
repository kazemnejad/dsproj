//
// Created by amirhosein on 10/26/16.
//

#ifndef DSPROJ_COMPRESSEDDATA_H
#define DSPROJ_COMPRESSEDDATA_H

#include "vector.h"
#include "Edge.h"

#define MAX_SIZE 65536

class CompressedData {
public:
    CompressedData();

    void addNode(unsigned short int nodeNumber, Edge edge);

    vector<Edge> *nodes[MAX_SIZE];
};


#endif //DSPROJ_COMPRESSEDDATA_H
