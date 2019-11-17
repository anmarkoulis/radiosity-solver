project(physics)

set(SOURCE_FILES
    formfactor.hpp
    formfactor.cpp
    material.cpp
    material.hpp
    patch.cpp
    patch.hpp
)

add_library(physics SHARED ${SOURCE_FILES})

install(TARGETS physics DESTINATION ${RADIOSITY_INSTALL_LIB_DIR})
install(FILES formfactor.hpp material.hpp patch.hpp DESTINATION ${RADIOSITY_INSTALL_INCLUDE_DIR})
