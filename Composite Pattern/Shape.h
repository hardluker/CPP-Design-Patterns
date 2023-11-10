#pragma once
#include <iostream>
#include "Object.h"
using namespace std;
class Shape : public Object
{
public:
	void render() override;
};

