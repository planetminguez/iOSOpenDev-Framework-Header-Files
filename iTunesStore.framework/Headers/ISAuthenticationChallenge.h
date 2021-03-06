/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/XXUnknownSuperclass.h>

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : XXUnknownSuperclass {
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x173c9; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x17405; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x17401; 
@property(readonly, assign) int failureCount;	// G=0x173bd; 
@property(readonly, assign) NSString *user;	// G=0x173cd; 
@property(readonly, assign) NSString *password;	// G=0x173c5; 
@property(readonly, assign) BOOL hasPassword;	// G=0x173c1; 
@property(retain) NSString *localizedTitle;	// G=0x17441; S=0x17455; @synthesize=_localizedTitle
@property(retain) NSString *localizedMessage;	// G=0x17409; S=0x1741d; @synthesize=_localizedMessage
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x17455
// declared property getter: - (id)localizedTitle;	// 0x17441
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x1741d
// declared property getter: - (id)localizedMessage;	// 0x17409
// declared property getter: - (BOOL)userNameIsEmail;	// 0x17405
// declared property getter: - (BOOL)userNameIsEditable;	// 0x17401
- (void)useCredential:(id)credential;	// 0x173d1
// declared property getter: - (id)user;	// 0x173cd
// declared property getter: - (id)sender;	// 0x173c9
// declared property getter: - (id)password;	// 0x173c5
// declared property getter: - (BOOL)hasPassword;	// 0x173c1
// declared property getter: - (int)failureCount;	// 0x173bd
- (void)cancelAuthentication;	// 0x17391
- (void)dealloc;	// 0x17339
@end
