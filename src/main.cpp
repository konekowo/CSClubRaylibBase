#include "raylib.h"
#include <string>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 450;

const std::string WINDOW_TITLE = "Window title";

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE.c_str());
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}