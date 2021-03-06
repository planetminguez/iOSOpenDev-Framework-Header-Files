/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>
#import <OfficeImport/CMDiagramShapeCycleMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
@private
	float mScale;	// 112 = 0x70
	BOOL mCircularArrows;	// 116 = 0x74
	int mDiagramType;	// 120 = 0x78
	int mArrowShapeType;	// 124 = 0x7c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x1ef735
- (CGRect)circumscribedBounds;	// 0x1ef8b5
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x1efba1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x1eff2d
@end

@interface CMDiagramShapeCycleMapper (Private)
- (CGRect)nodeBoundsWithIndex:(unsigned)index;	// 0x1f0011
- (CGSize)nodeSize;	// 0x1efa7d
- (void)mapTransitionPointAt:(id)at index:(unsigned)index withState:(id)state;	// 0x1f0465
- (void)mapTransitionArrowsAt:(id)at index:(unsigned)index withState:(id)state;	// 0x1f21e9
@end
