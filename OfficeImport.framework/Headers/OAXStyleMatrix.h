/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface OAXStyleMatrix : XXUnknownSuperclass {
}
+ (void)readFromNode:(xmlNode *)node toStyleMatrix:(id)styleMatrix packagePart:(id)part drawingState:(id)state;	// 0x188229
+ (BOOL)readReferenceFromParentNode:(xmlNode *)parentNode name:(const char *)name inNamespace:(id)aNamespace color:(id *)color index:(unsigned *)index;	// 0x1ad5d1
+ (id)readReferenceFromNode:(xmlNode *)node;	// 0x1b9569
@end