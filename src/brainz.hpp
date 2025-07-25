#pragma once

namespace brainz {
    enum ModuleStages {
        MODULE_STAGE_INIT,
        MODULE_STAGE_ROUND_1,
        MODULE_STAGE_ROUND_2,
        MODULE_STAGE_ONE_SHOT_END,
        MODULE_STAGE_STATES_COUNT
    };

    enum ModuleStates {
        MODULE_STATE_READY,
        MODULE_STATE_ROUND_1_START,
        MODULE_STATE_ROUND_1_STEP_A,
        MODULE_STATE_ROUND_1_STEP_B,
        MODULE_STATE_ROUND_1_STEP_C,
        MODULE_STATE_ROUND_1_END,
        MODULE_STATE_ROUND_2_START,
        MODULE_STATE_ROUND_2_STEP_C,
        MODULE_STATE_ROUND_2_STEP_B,
        MODULE_STATE_ROUND_2_STEP_A,
        MODULE_STATE_ROUND_2_END,
        MODULE_STATE_WAIT_FOR_RESET
    };

    enum StepStates {
        STEP_STATE_READY,
        STEP_STATE_TRIGGER_SENT,
        STEP_STATE_TRIGGER_DONE
    };

    enum StepDirections {
        DIRECTION_BIDIRECTIONAL,
        DIRECTION_FORWARD,
        DIRECTION_BACKWARD,
        DIRECTIONS_COUNT
    };

    static const std::vector<std::string> stateToolTips{
            "Disabled",
            "Enabled"
    };

    static const std::vector<std::string> directionToolTips{
            "Bidirectional",
            "Forward",
            "Backward"
    };
}