//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIKidsFlowVideoInfoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *flowTextInfoRenderer; // @dynamic flowTextInfoRenderer;
@property(nonatomic) _Bool hasFlowTextInfoRenderer; // @dynamic hasFlowTextInfoRenderer;
@property(nonatomic) _Bool hasShowTextButton; // @dynamic hasShowTextButton;
@property(nonatomic) _Bool hasVideoEndpoint; // @dynamic hasVideoEndpoint;
@property(retain, nonatomic) YTIFormattedString *showTextButton; // @dynamic showTextButton;
@property(retain, nonatomic) YTICommand *videoEndpoint; // @dynamic videoEndpoint;

@end

