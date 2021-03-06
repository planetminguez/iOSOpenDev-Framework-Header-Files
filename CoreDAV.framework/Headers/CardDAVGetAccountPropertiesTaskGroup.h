/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x1529; @synthesize=_directoryGatewayURLs
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x1519; @synthesize=_addressBookHomes
// declared property getter: - (id)directoryGatewayURLs;	// 0x1529
// declared property getter: - (id)addressBookHomes;	// 0x1519
- (id)directoryGatewayURL;	// 0x14f9
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x1341
- (id)homeSet;	// 0x1331
- (id)_copyAccountPropertiesPropFindElements;	// 0x1259
- (id)description;	// 0x11bd
- (void)dealloc;	// 0x115d
@end
