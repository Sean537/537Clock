#include "include/tclass.h"
#include <thread>
#include <chrono>
void tsleep(int milliseconds){  
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));  
}
void tprint(std::string content, int SleepTime, int times){  
	for(int i=0;i<times;i++)
		std::cout<<content; //此函数作用是：在输出times个content后，
	tsleep(SleepTime);        //再去等待SleepTime毫秒 
}
