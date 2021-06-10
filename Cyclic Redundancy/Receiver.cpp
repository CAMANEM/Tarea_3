//
// Created by fernando on 9/6/21.
//

#include "Receiver.h"

Receiver::Receiver() {

}

bool Receiver::operation() {

    std::string  crc, encoded = "";

    std::cout << "Message: " << std:: endl;
    getline(std::cin, encoded);

    std::cout << "CRC Generator: "<< std:: endl;
    getline(std::cin, crc);

    for (int i = 0; i <= encoded.length()-crc.length(); ) {
        for (int j = 0; j < crc.length(); j++) {
            encoded[i+j] = encoded[i+j] == crc[j]?'0':'1';
        }
        for ( ;i < encoded.length() && encoded[i] != '1'; i++) {

        }
    }
    for (char i: encoded.substr(encoded.length()-crc.length())) {
        if(i != '0'){
            std::cout << "Error i communication";
            return false;
        }
    }


    std::cout << "No error in communication";
    return true;

}
