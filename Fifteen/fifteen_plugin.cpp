#include "fifteen_plugin.h"
#include "fifteen.h"
#include <qqml.h>

void FifteenPlugin::registerTypes(const char *uri)
{
    // @uri task.two.qml.cpp
    qmlRegisterType<Fifteen>(uri, 1, 0, "Fifteen");
}

