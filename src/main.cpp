/*
** EPITECH PROJECT, 2023
** main.cpp$
** File description:
** main.cpp$
*/

#include <iostream>
#include <vector>
#include <cstring>
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"
#include "Core.hpp"

int main()
{
    try {
        Arcade::Core core;

        core.coreLoop();
        return 0;
    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
        return 1;
    }
    return 0;
}