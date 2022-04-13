#ifndef CPP07_MAIN_H
#define CPP07_MAIN_H

#include <iostream>

template <class T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <class T>
T &max(T &a, T &b) {
	return (a > b ? a : b);
}

template <class T>
T &min(T &a, T &b) {
	return (b > a ? a : b);
}

#endif
