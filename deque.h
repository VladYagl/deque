#ifndef DEQUE_H
#define DEQUE_H

#include <string>

struct deque {
	struct iterator {
		
	};

	struct const_iterator {
		
	};

	deque();
	deque(deque const& other);
	deque& operator=(deque const& other);

	size_t size() const;
	bool empty() const;
	void clear();

	std::string& back();
	std::string const& back() const;

	void pop_back();
	void pop_front();
	void push_back(std::string const& a);
	void push_front(std::string const& a);

	std::string& operator[](size_t index);
	std::string const& operator[](size_t index) const;
};

#endif // DEQUE_H
