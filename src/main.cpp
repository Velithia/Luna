#include "core/types.h"
#include "core/uci.h"

int main(int argc, char* argv[])
{
    std::cout << "Luna v0.1.0 (Experimental) by Velithia" << std::endl;

    UCI uci;
    uci.uciLoop();

    return 0;
}