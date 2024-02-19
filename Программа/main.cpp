// Ветка 2: Редактирование и расширение функциональности

#include <iostream>
#include "CodeEditor.h"
#include "GIFEditor.h"
#include "CloudIntegration.h"

int main() {
    CodeEditor editor;
    GIFEditor gifEditor;
    CloudIntegration cloudIntegration;

    editor.editFilterCode();
    gifEditor.createGIF();
    cloudIntegration.integrate();

    return 0;
}