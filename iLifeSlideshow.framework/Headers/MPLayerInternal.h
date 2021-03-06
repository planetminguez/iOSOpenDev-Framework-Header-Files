/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/iLifeSlideshow-Structs.h>

@class NSString;

@interface MPLayerInternal : XXUnknownSuperclass {
	int numberOfLoops;	// 4 = 0x4
	float opacity;	// 8 = 0x8
	CGPoint position;	// 12 = 0xc
	float zPosition;	// 20 = 0x14
	CGSize size;	// 24 = 0x18
	float rotationAngle;	// 32 = 0x20
	float xRotationAngle;	// 36 = 0x24
	float yRotationAngle;	// 40 = 0x28
	double timeIn;	// 44 = 0x2c
	double duration;	// 52 = 0x34
	NSString *title;	// 60 = 0x3c
	BOOL isAudioLayer;	// 64 = 0x40
	int audioPriority;	// 68 = 0x44
	double durationPadding;	// 72 = 0x48
	NSString *layerID;	// 80 = 0x50
}
@property(assign, nonatomic) int numberOfLoops;	// G=0x5e409; S=0x5e419; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x5e3e9; S=0x5e3f9; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x5e3bd; S=0x5e3d5; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x5e39d; S=0x5e3ad; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x5e371; S=0x5e389; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x5e351; S=0x5e361; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x5e331; S=0x5e341; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x5e311; S=0x5e321; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x5e2e5; S=0x5e2fd; @synthesize
@property(assign, nonatomic) double duration;	// G=0x5e2b9; S=0x5e2d1; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x5e2a9; S=0x5e4a1; @synthesize
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x5e289; S=0x5e299; @synthesize
@property(assign, nonatomic) int audioPriority;	// G=0x5e269; S=0x5e279; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x5e23d; S=0x5e255; @synthesize
@property(retain, nonatomic) NSString *layerID;	// G=0x5e22d; S=0x5e4c9; @synthesize
- (void)dealloc;	// 0x5e429
// declared property getter: - (id)layerID;	// 0x5e22d
// declared property setter: - (void)setLayerID:(id)anId;	// 0x5e4c9
// declared property getter: - (double)durationPadding;	// 0x5e23d
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x5e255
// declared property getter: - (int)audioPriority;	// 0x5e269
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x5e279
// declared property getter: - (BOOL)isAudioLayer;	// 0x5e289
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x5e299
// declared property getter: - (id)title;	// 0x5e2a9
// declared property setter: - (void)setTitle:(id)title;	// 0x5e4a1
// declared property getter: - (double)duration;	// 0x5e2b9
// declared property setter: - (void)setDuration:(double)duration;	// 0x5e2d1
// declared property getter: - (double)timeIn;	// 0x5e2e5
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x5e2fd
// declared property getter: - (float)yRotationAngle;	// 0x5e311
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x5e321
// declared property getter: - (float)xRotationAngle;	// 0x5e331
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x5e341
// declared property getter: - (float)rotationAngle;	// 0x5e351
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x5e361
// declared property getter: - (CGSize)size;	// 0x5e371
// declared property setter: - (void)setSize:(CGSize)size;	// 0x5e389
// declared property getter: - (float)zPosition;	// 0x5e39d
// declared property setter: - (void)setZPosition:(float)position;	// 0x5e3ad
// declared property getter: - (CGPoint)position;	// 0x5e3bd
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x5e3d5
// declared property getter: - (float)opacity;	// 0x5e3e9
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x5e3f9
// declared property getter: - (int)numberOfLoops;	// 0x5e409
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x5e419
@end
