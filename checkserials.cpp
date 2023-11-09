// Serial Checker In C++ By Seized

#include <iostream>
#include <windows.h>

using namespace std;

int main(){
        cout << "Checking your serials..." << endl
             << "Please Wait." << endl
             << "" << endl;
                 Sleep(1000);

        cout << "Disk" << endl
             << "========================" << endl;
        system("wmic diskdrive get serialnumber");

        cout << "Motherboard" << endl
             << "========================" << endl;
        system("wmic baseboard get serialnumber");

        cout << "SMBios" << endl
             << "========================" << endl;
        system("wmic path win32_computersystemproduct get uuid");

        cout << "GPU" << endl
             << "========================" << endl;
        system("wmic PATH Win32_VideoController GET Description,PNPDeviceID");

        cout << "RAM" << endl
             << "========================" << endl;
        system("wmic memorychip get serialnumber");

        cout << "Bios" << endl
             << "========================" << endl;
        system("wmic csproduct get uuid");

        cout << "CPU" << endl
             << "========================" << endl;
        system("wmic cpu get processorid");

        cout << "Mac" << endl
             << "========================" << endl;
        system("wmic path Win32_NetworkAdapter where \"PNPDeviceID like '%%PCI%%' AND NetConnectionStatus=2 AND AdapterTypeID='0'\" get MacAddress");

    cout << "Exiting in 10 seconds." << endl;
    Sleep(10000);
    exit(1);
    }

