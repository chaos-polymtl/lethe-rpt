foreach(_target IN ITEMS
    lethe-rpt-3d
    lethe-rpt-cell-reconstruction-3d
    lethe-rpt-fem-reconstruction-3d
    lethe-rpt-l2-projection-3d
    )
  add_subdirectory(${_target})
  install(TARGETS ${_target})
endforeach()
