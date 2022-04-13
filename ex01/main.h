#ifndef CPP07_MAIN_H
#define CPP07_MAIN_H

#include <iostream>
#include <string>

template <class T>
void iter(T *tab, int size, void (*f)(T&)) {
	for (int i = 0; i < size; i++) {
		f(tab[i]);
	}
}

#endif
