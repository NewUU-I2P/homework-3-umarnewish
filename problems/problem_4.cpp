#include <string>
#include <sstream>
using namespace std;

std::string classifyMACAddressType(const std::string& macAddress) {
    std::istringstream iss(macAddress);
    std::string octet;
    getline(iss, octet, ':');
    int firstOctet;
    std::stringstream(octet) >> std::hex >> firstOctet;

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else if (firstOctet % 2 != 0 and firstOctet != 255) {
        return "Multicast";
    } else if (firstOctet == 255) {
        return "Broadcast";
    }
}
