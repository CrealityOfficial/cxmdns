set(SRCS
	mdns/mdns.c
	mdns/mdns.h
	include/cxmdns/cxmdns.h
	cxmdns.cpp)
	
add_definitions(-DCX_MDNS)
set(LIBS )
if(WIN32)
  list(APPEND LIBS iphlpapi ws2_32)
endif()

set(INCS ${CMAKE_CURRENT_SOURCE_DIR}/mdns ${CMAKE_CURRENT_SOURCE_DIR}/include)
	
__add_real_target(cxmdns lib SOURCE ${SRCS} LIB ${LIBS} INC ${INCS} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include )