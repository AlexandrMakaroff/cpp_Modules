#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_len;
public:
	Array<T>(): _array(new T[0]), _len(0) {};
	Array<T>(unsigned int l): _array(new T[l]), _len(l) {};
	Array<T>(Array<T>& cp):
	_array(new T[cp._len]),
	_len(cp._len)
	{
		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = cp._array[i];
	}
	virtual ~Array<T>() {delete [] _array;}

	Array<T>&	operator=(Array<T>& op)
	{
		this->_array = new T[op._len];
		this->_len = op._len;
		for (int i = 0; i < _len; i++)
			this->_array[i] = op._array[i];
		return *this;
	}

	T&	operator[](const int idx)
	{
		if (idx < 0 || idx >= (const int)this->_len)
			throw OutOfRange();
		return this->_array[idx];
	}

	class OutOfRange: public std::exception
	{
		virtual const char*	what() const throw()
		{
			return "Exception: out of range";
		}
	};

	unsigned int	getLength() const
	{
		return this->_len;
	}
};

#endif