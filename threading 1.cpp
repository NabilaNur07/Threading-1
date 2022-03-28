#include <iostream>
#include <chrono> // library yang berfungsi untuk menangani tanggal dan waktu
#include <thread>
#include <string>

using namespace std;

//digunakan untuk memunculkan angka yang akan digunakan di thread

static int number;
int get number ( int a)
{
	return number = a;
}

//multi thread -> untuk print thread odd dan even number

void printed ()
{
	using namespace std::literals::chrono_literals;
	
	if ( number %2!=0)
	{
		std::cout << "printed odd number = ... " << number << std::endl;
		std::this_thread::sleep_for(1s);
	}
	
	else
	{
		std::cout << "printed even number = ... " << number << std::endl;
		std::this_thread::sleep_for(2.5s);
	}
}

//single thread -> untuk print thread delay odd dan even number

void print_odd_thread()
{
	
	using namespace std::literals::chrono_literals;
	
	std::cout << " thread odd " << number << " is working " << std::endl;
	std::this_thread::sleep_for(1s);
	
}

void print_even_thread()
{
	
	using namespace std::literals::chrono_literals;
	
	std::cout << " thread even " << number << " is working " << std :: endl;
	std::this_thread::sleep_for(2.5s);
}

int main 
{

for ( int a = 1; a<=20;a++)
{
	get_number(a);
	if ( a % 2 !=0)
	{
		//thread untuk odd number
		std::thread odd ( print_odd_thread);
		odd.join(); // thread ini join ketika thread sebelumnya selesai
	}
	else
	{
		//thread untuk even number
		std::thread even ( print_even_thread);
		even.join(); // thread ini join ketika thread sebelumnya selesai
	}
}

std::cout<< " thread selesai..." << std::endl;

std::cin.get();
return0

}
