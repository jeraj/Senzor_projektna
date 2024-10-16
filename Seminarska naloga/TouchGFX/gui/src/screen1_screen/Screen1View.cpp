#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    //set_data();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::set_data(temp_hum_data data){
	Unicode::snprintf((Unicode::UnicodeChar*)Temperature.getWildcard(), 10, "%02d", data.temperature);
	Temperature.invalidate();
	Unicode::snprintf((Unicode::UnicodeChar*)Humidity.getWildcard(), 10, "%02d", data.humidity);
	Humidity.invalidate();
}
