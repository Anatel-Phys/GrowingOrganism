#pragma once
#include <vector>

template<class T>
class Grid
{
public:

	Grid(int i_width, int i_height);
	T operator()(int i, int j);
	T at(int i, int j);
	void insert_at(T object, int i, int j);
	void clear();
	

private:
	int m_width;
	int m_height;
	std::vector<T> m_content;

};

template<class T>
inline Grid<T>::Grid(int i_width, int i_height)
{
	m_height = i_height;
	m_width = i_width;
	m_content.resize(i_height * i_width);
}

template<class T>
inline T Grid<T>::operator()(int i, int j)
{
	i = i % m_width;
	j = j % m_height;

	i = (i < 0) ? m_width - i : i;
	j = (j < 0) ? m_height - j : j;

	return m_content.at(j * m_width + i);
}

template<class T>
inline T Grid<T>::at(int i, int j)
{
	i = i % m_width;
	j = j % m_height;

	i = (i < 0) ? m_width - i : i;
	j = (j < 0) ? m_height - j : j;

	return m_content.at(j * m_width + i);
}

template<class T>
inline void Grid<T>::insert_at(T object, int i, int j)
{
	i = i % m_width;
	j = j % m_height;

	i = (i < 0) ? m_width - i : i;
	j = (j < 0) ? m_height - j : j;

	m_content.at(j * m_width + i) = object;
}

template<class T>
inline void Grid<T>::clear()
{
}
