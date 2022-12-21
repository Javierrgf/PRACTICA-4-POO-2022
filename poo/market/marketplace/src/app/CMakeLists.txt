add_executable(app app_main.cc)
target_include_directories(app PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	${PROJECT_SOURCE_DIR}/src/product
	${PROJECT_SOURCE_DIR}/src/basket
	${PROJECT_SOURCE_DIR}/src/person
	${PROJECT_SOURCE_DIR}/src/client
	${PROJECT_SOURCE_DIR}/src/seller
	${PROJECT_SOURCE_DIR}/src/tv
	${PROJECT_SOURCE_DIR}/src/market
	${PROJECT_SOURCE_DIR}/src/computer)
	

target_link_libraries(app product basket person client seller tv market computer)
