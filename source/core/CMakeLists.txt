add_library(lethe-core
  # Sources
  bdf.cc
  boundary_conditions.cc
  dem_properties.cc
  dimensionality.cc
  ib_particle.cc
  grids.cc
  manifolds.cc
  mesh_controller.cc
  parameters.cc
  parameters_lagrangian.cc
  pvd_handler.cc
  shape.cc
  shape_parsing.cc
  simulation_control.cc
  solutions_output.cc
  utilities.cc
  # Headers
  ../../include/core/ale.h
  ../../include/core/auxiliary_math_functions.h
  ../../include/core/bdf.h
  ../../include/core/boundary_conditions.h
  ../../include/core/checkpoint_control.h
  ../../include/core/dem_properties.h
  ../../include/core/dimensionality.h
  ../../include/core/exceptions.h
  ../../include/core/grids.h
  ../../include/core/ib_particle.h
  ../../include/core/inexact_newton_non_linear_solver_strategy.h
  ../../include/core/interface_property_model.h
  ../../include/core/kinsol_newton_non_linear_solver_strategy.h
  ../../include/core/linear_solver_strategy.h
  ../../include/core/manifolds.h
  ../../include/core/mesh_controller.h
  ../../include/core/mobility_cahn_hilliard_model.h
  ../../include/core/multiphysics.h
  ../../include/core/newton_non_linear_solver_strategy.h
  ../../include/core/physics_solver_strategy.h
  ../../include/core/output_struct.h
  ../../include/core/parameters.h
  ../../include/core/parameters_lagrangian.h
  ../../include/core/periodic_hills_grid.h
  ../../include/core/physics_solver.h
  ../../include/core/pvd_handler.h
  ../../include/core/shape.h
  ../../include/core/shape_parsing.h
  ../../include/core/simulation_control.h
  ../../include/core/solutions_output.h
  ../../include/core/tensors_and_points_dimension_manipulation.h
  ../../include/core/time_integration_utilities.h
  ../../include/core/utilities.h)

deal_ii_setup_target(lethe-core)
target_include_directories(lethe-core PUBLIC ../../include)

# Don't add Boost in TARGET_LINK_LIBRARIES (here and in the other Lethe
# libraries) because it's added anyway by DEAL_II_SETUP_TARGET as part
# of deal.II's dependencies.
