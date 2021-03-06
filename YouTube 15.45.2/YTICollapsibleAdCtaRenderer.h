//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICollapseAction, YTIExpandAction, YTIThumbnailDetails;

@interface YTICollapsibleAdCtaRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICollapseAction *collapseAction; // @dynamic collapseAction;
@property(nonatomic) _Bool enableShadow; // @dynamic enableShadow;
@property(retain, nonatomic) YTIExpandAction *expandAction; // @dynamic expandAction;
@property(nonatomic) _Bool hasCollapseAction; // @dynamic hasCollapseAction;
@property(nonatomic) _Bool hasEnableShadow; // @dynamic hasEnableShadow;
@property(nonatomic) _Bool hasExpandAction; // @dynamic hasExpandAction;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *stateTriggersArray; // @dynamic stateTriggersArray;
@property(readonly, nonatomic) unsigned long long stateTriggersArray_Count; // @dynamic stateTriggersArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

