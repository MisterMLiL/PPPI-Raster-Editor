// Ветка 1: Графический интерфейс пользователя

#include <iostream>
#include "GraphicsFileHandler.h"
#include "Printing.h"

int main() {
    GraphicsFileHandler fileHandler;
    Printing printer;

    fileHandler.openFile();
    fileHandler.saveFile();
    printer.print();

    return 0;
}