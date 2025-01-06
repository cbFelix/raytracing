#include <object.hpp>
#include <light/light.hpp>

#include <vector>

class Scene {
public:
        explicit Scene() {}

        

private:
        std::vector<Object> _objects;
        std::vector<Light> _light;

};