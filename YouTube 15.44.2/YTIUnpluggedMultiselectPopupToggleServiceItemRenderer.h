//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIIcon;

@interface YTIUnpluggedMultiselectPopupToggleServiceItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTICommand *defaultEndpoint; // @dynamic defaultEndpoint;
@property(retain, nonatomic) YTIIcon *defaultIcon; // @dynamic defaultIcon;
@property(retain, nonatomic) YTIFormattedString *defaultText; // @dynamic defaultText;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDefaultEndpoint; // @dynamic hasDefaultEndpoint;
@property(nonatomic) _Bool hasDefaultIcon; // @dynamic hasDefaultIcon;
@property(nonatomic) _Bool hasDefaultText; // @dynamic hasDefaultText;
@property(nonatomic) _Bool hasIsToggled; // @dynamic hasIsToggled;
@property(nonatomic) _Bool hasToggledEndpoint; // @dynamic hasToggledEndpoint;
@property(nonatomic) _Bool hasToggledIcon; // @dynamic hasToggledIcon;
@property(nonatomic) _Bool hasToggledText; // @dynamic hasToggledText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool isToggled; // @dynamic isToggled;
@property(retain, nonatomic) YTICommand *toggledEndpoint; // @dynamic toggledEndpoint;
@property(retain, nonatomic) YTIIcon *toggledIcon; // @dynamic toggledIcon;
@property(retain, nonatomic) YTIFormattedString *toggledText; // @dynamic toggledText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

