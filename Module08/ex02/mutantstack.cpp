#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack():
	std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& cp):
	std::stack<T>(cp)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const& op)
{
	this->c = op.c;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator				MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator				MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::end() const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return (this->c.end());
}