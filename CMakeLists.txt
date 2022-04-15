set(SRCS
	mdns/mdns.c
	mdns/mdns.h
	include/cxmdns.h
	cxmdns.cpp)
	
set(LIBS )
set(INCS ${CMAKE_CURRENT_SOURCE_DIR}/mdns ${CMAKE_CURRENT_SOURCE_DIR}/include)
if(WIN32)
  list(APPEND LIBS iphlpapi ws2_32)
endif()
	
__add_real_target(cxmdns dll SOURCE ${SRCS} LIB ${LIBS} INC ${INCS} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include )