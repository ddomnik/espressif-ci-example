file(REMOVE_RECURSE
  "libunit_tests.dll.a"
  "unit_tests.exe"
  "unit_tests.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/unit_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
