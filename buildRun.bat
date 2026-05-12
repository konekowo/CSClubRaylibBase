@echo off

cmake --build build || exit /b
.\build\Debug\my_raylib_game.exe