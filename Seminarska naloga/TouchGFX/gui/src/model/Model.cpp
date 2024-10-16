#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	temp_hum_data data = {0};
	osStatus_t status= osMessageQueueGet(dht11_data, &data, 0,0);
	if(status == osOK){
		modelListener->set_data(data);
	}
}
