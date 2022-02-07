
#set(CXX_FILES pluginMain.cpp)
file(GLOB_RECURSE SOURCE_FILE "*.hpp" "*.cpp")

find_package(Maya REQUIRED)
# QT
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILE})

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
            Maya::Maya
)

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
            Maya::Maya
            Qt5::Core
            Qt5::Gui
            Qt5::Widgets
)

set_target_properties(${PROJECT_NAME} PROPERTIES
        SUFFIX ".mll")


