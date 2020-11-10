//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTICommand, YTIFormattedString, YTIIcon;

@interface YTIVideoInteractionPopUpRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(retain, nonatomic) YTIIcon *endIcon; // @dynamic endIcon;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasEndIcon; // @dynamic hasEndIcon;
@property(nonatomic) _Bool hasStartIcon; // @dynamic hasStartIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *startIcon; // @dynamic startIcon;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
