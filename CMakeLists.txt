cmake_minimum_required( VERSION 3.9 )
project( hivemind CXX )


set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
set( CMAKE_CXX_STANDARD 20 )


include_directories( SYSTEM include )


set( CORE_SRCS
	core/api.cc
)

add_library( hivemind-core ${CORE_SRCS} )


set( TEST_SRCS
	test/test.cc
)

add_executable( test ${TEST_SRCS} )
target_link_libraries( test hivemind-core )
