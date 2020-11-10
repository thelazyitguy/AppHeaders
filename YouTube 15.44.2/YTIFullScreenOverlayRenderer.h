//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIDatas, YTIRenderer, YTIThumbnailSupportedRenderers;

@interface YTIFullScreenOverlayRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailSupportedRenderers *backgroundThumbnail; // @dynamic backgroundThumbnail;
@property(retain, nonatomic) YTIDatas *colorData; // @dynamic colorData;
@property(retain, nonatomic) YTIRenderer *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTICommand *dismissalCommand; // @dynamic dismissalCommand;
@property(retain, nonatomic) YTICommand *dismissalEndpoint; // @dynamic dismissalEndpoint;
@property(readonly, nonatomic) int dismissalOneOfCase; // @dynamic dismissalOneOfCase;
@property(nonatomic) _Bool enableLandscape; // @dynamic enableLandscape;
@property(nonatomic) _Bool hasBackgroundThumbnail; // @dynamic hasBackgroundThumbnail;
@property(nonatomic) _Bool hasColorData; // @dynamic hasColorData;
@property(nonatomic) _Bool hasEnableLandscape; // @dynamic hasEnableLandscape;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasMaxContentWidth; // @dynamic hasMaxContentWidth;
@property(nonatomic) _Bool hasStatusBarStyle; // @dynamic hasStatusBarStyle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVerticalAlignment; // @dynamic hasVerticalAlignment;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIRenderer *item; // @dynamic item;
@property(nonatomic) float maxContentWidth; // @dynamic maxContentWidth;
@property(nonatomic) int statusBarStyle; // @dynamic statusBarStyle;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) int verticalAlignment; // @dynamic verticalAlignment;

@end

