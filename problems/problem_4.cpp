#include <string>
#include <sstream>
using namespace std;

std::string problemSolution4(const std::string &macAddress) {

    string mac;
    stringstream ss(mac);
    int a, b, c, d, e, f;

    char colon;
    ss >> hex >> a >> colon >> b >> colon >> c  >> colon >> d >> colon >> e >> colon >> f;

        if (a == 0xFF && b == 0xFF && c == 0xFF && d == 0xFF && e == 0xFF && f == 0xFF) {
        return "Broadcast" << endl;
    } else if (a % 2 == 0) {
        return "Unicast" << endl;
    } else {
        return "Multicast" << endl;
    }

}
