//
// Created by camanem on 9/6/21.
//

#include <iostream>
#include "OddParityExample.h"

OddParityExample::OddParityExample() {

}

void OddParityExample::sender(int number_to_send) {

    std::bitset<33> message = parityGenerator(number_to_send);
    receiver(message);

}

std::bitset<33> OddParityExample::parityGenerator(int number_to_send) {

    std::bitset<32> number_in_bitset(number_to_send); // numero a enviar en forma de bits
    std::bitset<33> message_with_parity_bit(number_to_send); // numero a enviar pero con bit de paridad (un bit más que antes)
    message_with_parity_bit  <<= 1; // desplazamiento de bits a la izquierda para que en la posición 0 vaya el bit de paridad

    std::cout << "Number to send in bits: " << std::endl;
    std::cout << number_in_bitset << std::endl;

    std::cout << "Message with unasigned parity bit: " << std::endl;
    std::cout << message_with_parity_bit << std::endl;

    // se asigna el bit de paridad
    if (number_in_bitset.count() % 2 == 0){
        std::cout << "(It has Odd Parity)" << std::endl;
        message_with_parity_bit.set(0, 1);
    }
    std::cout << "message with parity bit: " << std::endl;
    std::cout << message_with_parity_bit << std::endl;

    return message_with_parity_bit;
}

void OddParityExample::receiver(std::bitset<33> message) {

    parityChecker(message);
}

void OddParityExample::parityChecker(std::bitset<33> message) {

    bool parity = message[0];

    if (parity){
        if (message.count()%2 == 0){
            std::cout << "Error detected" << std::endl;
        }
        else{
            std::cout << "Correct" << std::endl;
        }
    }
    else{
        if (message.count()%2 == 0){
            std::cout << "Error detected" << std::endl;
        }
        else{
            std::cout << "Correct" << std::endl;
        }
    }
}
