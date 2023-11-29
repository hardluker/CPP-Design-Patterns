#pragma once
#include "Object.h"
#include <string>
#include <map>
using namespace std;
class ConfigManager
{
public:
	Object* set(const string& key, Object* value);
	Object* get(const string& key);
	static ConfigManager* getInstance();
private:
	static ConfigManager* instance;
	map<string, Object*> settings;
	ConfigManager();
	~ConfigManager();

};

