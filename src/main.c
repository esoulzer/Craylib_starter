#include "test.h"
#include <raylib.h>

int main() {
    const Color darkGreen = {45, 50, 59, 255};
    testFunction();

    InitWindow(800, 600, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(darkGreen);
        EndDrawing();
    }

    CloseWindow();
}