aux_source_directory(. PROJECT_SRC)

if(MSVC)     
    # Use the static C library for all build types
    foreach(var 
        CMAKE_C_FLAGS CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELEASE
        CMAKE_C_FLAGS_MINSIZEREL CMAKE_C_FLAGS_RELWITHDEBINFO
        CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
        CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO
      )
      if(${var} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${var} "${${var}}")
      endif()
    endforeach()

    # lib
    link_directories(${PROJECT_SOURCE_DIR}/thirdparty/gtest/lib)
else(UNIX)

  link_directories(${PROJECT_SOURCE_DIR}/thirdparty/gtest/a)
  link_libraries(libgtest.a)
  link_libraries(libgtest_main.a)

endif(MSVC)

# include
include_directories(${PROJECT_SOURCE_DIR}/thirdparty/gtest/include)

add_executable(gtest_demo ${PROJECT_SRC})