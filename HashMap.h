//
// Created by user on 2018-06-19.
//

#ifndef INTERVIEWPREP_HASHMAP_H
#define INTERVIEWPREP_HASHMAP_H


#include <string>
#include <unordered_map>
#include <vector>




template <class T>
class HashMap<T>
{
public:

    HashMap(size_t size): table(size), size(size)
    {
    }

    void insert(T element);
    bool lookup(T element);

private:
    std::vector<T> table;
    size_t size;
    size_t hash(T element);

};


#endif //INTERVIEWPREP_HASHMAP_H
