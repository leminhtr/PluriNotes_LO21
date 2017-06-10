#ifndef ITERATOR_H
#define ITERATOR_H
// class classSource>
template<class T> class classSource;
template <class T> class iterator{
    friend class classSource<T>;   // erreur : voir "template friend" ? : http://en.cppreference.com/w/cpp/language/friend
    T* current;
    iterator(T* curr): current(curr){}
public:
    iterator(): current(0){}
    T& operator*() const {return *current;}
    iterator& operator++() {++current; return *this;}
    iterator& operator++(int){
        iterator old = *this; ++current; return old;
    }
    bool operator==(iterator it) const{
        return current == it.current;
    }
    bool operator!=(iterator it) const{
        return current != it.current;
    }
};

#endif // ITERATOR_H
