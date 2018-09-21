if(HAVE_CGAL)
    add_executable(CGAL_test CGAL_test.cpp)
    target_link_libraries(CGAL_test  ${CGAL_LIBRARIES})
endif()

add_executable(hello-world hello-world.cpp)
add_executable(gradient-method gradient-method.cpp)
add_executable(zhizhen-func zhizhen-func.cpp)
