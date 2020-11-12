//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/LocationPipelineProvider-Protocol.h>

@class GMSCoreClientParameters, NSString;

@interface GMSx_BearingNoiseReductionProvider : NSObject <LocationPipelineProvider>
{
    GMSCoreClientParameters *_params;
    _Bool _hasEmittedBearing;
    long long _previousTimestamp;
    double _previousSpeed;
    double _velocityX;
    double _velocityY;
    int _travelMode;
}

+ (id)locationProviderID;
- (void).cxx_destruct;
@property(nonatomic) int travelMode; // @synthesize travelMode=_travelMode;
- (void)resetVelocityVector;
- (_Bool)isValidBearingForLocation:(id)arg1;
- (void)updateLocation:(id)arg1 dispatcher:(id)arg2;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
