#ifndef STL_CORE_H
#define STL_CORE_H

// AeroCortex X1 - Spatial-Temporal Language (STL) Core Interface
// Mission Planning & Trajectory Optimization

typedef enum {
    STL_MISSION_WAYPOINT,
    STL_MISSION_SURVEY_GRID,
    STL_MISSION_INTERCEPT
} stl_mission_type_t;

typedef enum {
    STL_ACTION_HOVER,
    STL_ACTION_PHOTO,
    STL_ACTION_DEPLOY_PAYLOAD
} stl_action_t;

typedef struct {
    double lat;
    double lon;
    double alt;
} stl_waypoint_t;

typedef struct {
    stl_mission_type_t type;
    int waypoint_count;
    // Internal buffer pointers managed by UMA
    void* trajectory_buffer; 
} stl_mission_t;

// API Function Prototypes
void stl_mission_init(stl_mission_t* mission, stl_mission_type_t type);
void stl_mission_add_waypoint(stl_mission_t* mission, stl_waypoint_t* wp, stl_action_t action);
void stl_mission_upload(stl_mission_t* mission);
void stl_mission_execute(int execution_mode);

/* Example Usage:
 * stl_mission_t mission;
 * stl_mission_init(&mission, STL_MISSION_WAYPOINT);
 * stl_waypoint_t wp1 = {.lat = 37.7749, .lon = -122.4194, .alt = 50.0};
 * stl_mission_add_waypoint(&mission, &wp1, STL_ACTION_HOVER);
 * stl_mission_execute(STL_EXEC_IMMEDIATE);
 */

#endif // STL_CORE_H
