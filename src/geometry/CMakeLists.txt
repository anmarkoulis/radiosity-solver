set(GEOMETRIC_ENTITIES 
        point.cpp
        point.hpp 
        point3d.cpp 
        point3d.hpp
        shape.cpp
        shape.hpp
        quad.cpp
        quad.hpp
        triangle.cpp
        triangle.hpp)

project(geometry)


add_library(geometry SHARED ${GEOMETRIC_ENTITIES})

install(TARGETS geometry DESTINATION ${RADIOSITY_INSTALL_LIB_DIR})
install(FILES point.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
install(FILES point3d.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
install(FILES shape.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
install(FILES point3d.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
install(FILES quad.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
install(FILES triangle.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})


        
