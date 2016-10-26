//
// Created by amirhosein on 10/26/16.
//

#ifndef DSPROJ_DATACOMPRESSOR_H
#define DSPROJ_DATACOMPRESSOR_H

#include <string>
#include "CompressedData.h"

class DataCompressor {
public:
    DataCompressor();
    void init(const std::string&);
    void getCompressedData(CompressedData&);
};


#endif //DSPROJ_DATACOMPRESSOR_H
