#include <iostream>

#include <tmap.h>

int main(void) {
    TagLib::Map<char,int> m;

    m.insert('a',1);
    m.insert('b',2);
    m.insert('c',3);

    for(auto i = m.cbegin(); i != m.cend(); ++i) {
        std::cout << i->first << ' ' << i->second << std::endl;
    }
    return 0;
}
