add_library(market market.cc market.h)
target_link_libraries(market PUBLIC product)
target_include_directories(market PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	${PROJECT_SOURCE_DIR}/src/product
	${PROJECT_SOURCE_DIR}/src/client
	${PROJECT_SOURCE_DIR}/src/seller)
	
add_executable(market_main market_main.cc)
target_link_libraries(market_main PUBLIC market product)
