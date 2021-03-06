#define  PHYSICS                 HD
#define  DIMENSIONS              2
#define  COMPONENTS              2
#define  GEOMETRY                SPHERICAL
#define  BODY_FORCE              POTENTIAL
#define  COOLING                 NO
#define  RECONSTRUCTION          PARABOLIC
#define  TIME_STEPPING           RK3
#define  DIMENSIONAL_SPLITTING   YES
#define  NTRACER                 0
#define  USER_DEF_PARAMETERS     4

/* -- physics dependent declarations -- */

#define  EOS                     IDEAL
#define  ENTROPY_SWITCH          NO
#define  THERMAL_CONDUCTION      NO
#define  VISCOSITY               NO
#define  ROTATING_FRAME          NO

/* -- user-defined parameters (labels) -- */

#define  PAR_MACH             0
#define  PAR_DENS             1
#define  PAR_DRATIO           2
#define  PAR_RCORE            3

/* [Beg] user-defined constants (do not change this line) */

#define  MU_NORM                 0.60364
#define  UNIT_DENSITY            1.
#define  UNIT_LENGTH             1.
#define  UNIT_VELOCITY           1.

/* [End] user-defined constants (do not change this line) */

/* -- supplementary constants (user editable) -- */ 

#define  INITIAL_SMOOTHING      NO
#define  WARNING_MESSAGES       NO
#define  PRINT_TO_FILE          YES
#define  INTERNAL_BOUNDARY      YES
#define  SHOCK_FLATTENING       MULTID
#define  ARTIFICIAL_VISC        NO
#define  LIMITER                MC_LIM
#define  SHOW_TIME_STEPS        YES
#define  CHAR_LIMITING          YES
#define  PPM_ORDER              4
