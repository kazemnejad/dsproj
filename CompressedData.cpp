//
// Created by amirhosein on 10/26/16.
//

#include "CompressedData.h"

CompressedData::CompressedData() {

}

void CompressedData::addNode(unsigned short int node, Edge edge) {
    if (nodes[node] == nullptr) {
        nodes[node] = new vector<Edge>;
    }

    nodes[node]->push_back(edge);
}
