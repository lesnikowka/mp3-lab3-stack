#include "vector.h"

template <class T>
class TStack {
    vector<T> pMem;

public:
    TStack() = default;

    TStack(const TStack& st) { pMem = st.pMem; }

    void push(const T& elem) { pMem.push_back(elem); }

    const T& pop() {
        if (empty()) throw std::logic_error("Stack is empty");

        T elem = pMem[pMem.get_size() - 1];
        pMem.pop_back();

        return elem;
    }

    bool empty() const noexcept { return pMem.get_size() == 0; }

    size_t count() const noexcept{ return pMem.get_size(); }

    TStack& operator=(const TStack& s){
        if (this != &s)
            pMem = s.pMem;
        
        return *this;
    }
};