//
// Created by user on 2018-06-19.
//

#include "HashMap.h"

template<typename T>
void HashMap<T>::insert(T element)
{
    size_t index = HashMap::hash(element);
    HashMap::table[index] = element;
}

template<typename T>
bool HashMap<T>::lookup(T element){
    size_t index = HashMap::hash(element);
    if (HashMap::table[index] == element)
    {
        return true;
    }
    return false;
}

template<typename T>
size_t HashMap<T>::hash(T element){
    std::size_t h = std::hash<T>{}(element);
    return (h % HashMap::size);
}

