/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/XXUnknownSuperclass.h>
#import <StoreServices/NSCopying.h>

@class NSArray, NSURL, NSDictionary, NSNumber;

@interface SSDictionaryResponse : XXUnknownSuperclass <NSCopying> {
@private
	NSDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *versionMismatchURL;	// G=0x3f4ed; 
@property(readonly, assign, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;	// G=0x3f2e1; 
@property(readonly, assign, nonatomic) NSArray *pingURLs;	// G=0x3f399; 
@property(readonly, assign, nonatomic) NSNumber *failureType;	// G=0x3f2c5; 
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x3eb09; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x3f791; @synthesize=_dictionary
// declared property getter: - (id)responseDictionary;	// 0x3f791
- (id)_valueForProtocolKey:(id)protocolKey;	// 0x3f73d
- (id)_copyAccount;	// 0x3f5b1
// declared property getter: - (id)versionMismatchURL;	// 0x3f4ed
// declared property getter: - (id)pingURLs;	// 0x3f399
// declared property getter: - (BOOL)isSupportedProtocolVersion;	// 0x3f2e1
// declared property getter: - (id)failureType;	// 0x3f2c5
- (id)actionsWithActionType:(id)actionType;	// 0x3f1c9
// declared property getter: - (id)actions;	// 0x3eb09
- (id)copyWithZone:(NSZone *)zone;	// 0x3ea95
- (void)dealloc;	// 0x3ea49
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x3e9a9
- (id)init;	// 0x3e995
@end
