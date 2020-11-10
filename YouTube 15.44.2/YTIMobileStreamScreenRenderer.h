//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIFormattedString, YTIMobileStreamButtonSupportedRenderers, YTIMobileStreamTraySupportedRenderers;

@interface YTIMobileStreamScreenRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMobileStreamButtonSupportedRenderers *endStreamButton; // @dynamic endStreamButton;
@property(nonatomic) _Bool hasEndStreamButton; // @dynamic hasEndStreamButton;
@property(nonatomic) _Bool hasLiveChatEndpoint; // @dynamic hasLiveChatEndpoint;
@property(nonatomic) _Bool hasOptionsTray; // @dynamic hasOptionsTray;
@property(nonatomic) _Bool hasReconnectButton; // @dynamic hasReconnectButton;
@property(nonatomic) _Bool hasStreamStartedLabel; // @dynamic hasStreamStartedLabel;
@property(retain, nonatomic) YTICommand *liveChatEndpoint; // @dynamic liveChatEndpoint;
@property(retain, nonatomic) YTIMobileStreamTraySupportedRenderers *optionsTray; // @dynamic optionsTray;
@property(retain, nonatomic) YTIMobileStreamButtonSupportedRenderers *reconnectButton; // @dynamic reconnectButton;
@property(retain, nonatomic) YTIFormattedString *streamStartedLabel; // @dynamic streamStartedLabel;

@end

