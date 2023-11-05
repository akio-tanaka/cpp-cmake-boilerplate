#include "lib.h"
#include <sstream>
#include <TopoDS_Shape.hxx>

namespace mylib {
    std::string foo() {
        TopoDS_Shape shape;

        std::stringstream ss;
        ss << "Hello World! (" << shape.IsNull() << ")";
        return ss.str();
        // return "Hello World!";
    }
}