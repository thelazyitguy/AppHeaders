//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMGEOMCamera, GMSx_GMMCursorTable, GMSx_GMMLocationInfo, GMSx_GMMNavigationChannelKey, GMSx_GMMOverlays, GMSx_GMMTargetTable, GMSx_GMTTSHLatLngRectangle, NSMutableArray;

@interface GMSx_GMMNavigationChannel : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMNavigationChannelKey *channel; // @dynamic channel;
@property(retain, nonatomic) GMSx_GMMCursorTable *cursors; // @dynamic cursors;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasCursors; // @dynamic hasCursors;
@property(nonatomic) _Bool hasInitialCamera; // @dynamic hasInitialCamera;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasOverlays; // @dynamic hasOverlays;
@property(nonatomic) _Bool hasSuggestedMercatorBounds; // @dynamic hasSuggestedMercatorBounds;
@property(nonatomic) _Bool hasTargets; // @dynamic hasTargets;
@property(retain, nonatomic) GMSx_GMGEOMCamera *initialCamera; // @dynamic initialCamera;
@property(retain, nonatomic) GMSx_GMMLocationInfo *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *neighborArray; // @dynamic neighborArray;
@property(readonly, nonatomic) unsigned long long neighborArray_Count; // @dynamic neighborArray_Count;
@property(retain, nonatomic) GMSx_GMMOverlays *overlays; // @dynamic overlays;
@property(retain, nonatomic) NSMutableArray *routeAnnotationArray; // @dynamic routeAnnotationArray;
@property(readonly, nonatomic) unsigned long long routeAnnotationArray_Count; // @dynamic routeAnnotationArray_Count;
@property(retain, nonatomic) GMSx_GMTTSHLatLngRectangle *suggestedMercatorBounds; // @dynamic suggestedMercatorBounds;
@property(retain, nonatomic) GMSx_GMMTargetTable *targets; // @dynamic targets;
@property(retain, nonatomic) NSMutableArray *verticalArray; // @dynamic verticalArray;
@property(readonly, nonatomic) unsigned long long verticalArray_Count; // @dynamic verticalArray_Count;

@end
