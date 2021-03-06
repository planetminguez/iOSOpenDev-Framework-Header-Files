/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CPProgressContext.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray, NSDate, CPProgressStage;

__attribute__((visibility("hidden")))
@interface CPProgressContext : XXUnknownSuperclass {
@private
	CPProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	NSMutableArray *m_stackOfBranches;	// 12 = 0xc
}
+ (void)createContextForCurrentThread;	// 0x2cd3fd
+ (void)removeContextForCurrentThread;	// 0x2cd401
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x2cd405
+ (void)removeProgressObserver:(id)observer;	// 0x2cd409
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0xeda1d
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0xd8fc1
+ (void)endStage;	// 0xe72dd
+ (id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x2cd40d
+ (void)endBranch:(id)branch;	// 0x2cd411
+ (void)pushBranch:(id)branch;	// 0xe836d
+ (void)popBranch;	// 0xf7a11
+ (void)advanceProgress:(double)progress;	// 0xdb015
+ (void)setProgress:(double)progress;	// 0x124505
+ (void)setMessage:(id)message;	// 0x2cd415
+ (double)currentPosition;	// 0x2cd419
@end

@interface CPProgressContext (Private)
+ (id)contextForCurrentThread;	// 0x2cd9a1
+ (id)stageForCurrentThread;	// 0x2cd9f1
- (id)init;	// 0x2cd825
- (void)dealloc;	// 0x2cd8cd
- (id)currentStage;	// 0x2cd42d
- (id)rootStage;	// 0x2cd961
- (void)reportProgress:(double)progress;	// 0x2cd43d
@end
