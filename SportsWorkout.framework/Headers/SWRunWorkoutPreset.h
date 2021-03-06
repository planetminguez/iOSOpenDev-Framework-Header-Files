/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/XXUnknownSuperclass.h>
#import <SportsWorkout/SWRunWorkoutObserver.h>

@class NSDecimalNumber, NSMutableArray, NSString, SWVoicePromptController;

@interface SWRunWorkoutPreset : XXUnknownSuperclass <SWRunWorkoutObserver> {
	NSString *_presetGoal;	// 4 = 0x4
	unsigned _templateId;	// 8 = 0x8
	NSString *_templateName;	// 12 = 0xc
	NSString *_workoutName;	// 16 = 0x10
	float _goal;	// 20 = 0x14
	NSDecimalNumber *_goalInDisplayUnits;	// 24 = 0x18
	NSString *_goalType;	// 28 = 0x1c
	SWVoicePromptController *_promptController;	// 32 = 0x20
	NSMutableArray *_timeObservationTargets;	// 36 = 0x24
	NSMutableArray *_distanceObservationTargets;	// 40 = 0x28
	NSMutableArray *_calorieObservationTargets;	// 44 = 0x2c
	NSMutableArray *_stateObservationTargets;	// 48 = 0x30
	NSMutableArray *_userEventObservationTargets;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) NSString *distanceDisplayUnits;	// G=0xd271; @dynamic
@property(readonly, assign, nonatomic) NSString *goalType;	// G=0xebad; @synthesize=_goalType
@property(readonly, assign, nonatomic) float goal;	// G=0xeb9d; @synthesize=_goal
@property(readonly, assign, nonatomic) NSString *workoutName;	// G=0xebdd; @synthesize=_workoutName
@property(readonly, assign, nonatomic) NSString *templateName;	// G=0xebcd; @synthesize=_templateName
@property(readonly, assign, nonatomic) unsigned templateId;	// G=0xebbd; @synthesize=_templateId
@property(readonly, assign, nonatomic) NSString *presetGoal;	// G=0xeb8d; @synthesize=_presetGoal
+ (id)presetForGoal:(id)goal;	// 0xc9c9
+ (id)presetForCustomGoalWithAmount:(id)amount units:(id)units;	// 0xc8c5
// declared property getter: - (id)workoutName;	// 0xebdd
// declared property getter: - (id)templateName;	// 0xebcd
// declared property getter: - (unsigned)templateId;	// 0xebbd
// declared property getter: - (id)goalType;	// 0xebad
// declared property getter: - (float)goal;	// 0xeb9d
// declared property getter: - (id)presetGoal;	// 0xeb8d
- (id)_paceInDisplayUnits:(id)displayUnits forWorkoutData:(id)workoutData;	// 0xeb15
- (id)_paceDisplayUnitsForWorkoutData:(id)workoutData;	// 0xead1
- (id)_distanceInDisplayUnits:(id)displayUnits forWorkoutData:(id)workoutData;	// 0xea59
- (id)_distanceDisplayUnitsForWorkoutData:(id)workoutData;	// 0xea15
- (void)_setUpGoalCompletedTargetWithUnits:(id)units;	// 0xe82d
- (void)_setUpGoalCompletedTarget;	// 0xe80d
- (void)_setUpFinalRushTargets;	// 0xe36d
- (void)_setUpHalfwayTargetWithUnits:(id)units;	// 0xe169
- (void)_setUpHalfwayTarget;	// 0xe149
- (void)_setUpBenchmarkTargetsForKilometerDistanceWorkout;	// 0xe0f5
- (void)_setUpBenchmarkTargets;	// 0xe0b5
- (void)_fireAttaboysForWorkoutController:(id)workoutController;	// 0xda35
- (void)_fireOnDemandPromptForWorkoutController:(id)workoutController target:(id)target;	// 0xda09
- (void)_stopAllPromptsOrFireOnDemandPromptForWorkoutController:(id)workoutController target:(id)target;	// 0xd9a1
- (void)_workoutController:(id)controller observeUserEvent:(id)event targets:(id)targets;	// 0xd899
- (void)_observeStateChangeForWorkoutController:(id)workoutController oldState:(id)state newState:(id)state3 targets:(id)targets;	// 0xd755
- (void)_observeSteadilyIncreasingValueForRunWorkoutController:(id)runWorkoutController withCurrentWorkoutValue:(id)currentWorkoutValue targets:(id)targets;	// 0xd431
- (void)_addUserEventObservationTarget:(id)target;	// 0xd411
- (void)_addStateObservationTarget:(id)target;	// 0xd3f1
- (void)_addCalorieObservationTarget:(id)target;	// 0xd3d1
- (void)_addDistanceObservationTarget:(id)target;	// 0xd3b1
- (void)_addTimeObservationTarget:(id)target;	// 0xd391
- (void)observeRunWorkoutUserEvent:(id)event userEvent:(id)event2;	// 0xd361
- (void)observeRunWorkoutStateChange:(id)change oldState:(id)state newState:(id)state3;	// 0xd331
- (void)observeRunWorkoutControllerDataChange:(id)change elapsedTime:(unsigned)time pace:(float)pace distance:(float)distance calories:(float)calories location:(id)location;	// 0xd275
// declared property getter: - (id)distanceDisplayUnits;	// 0xd271
- (void)dealloc;	// 0xd185
- (id)initWithPresetGoal:(id)presetGoal goal:(float)goal goalType:(id)type goalInDisplayUnits:(id)displayUnits templateId:(unsigned)anId templateName:(id)name workoutName:(id)name7;	// 0xcfc1
@end
