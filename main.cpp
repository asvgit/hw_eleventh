#include <iostream>

#include "async.h"

int main(int, char *[]) {
    std::size_t bulk = 5;
    auto h = async::connect(bulk);
    auto h2 = async::connect(bulk);
    auto h3 = async::connect(bulk);
    async::receive(h, "1", 1);
    async::receive(h2, "1\n", 2);
    async::receive(h, "\n2\n3\n4\n5\n6\n{\na\n", 15);
    async::receive(h, "b\nc\nd\n}\n89\n", 11);
    async::disconnect(h);
    async::disconnect(h2);
    async::receive(h3, "q", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "w", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "e", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "t", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "y", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "{", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "Q", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "W", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "E", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "T", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "Y", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "}", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "a", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "s", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "d", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "f", 1);
    async::receive(h3, "\n", 1);
    async::receive(h3, "g", 1);
    async::receive(h3, "\n", 1);
    async::disconnect(h3);

    return 0;
}
