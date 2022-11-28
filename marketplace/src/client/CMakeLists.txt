add_library(client client.cc client.h)
target_link_libraries(client PUBLIC person)

target_include_directories(client PUBLIC person
		${CMAKE_CURRENT_LIST_DIR}
		${PROJECT_SOURCE_DIR}/src/person)

add_executable(client_main client_main.cc)
target_link_libraries(client_main client)
