#ifndef FIFTEEN_PLUGIN_H
#define FIFTEEN_PLUGIN_H
#include <QQmlExtensionPlugin>

class FifteenPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // FIFTEEN_PLUGIN_H
