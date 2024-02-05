cmake_minimum_required(VERSION 3.0.0)
project(main)

#设置exe输出目录
# set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")  
 
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
# aux_source_directory(./ DIR_SRCS)
set(CMAKE_CXX_STANDARD 11)
set(HOME /home/key/2_4/_11_24)
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)
aux_source_directory($(CMAKE_CURRENT_SOURCE_DIR)/src SRC_LIST)
add_executable(main main.cpp ${SRC_LIST})
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
