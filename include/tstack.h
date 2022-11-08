#include "vector.h"

template <class T>
class TStack {
    vector<T> pMem;

public:
    TStack() = default;

    TStack(const TStack& st) { pMem = st.pMem; }

    void push(const T& elem) {
        pMem.push_back(elem);
    }

    void pop() {
        if (empty()) throw std::logic_error("Stack is empty");
        pMem.pop_back();
    }

    T top() {
        if (empty()) throw std::logic_error("Stack is empty");
        return pMem[pMem.getsize() - 1];
    }

    bool empty() { return pMem.getsize() == 0; }

    TStack& operator=(const TStack& s){
        if (this != &s)
            pMem = s.pMem;
    }
};