//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIDismissableDialogRenderer, YTIUpsellDialogRenderer;

@interface YTIUnlimitedBadgeInfoSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDismissableDialogRenderer *dismissableDialogRenderer; // @dynamic dismissableDialogRenderer;
@property(nonatomic) _Bool hasDismissableDialogRenderer; // @dynamic hasDismissableDialogRenderer;
@property(nonatomic) _Bool hasUpsellDialogRenderer; // @dynamic hasUpsellDialogRenderer;
@property(retain, nonatomic) YTIUpsellDialogRenderer *upsellDialogRenderer; // @dynamic upsellDialogRenderer;

@end

