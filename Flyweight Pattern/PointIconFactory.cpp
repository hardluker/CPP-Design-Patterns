#include "PointIconFactory.h"


PointIcon PointIconFactory::getPointIcon(PointType type)
{
    map<PointType, PointIcon>::iterator iterator = icons.find(type);
    //If the key does not exist
    if (iterator == icons.end()) {
        //add the value to the map
        //Normally instead of passing "null" icon this would pull the data based on the type selected.
        PointIcon icon{ type,"null" };
        this->icons[type] = icon;
    }
    //If the key does exist
    else if (iterator != icons.end())
        return iterator->second;
}
