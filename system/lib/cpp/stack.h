#ifndef stack_H
#define stack_H
#include "io.h"
template <typename T>
class stack{
    private:
    template <typename T> st[1000010];
    int size;
    public:
    bool empty(){
        if(size==0){
            return true;
        }
        return false;
    }
    int size(){
        return size;
    }
    void push(T& value){
        size++;
        st[size]=value;
        return;
    }
    void pop(){
        size--;
    }
    T top(){
        return st[size];
    }
};
#endif
