set(TARGET_NAME MayaQT)

set(CXX_FILES
        pluginMain.cpp
        mainWindow.cpp
        mainWindowCommand.cpp
        )

set(CXX_HEADERS
        mainWindow.h
        mainWindowCommand.h
        )

find_package(Maya REQUIRED)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)



# 此项为更改编译出来的 mll 文件的名称
add_library(${TARGET_NAME} SHARED ${CXX_FILES} ${CXX_HEADERS})

target_include_directories(
        ${TARGET_NAME}
        PRIVATE
            Maya::Maya
)

target_link_libraries(
        ${TARGET_NAME}
        PRIVATE
            Maya::Maya
            Qt5::Core
            Qt5::Gui
            Qt5::Widgets
)

MAYA_PLUGIN(${TARGET_NAME})