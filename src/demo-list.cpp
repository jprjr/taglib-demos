#include <iostream>

#include <tlist.h>

int main(void) {
    TagLib::List<int> l;

    l.append(1);
    l.append(2);
    l.append(3);

    for(auto i = l.cbegin(); i != l.cend(); ++i) {
        std::cout << *i << std::endl;
    }
    return 0;
}
