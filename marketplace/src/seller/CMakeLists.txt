add_library(seller seller.cc seller.h)
target_link_libraries(seller PUBLIC person)

target_include_directories(seller PUBLIC person
		${CMAKE_CURRENT_LIST_DIR}
		${PROJECT_SOURCE_DIR}/src/person)

add_executable(seller_main seller_main.cc)
target_link_libraries(seller_main seller)
