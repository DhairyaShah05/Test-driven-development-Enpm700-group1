if(EXISTS "/home/dhairya/UMD/enpm_700/group_project/cpp-boilerplate-v2/build/test/cpp-test[1]_tests.cmake")
  include("/home/dhairya/UMD/enpm_700/group_project/cpp-boilerplate-v2/build/test/cpp-test[1]_tests.cmake")
else()
  add_test(cpp-test_NOT_BUILT cpp-test_NOT_BUILT)
endif()
