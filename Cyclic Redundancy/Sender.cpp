//
// Created by fernando on 9/6/21.
//

#include "Sender.h"

Sender::Sender() {

}

void Sender::operation() {
    std::string msg, crc, encoded = "";

    std::cout << "Message: " << std:: endl;
    getline(std::cin, msg);

    std::cout << "CRC Generator: "<< std:: endl;
    getline(std::cin, crc);

    int m = msg.length();
    int n = crc.length();
    encoded += msg;

    for (int i = 0; i < n-1; i++) {
        encoded += '0';
    }
    for (int i = 0; i <= encoded.length()-n; ) {
        for (int j = 0; j < n; j++) {
            encoded[i+j] = encoded[i+j] == crc[j]?'0':'1';
        }
        for ( ;i < encoded.length() && encoded[i] != '1'; i++) {

        }
    }
    std::cout << msg+encoded.substr(encoded.length()-n+1);

}
