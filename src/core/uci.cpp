#include "uci.h"
#include "types.h"

void UCI::uciLoop()
{
    std::string line;

    while (getline(std::cin, line))
    {
        if (line == "uci")
        {
            std::cout << "id name Luna v0.1.0 (Experimental)" << std::endl;
            std::cout << "id author Velithia" << std::endl;
            std::cout << "uciok" << std::endl;
        }
        else if (line == "quit")
        {
            break;
        }
        else if (line == "isready")
        {
            std::cout << "readyok" << std::endl;
        }
        else if (line == "ucinewgame")
        {
            // TODO: Implement new game
        }
        else if (line == "position")
        {
            // TODO: Implement position
        }
        else if (line == "go")
        {
            // TODO: Implement go
        }
        else
        {
            std::cout << "Unknown command: " << line << std::endl;
        }
    }
}