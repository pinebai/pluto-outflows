# -- Simulation dependent settings --

set(WITH_PARALLEL               OFF)
set(WITH_PNG                    OFF)
set(WITH_HDF5                   ON)
set(WITH_ASYNC_IO               OFF)
set(WITH_CHOMBO                 OFF)

set(WITH_PHYSICS                HD)
set(WITH_COOLING                TABULATED)
set(WITH_INTERPOLATION          PARABOLIC)
set(WITH_TIME_STEPPING          RK3)

set(WITH_PARTICLES              OFF)
set(WITH_FARGO                  OFF)
set(WITH_SHEARING_BOX           OFF)
set(WITH_RESISTIVITY            OFF)
set(WITH_FD                     OFF)


# -- physics dependent declarations --

set(WITH_EOS                    IDEAL)
set(WITH_THERMAL_CONDUCTION     OFF)
set(WITH_VISCOSITY              OFF)
set(WITH_ROTATING_FRAME         OFF)
set(WITH_CT                     OFF)
set(WITH_GLM                    OFF)


# Executable output location
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PLUTO_SOURCE_DIR}/Test_Problems/${PROBLEM})

# Overridden source files
set(OVERRIDE_FILES
        cmd_line_opt.c
        input_data.c
        jet_domain.c
        main.c
        set_grid.c
        startup.c
        userdef_output.c
        )

