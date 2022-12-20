add_library(seller seller.cc seller.h)
target_link_libraries(seller PUBLIC person basket)

target_include_directories(seller PUBLIC 
				${CMAKE_CURRENT_LIST_DIR}
		${PROJECT_SOURCE_DIR}/src/basket
		${PROJECT_SOURCE_DIR}/src/person)

add_executable(seller_main seller_main.cc)
target_link_libraries(seller_main PUBLIC seller person basket)
