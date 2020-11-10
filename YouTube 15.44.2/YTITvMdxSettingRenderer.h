//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString, YTIIcon;

@interface YTITvMdxSettingRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSummary; // @dynamic hasSummary;
@property(nonatomic) _Bool hasTitleWhenConnected; // @dynamic hasTitleWhenConnected;
@property(nonatomic) _Bool hasTitleWhenNotConnected; // @dynamic hasTitleWhenNotConnected;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *summary; // @dynamic summary;
@property(retain, nonatomic) YTIFormattedString *titleWhenConnected; // @dynamic titleWhenConnected;
@property(retain, nonatomic) YTIFormattedString *titleWhenNotConnected; // @dynamic titleWhenNotConnected;

@end

