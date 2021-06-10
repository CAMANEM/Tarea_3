//
// Created by camanem on 9/6/21.
//

#ifndef TAREA_3_ODDPARITYEXAMPLE_H
#define TAREA_3_ODDPARITYEXAMPLE_H


#include <bitset>

class OddParityExample {

private:

    /**
     * @brief transforma el numero dado a bits y le agrega un bit de paridad
     * @param number_to_send
     * @return
     */
    std::bitset<33> parityGenerator(int number_to_send);

    /**
     * @brief Recibe un mensage y llama a parityChecker para comprobar errores
     * @param message
     */
    void receiver(std::bitset<33> message);

    /**
     * @brief Verifica la paridad en los datos para descartar errores
     * @param message
     */
    void parityChecker(std::bitset<33> message);

public:

    OddParityExample();

    /**
     * @brief Toma un numero dado y llama al parityGenerator para alistarlo para enviar
     * @param number_to_send
     */
    void sender(int number_to_send);

};


#endif //TAREA_3_ODDPARITYEXAMPLE_H
