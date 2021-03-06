/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@class NSMutableArray;

@interface IMActionsController : NSObject {
	NSMutableArray *_handlers;	// 4 = 0x4
}
+ (id)actionsController;	// 0x2b89
- (id)performActionsForEvent:(int)event withIMHandle:(id)imhandle withObject:(id)object withChat:(id)chat silent:(BOOL)silent;	// 0x10929
- (id)performActionsForEvent:(int)event withIMHandle:(id)imhandle withObject:(id)object;	// 0x36b31
- (id)performActionsForEvent:(int)event withIMHandle:(id)imhandle;	// 0x10901
- (void)removeHandler:(id)handler;	// 0x36ad5
- (void)addHandler:(id)handler;	// 0x2bed
- (void)dealloc;	// 0x36a89
- (BOOL)retainWeakReference;	// 0x36a85
- (BOOL)allowsWeakReference;	// 0x36a81
@end
