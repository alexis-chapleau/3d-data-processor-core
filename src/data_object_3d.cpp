#include "3d_data_processing/data_object_3d.hpp"

void DataObject3D::addVertex(const Vertex& vertex) {
    vertices_.push_back(vertex);
}

void DataObject3D::addFace(const Face& face) {
    faces_.push_back(face);
}

// Implement additional methods as needed
