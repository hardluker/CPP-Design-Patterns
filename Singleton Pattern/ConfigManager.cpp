#include "ConfigManager.h"

Object* ConfigManager::set(const string& key, Object* value)
{
    settings.insert(pair<const string&, Object*>(key, value));
}

Object* ConfigManager::get(const string& key)
{
    return settings[key];
}

ConfigManager* ConfigManager::getInstance()
{
    return instance;
}

ConfigManager::~ConfigManager()
{
    delete instance;
}
