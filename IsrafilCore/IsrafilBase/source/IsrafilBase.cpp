
#include <iostream>
#include <fstream>

#include <IsrafilCore-version.h>

#include <IsrafilBase/IsrafilBase.h>

//{ for needed start
#include "rapidjson/document.h"
//} end

namespace Israfil{
namespace Base{

void printInfo()
{
    std::string dataPath = "data";

    // Library name
    std::cout << "Library template::baselib" << std::endl;
    std::cout << "========================================" << std::endl;

    // Library version
    std::cout << "Version: " << ISRAFILCORE_VERSION << std::endl;
    std::cout << std::endl;

    // Library type (static or dynamic)
    #ifdef BASELIB_STATIC_DEFINE
        std::cout << "Library type: STATIC" << std::endl;
    #else
        std::cout << "Library type: SHARED" << std::endl;
    #endif

    // Data directory
    std::cout << "Data path:    " << dataPath << std::endl;
    std::cout << std::endl;

    // Read file
    std::cout << "Data directory access" << std::endl;
    std::cout << "========================================" << std::endl;

    std::string fileName = dataPath + "/DATA_FOLDER.txt";
    std::cout << "Reading from '" << fileName << "': " << std::endl;
    std::cout << std::endl;

    std::ifstream f(fileName);
    if (f.is_open()) {
        std::string line;
        while (getline(f, line)) {
            std::cout << line << '\n';
        }
        f.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}


} // namespace baselib
} // namespace Israfil
