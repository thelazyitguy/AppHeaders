//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTINamedValue;

@interface YTIUnpluggedTeamsStatsBarRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *endTeamBarColor; // @dynamic endTeamBarColor;
@property(retain, nonatomic) YTINamedValue *endTeamStatValue; // @dynamic endTeamStatValue;
@property(nonatomic) _Bool hasEndTeamBarColor; // @dynamic hasEndTeamBarColor;
@property(nonatomic) _Bool hasEndTeamStatValue; // @dynamic hasEndTeamStatValue;
@property(nonatomic) _Bool hasStartTeamBarColor; // @dynamic hasStartTeamBarColor;
@property(nonatomic) _Bool hasStartTeamStatValue; // @dynamic hasStartTeamStatValue;
@property(nonatomic) _Bool hasStatTitle; // @dynamic hasStatTitle;
@property(copy, nonatomic) NSString *startTeamBarColor; // @dynamic startTeamBarColor;
@property(retain, nonatomic) YTINamedValue *startTeamStatValue; // @dynamic startTeamStatValue;
@property(retain, nonatomic) YTIFormattedString *statTitle; // @dynamic statTitle;

@end
