#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

template <class T>
class Array {
public:
	Array<T>(): _size(0), storage(NULL) {
		std::cout << "Default contructor called" << std::endl;
	}

	Array<T>(unsigned int size): _size(size) {
		std::cout << "Size contructor called" << std::endl;
		this->storage = new T[this->_size];
	}

	Array<T>(const Array<T> &src) {
		std::cout << "Copy contructor called" << std::endl;
		*this = src;
	}

	~Array<T>() {
		std::cout << "Destructor called" << std::endl;
		if (this->_size)
			delete []this->storage;
	}

	Array<T> &operator=(const Array<T> &rhs) {
		std::cout << "Assignement operator called" << std::endl;
		if (this == &rhs)
			return *this;
		if (this->_size > 0)
			delete []this->storage;
		this->storage = new T[rhs._size];
		this->_size = rhs._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->storage[i] = rhs.storage[i];
		return *this;
	}

	T &operator[](const unsigned int index) {
		if (index >= this->_size || index < 0)
			throw IndexOutOfBoundsException();
		return this->storage[index];
	}

	unsigned int size() {
		return _size;
	}

	class IndexOutOfBoundsException: public std::exception {
		virtual const char *what() const throw() {
			return "array index is out of bounds";
		}
	};
private:
	unsigned int _size;
	T *storage;
};

#endif
