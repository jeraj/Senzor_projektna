#ifndef MODEL_HPP
#define MODEL_HPP

#include "cmsis_os.h"
#include <gui/data.h>

extern "C" {
    extern osMessageQueueId_t dht11_data;
}

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
