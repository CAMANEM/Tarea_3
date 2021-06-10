#include <iostream>
#include <OddParityExample.h>
#include <Sender.h>
#include <Receiver.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    OddParityExample oddParityExample = OddParityExample();
    oddParityExample.sender(2);

//    Sender sender = Sender();
//    sender.operation();
//
//    Receiver receiver = Receiver();
//    receiver.operation();

    return 0;
}