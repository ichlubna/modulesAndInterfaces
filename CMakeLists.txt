cmake_minimum_required(VERSION 4.0)
project(example)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PUBLIC FILE_SET CXX_MODULES FILES
    src/myModule.cppm
    src/myModule.interface.cppm
    src/myModule.partition1.cppm
    src/myModule.partition2.cppm
    )

target_sources(${PROJECT_NAME}
    PUBLIC
	src/main.cpp
	src/myModule.partition1.cpp
    src/myModule.partition2.cpp
	)

target_compile_features(${PROJECT_NAME}
    PRIVATE cxx_std_26
)

target_compile_options(${PROJECT_NAME}
	PRIVATE
)
