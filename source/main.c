#include "raylib.h"

int main(void)
{
  InitWindow(1000, 800, "basic project structure");

  while (!WindowShouldClose()){
    BeginDrawing();
    ClearBackground((Color){10,10,10,255});
    DrawText("Cross platform Raylib project structure!", 10, 200, 40, LIGHTGRAY);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
