/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EXRow.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EXRow : XXUnknownSuperclass {
}
+ (void)readRowsFrom:(xmlTextReader *)from state:(id)state;	// 0x1a80a1
@end

@interface EXRow (Private)
+ (void)edRowFrom:(xmlTextReader *)from edRowInfo:(EDRowInfo *)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;	// 0x1a8451
@end