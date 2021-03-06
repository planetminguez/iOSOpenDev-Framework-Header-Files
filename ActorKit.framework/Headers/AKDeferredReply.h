/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <ActorKit/XXUnknownSuperclass.h>

@class NSConditionLock, NSInvocation;

@interface AKDeferredReply : XXUnknownSuperclass {
@private
	NSInvocation *_invocation;	// 4 = 0x4
	NSConditionLock *_blockingLock;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x2cb5; converted property
+ (id)currentReply;	// 0x2fb1
+ (void)initialize;	// 0x2e65
- (void)becomeCurrentReply;	// 0x2cc5
- (void)resignCurrentReply;	// 0x2cd9
// converted property getter: - (id)invocation;	// 0x2cb5
- (void)setReturnValue:(void *)value;	// 0x2ced
- (void)sendReply;	// 0x2d31
- (id)init;	// 0x2d95
- (id)initWithInvocation:(id)invocation andBlockingLock:(id)lock;	// 0x2de5
- (void)dealloc;	// 0x2fc1
@end
