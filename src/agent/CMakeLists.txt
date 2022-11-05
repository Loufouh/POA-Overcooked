add_library(
        agent
        rules/Condition/Condition.cpp rules/Condition/Condition.h
        rules/Action/Action.cpp rules/Action/Action.h
        rules/Rule/Rule.cpp rules/Rule/Rule.h

        rules/Set/Set.cpp rules/Set/Set.h

        Agent/Agent.cpp Agent/Agent.h
        rules/Condition/BeginCookingCondition/BeginCookingCondition.cpp rules/Condition/BeginCookingCondition/BeginCookingCondition.h rules/Action/BeginCookingAction/BeginCookingAction.cpp rules/Action/BeginCookingAction/BeginCookingAction.h rules/Rule/BeginCookingRule/BeginCookingRule.cpp rules/Rule/BeginCookingRule/BeginCookingRule.h
        rules/Condition/EmptyBoxCondition/EmptyBoxCondition.cpp rules/Condition/EmptyBoxCondition/EmptyBoxCondition.h rules/Action/EmptyBoxAction/EmptyBoxAction.cpp rules/Action/EmptyBoxAction/EmptyBoxAction.h rules/Rule/EmptyBoxRule/EmptyBoxRule.cpp rules/Rule/EmptyBoxRule/EmptyBoxRule.h
        rules/Condition/HasProblemFrierCondition/HasProblemFrierCondition.cpp rules/Condition/HasProblemFrierCondition/HasProblemFrierCondition.h rules/Action/HasProblemFrierAction/HasProblemFrierAction.cpp rules/Action/HasProblemFrierAction/HasProblemFrierAction.h rules/Rule/HasProblemFrierRule/HasProblemFrierRule.cpp rules/Rule/HasProblemFrierRule/HasProblemFrierRule.h
        rules/Condition/HasProblemPanCondition/HasProblemPanCondition.cpp rules/Condition/HasProblemPanCondition/HasProblemPanCondition.h rules/Action/HasProblemPanAction/HasProblemPanAction.cpp rules/Action/HasProblemPanAction/HasProblemPanAction.h rules/Rule/HasProblemPanRule/HasProblemPanRule.cpp rules/Rule/HasProblemPanRule/HasProblemPanRule.h
        rules/Condition/CookInFrierCondition/CookInFrierCondition.cpp rules/Condition/CookInFrierCondition/CookInFrierCondition.h rules/Action/CookInFrierAction/CookInFrierAction.cpp rules/Action/CookInFrierAction/CookInFrierAction.h rules/Rule/CookInFrierRule/CookInFrierRule.cpp rules/Rule/CookInFrierRule/CookInFrierRule.h
        rules/Condition/CookInPanCondition/CookInPanCondition.cpp rules/Condition/CookInPanCondition/CookInPanCondition.h rules/Action/CookInPanAction/CookInPanAction.cpp rules/Action/CookInPanAction/CookInPanAction.h rules/Rule/CookInPanRule/CookInPanRule.cpp rules/Rule/CookInPanRule/CookInPanRule.h
        rules/Condition/PutFrierInPlateCondition/PutFrierInPlateCondition.cpp rules/Condition/PutFrierInPlateCondition/PutFrierInPlateCondition.h rules/Action/PutFrierInPlateAction/PutFrierInPlateAction.cpp rules/Action/PutFrierInPlateAction/PutFrierInPlateAction.h rules/Rule/PutFrierInPlateRule/PutFrierInPlateRule.cpp rules/Rule/PutFrierInPlateRule/PutFrierInPlateRule.h
        rules/Condition/PutPanInPlateCondition/PutPanInPlateCondition.cpp rules/Condition/PutPanInPlateCondition/PutPanInPlateCondition.h rules/Action/PutPanInPlateAction/PutPanInPlateAction.cpp rules/Action/PutPanInPlateAction/PutPanInPlateAction.h rules/Rule/PutPanInPlateRule/PutPanInPlateRule.cpp rules/Rule/PutPanInPlateRule/PutPanInPlateRule.h
        rules/Condition/PlateIsReadyCondition/PlateIsReadyCondition.cpp rules/Condition/PlateIsReadyCondition/PlateIsReadyCondition.h rules/Action/PlateIsReadyAction/PlateIsReadyAction.cpp rules/Action/PlateIsReadyAction/PlateIsReadyAction.h rules/Rule/PlateIsReadyRule/PlateIsReadyRule.cpp rules/Rule/PlateIsReadyRule/PlateIsReadyRule.h
        rules/Condition/PutPlateOnTableCondition/PutPlateOnTableCondition.cpp rules/Condition/PutPlateOnTableCondition/PutPlateOnTableCondition.h rules/Action/PutPlateOnTableAction/PutPlateOnTableAction.cpp rules/Action/PutPlateOnTableAction/PutPlateOnTableAction.h rules/Rule/PutPlateOnTableRule/PutPlateOnTableRule.cpp rules/Rule/PutPlateOnTableRule/PutPlateOnTableRule.h
)
target_link_libraries(
        agent
        environment
)
target_include_directories(
        agent PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/agent"
)