// C++ program to use std::promise and std::future to
// communicate between threads.
#include <future>
#include <thread>
#include <chrono>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>



using namespace std;


void download_file(const int time, const std::string& file_name, std::promise<std::string> &&p)
{
    // Simulating download time
    this_thread::sleep_for(chrono::seconds(time));

    // Constructing the message
    std::ostringstream oss;
    oss << "File " << file_name << " downloaded in " << time << " seconds\n";

    // Setting the value for the promise
    p.set_value(oss.str());
}

int main(int argc, char const *argv[])
{
	{
		vector<std::jthread>  download_threads;
		vector<future<string>>  futures;

		const vector files_to_download = {"file1.zip","file1.mp3","file1.jpg","file1.pdf"};

		int time = 0;

		for (const auto& file :files_to_download)
		{

			promise<string> prom;
			futures.push_back(prom.get_future());
			download_threads.emplace_back(download_file, time++, file, std::move(prom));
		}

		for (auto& fut : futures)
		{
			cout << fut.get();
		}
	}

	cout << "All downloads are completed \n" ;
	
	

	
	return 0;
}






