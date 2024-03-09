#ifndef THREE_D_DATA_OBJECT_HPP
#define THREE_D_DATA_OBJECT_HPP

#include <vector>

struct Vertex {
    float x, y, z;
};

struct Face {
    std::vector<unsigned int> indices;
};

class DataObject3D {
public:
    DataObject3D() = default;
    void addVertex(const Vertex& vertex);
    void addFace(const Face& face);

    // Additional methods for manipulation can be added here

private:
    std::vector<Vertex> vertices_;
    std::vector<Face> faces_;
};

#endif // THREE_D_DATA_OBJECT_HPP
