#include <iostream>
#include <network_interfaces/network_interfaces_fj.h>

int main(int argc, char *argv[])
{    
    try
    {
        wireless::InterfacesManipulation obj;
        wireless::interfaces_info info = obj.getAllNetworkInterfaces();
        obj.printNetworkInterfacesInfo(info);
        std::cout << std::endl;

        wireless::scan_results results = obj.scanForAP("wlp5s0");
        obj.printScanResults(results);

    }
    catch(std::string error)
    {
        std::cerr << error << std::endl;
    }
    
    return 0;
}
