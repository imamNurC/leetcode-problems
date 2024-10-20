#include <thread>
#include <chrono>
#include <windows.h>
#include <iostream>

void memoryUsageBar(){
	MEMORYSTATUSEX memStatus; // structure to hold info status memory
	memStatus.dwLength = sizeof(MEMORYSTATUSEX); // set the structure size

	// const int barLength = 50;

	while(true){
		if (GlobalMemoryStatusEx(&memStatus))
		{

			// total physical memory
			DWORDLONG totalMem = memStatus.ullTotalPhys / (1024*1024); 
			DWORDLONG usedMem = (memStatus.ullTotalPhys - memStatus.ullAvailPhys) / (1024*1024); // used memory in MB


			float memUsePercent = (float)usedMem / totalMem; // calculation as float


			system("cls"); 



			std::cout << "total memory :" << totalMem << " MB" << std::endl;
			std::cout << "used memory :" << usedMem << " MB" << std::endl;
			std::cout << "memory usage :" << int(memUsePercent*100) << " MB" << std::endl;


			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}else{
			std::cout << "failed  to get memory status";
			break;
		}
	}

}


int main(int argc, char const *argv[])
{
	
	memoryUsageBar();
	return 0;
}