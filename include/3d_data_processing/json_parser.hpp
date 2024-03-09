#ifndef JSON_PARSER_HPP
#define JSON_PARSER_HPP

#include "3d_data_processing/data_object_3d.hpp"
#include <string>
#include "json/json.hpp" // Ensure this path matches where the JSON library is located

class JSONParser {
public:
    static DataObject3D parseFromJson(const std::string& filename);
};

#endif // JSON_PARSER_HPP
