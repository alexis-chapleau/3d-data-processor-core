#include "3d_data_processing/json_parser.hpp"
#include <fstream>

DataObject3D JSONParser::parseFromJson(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file: " + filePath);
    }

    nlohmann::json j;
    file >> j;

    DataObject3D model;

    for (const auto& v : j["vertices"]) {
        Vertex vertex = {v["x"], v["y"], v["z"]};
        model.addVertex(vertex);
    }

    for (const auto& f : j["faces"]) {
        Face face;
        for (const auto index : f["indices"]) {
            face.indices.push_back(index);
        }
        model.addFace(face);
    }

    return model;
}
