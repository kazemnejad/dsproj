//
// Created by amirhosein on 10/26/16.
//

#ifndef DSPROJ_VECTOR_H
#define DSPROJ_VECTOR_H

template<class T>
class vector {
public:
    vector() {
        init(0);
    }

    vector(unsigned short int defaultSize) {
        init(defaultSize);
    }

    void push_back(T element) {
        T *newArray = new T[size + 1];
        copyTo(newArray);

        delete elements;
        elements = newArray;
        elements[size++] = element;
    }

    T &operator[](unsigned short int index) {
        return elements[index];
    }

    unsigned short int size;

private:
    void init(unsigned short int defaultSize) {
        size = defaultSize;
        elements = new T[defaultSize];
    }

    void copyTo(T *newArray) {
        for (int i = 0; i < size; i++) {
            newArray[i] = elements[i];
        }
    }


    T *elements;
};


#endif //DSPROJ_VECTOR_H
