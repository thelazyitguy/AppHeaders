//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIMenuSupportedRenderers;

@interface YTIUnpluggedOverflowMenuPopupRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoSelectOnlyNonCancelOption; // @dynamic autoSelectOnlyNonCancelOption;
@property(nonatomic) _Bool hasAutoSelectOnlyNonCancelOption; // @dynamic hasAutoSelectOnlyNonCancelOption;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

