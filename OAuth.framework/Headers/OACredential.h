/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */



@class NSString;

@interface OACredential : NSObject {
	NSString *_consumerKey;	// 4 = 0x4
	NSString *_consumerSecret;	// 8 = 0x8
	NSString *_oauthToken;	// 12 = 0xc
	NSString *_oauthTokenSecret;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *oauthTokenSecret;	// G=0x17a5; S=0x17b5; @synthesize=_oauthTokenSecret
@property(copy, nonatomic) NSString *oauthToken;	// G=0x1771; S=0x1781; @synthesize=_oauthToken
@property(copy, nonatomic) NSString *consumerSecret;	// G=0x173d; S=0x174d; @synthesize=_consumerSecret
@property(copy, nonatomic) NSString *consumerKey;	// G=0x1709; S=0x1719; @synthesize=_consumerKey
// declared property setter: - (void)setOauthTokenSecret:(id)secret;	// 0x17b5
// declared property getter: - (id)oauthTokenSecret;	// 0x17a5
// declared property setter: - (void)setOauthToken:(id)token;	// 0x1781
// declared property getter: - (id)oauthToken;	// 0x1771
// declared property setter: - (void)setConsumerSecret:(id)secret;	// 0x174d
// declared property getter: - (id)consumerSecret;	// 0x173d
// declared property setter: - (void)setConsumerKey:(id)key;	// 0x1719
// declared property getter: - (id)consumerKey;	// 0x1709
- (id)signingKey;	// 0x164d
- (void)dealloc;	// 0x15c5
@end