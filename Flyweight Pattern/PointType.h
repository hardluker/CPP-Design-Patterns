#pragma once
#include <string>
enum class PointType
{
hospital,
cafe,
restaurant,
null
};
class PointTypeUtils {
public:
    static std::string getTypeName(PointType type) {
        switch (type) {
        case PointType::hospital:
            return "Hospital";
        case PointType::cafe:
            return "Cafe";
        case PointType::restaurant:
            return "Restaurant";
        default:
            return "Unknown";
        }
    }
};

