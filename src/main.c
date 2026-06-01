#include "test.h"
#include <raylib.h>

int main() {
    const Color darkGreen = {45, 50, 59, 255};

    InitWindow(800, 600, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(darkGreen);
        DrawText(testInclude(), 10, 10, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}