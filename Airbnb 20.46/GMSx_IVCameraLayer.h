//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol IVCameraLayerDelegate;

@interface GMSx_IVCameraLayer : CALayer
{
    // Error parsing type: ^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}, name: _camera
    id <IVCameraLayerDelegate> _delegate;
    _Bool _shutdown;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)animatedPropertyKeys;
+ (id)layer;
- (void).cxx_destruct;
- (void)forcePresentationLayerUpdate;
- (void)display;
-     // Error parsing type: v24@0:8^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}16, name: copyToProto:
- (void)shutdown;
-     // Error parsing type: v24@0:8^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}16, name: copyFromProto:
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
-     // Error parsing type: @32@0:8^{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f}16@24, name: initWithCamera:delegate:

// Remaining properties
@property(nonatomic) double altitude; // @dynamic altitude;
@property(nonatomic) double fovY; // @dynamic fovY;
@property(nonatomic) double heading; // @dynamic heading;
@property(nonatomic) double ivForceUpdate; // @dynamic ivForceUpdate;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) struct Vector<double, 3> location; // @dynamic location;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double roll; // @dynamic roll;
@property(nonatomic) double screenHeight; // @dynamic screenHeight;
@property(nonatomic) double screenWidth; // @dynamic screenWidth;
@property(nonatomic) double tilt; // @dynamic tilt;

@end

