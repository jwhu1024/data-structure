SET(SRC_LIST main.c slist.c)
ADD_EXECUTABLE(slist_main ${SRC_LIST})

ADD_DEFINITIONS(-D__DEBUG__)
#ADD_LIBRARY(jsonC SHARED ${SRC_LIST})
#TARGET_LINK_LIBRARIES(jsonC json-c json)
