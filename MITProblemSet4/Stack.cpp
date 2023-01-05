#include <iostream>
#include <vector>
#include <stdexcept>

template<class T>
class Stack {
    std::vector<T> items;
public:
    Stack() = default;
    bool empty(){ return items.empty(); }
    const int size() { return items.size(); }
    void push(const T& item);
    T pop();
    const T& top();
};

template<class T>
void Stack<T>::push(const T& item)
{
    items.push_back(item);
}

template<class T>
T Stack<T>::pop()
{
    if(this->empty())
        throw std::runtime_error("Can't pop from empty stack!");

    T temp = items.back();
    items.pop_back();
    return temp;
}

template<class T>
const T& Stack<T>::top()
{
    if(this->empty())
        throw std::runtime_error("Can't retrieve top from empty stack!");

    return items.back();
}

int main()
{
    Stack<int> s;
    s.push(5);
    s.push(10);
    s.push(25);
    s.push(17);
    std::cout<< s.size() << ' ' << s.top() <<std::endl;

    s.pop();
    std::cout<< s.size() << ' ' << s.top() <<std::endl;

    s.pop();
    std::cout<< s.size() << ' ' << s.top() <<std::endl;

    s.pop();
    std::cout<< s.size() << ' ' << s.top() <<std::endl;
    return 0;
}
