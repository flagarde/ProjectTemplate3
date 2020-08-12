cmake_minimum_required(VERSION 3.16...3.18.1)

project(ProjectTemplate VERSION "0.1" DESCRIPTION "Template for C++ projects" HOMEPAGE_URL "https://github.com/flagarde/ProjectTemplate" LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(DownloadCMakeCM)

option(BUILD_DOCS "Build documentation" ON)

add_subdirectory(src)

add_subdirectory(apps)

if(BUILD_DOCS)
  add_subdirectory(docs)
endif()
