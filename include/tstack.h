#include "vector.h"
#include <vector>

template <class T>
class TStack {
    std::vector<T> pMem;

public:
    TStack() = default;

    TStack(const TStack& st) { pMem = st.pMem; }

    void push(const T& elem) { pMem.push_back(elem); }

    T pop() {
        if (empty()) throw "stack is empty";

        T elem = pMem[pMem.size() - 1];
        pMem.pop_back();

        return elem;
    }

    bool empty() const noexcept { return pMem.size() == 0; }

    size_t count() const noexcept{ return pMem.size(); }

    TStack& operator=(const TStack& s){
        if (this != &s)
            pMem = s.pMem;
        
        return *this;
    }
};