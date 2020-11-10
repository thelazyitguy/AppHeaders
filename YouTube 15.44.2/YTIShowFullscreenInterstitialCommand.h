//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTELMCommandHandler-Protocol.h>

@class ELMPBCommand, ELMPBElement, NSString, YTIElementLoggingContainer, YTIModalClientThrottlingRules;

@interface YTIShowFullscreenInterstitialCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (_Bool)shouldThrottleInterstitialWithGimme:(id)arg1;
- (id)elementsContextForGimme:(id)arg1 responder:(id)arg2;
- (void)executeWithCommandContext:(id)arg1 gimme:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) ELMPBElement *element; // @dynamic element;
@property(retain, nonatomic) YTIElementLoggingContainer *elementLoggingContainer; // @dynamic elementLoggingContainer;
@property(nonatomic) _Bool enableClientImpressionThrottling; // @dynamic enableClientImpressionThrottling;
@property(nonatomic) _Bool hasElement; // @dynamic hasElement;
@property(nonatomic) _Bool hasElementLoggingContainer; // @dynamic hasElementLoggingContainer;
@property(nonatomic) _Bool hasEnableClientImpressionThrottling; // @dynamic hasEnableClientImpressionThrottling;
@property(nonatomic) _Bool hasHideStatusBar; // @dynamic hasHideStatusBar;
@property(nonatomic) _Bool hasLockOrientationToPortrait; // @dynamic hasLockOrientationToPortrait;
@property(nonatomic) _Bool hasModalClientThrottlingRules; // @dynamic hasModalClientThrottlingRules;
@property(nonatomic) _Bool hasOnBackTriggered; // @dynamic hasOnBackTriggered;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideStatusBar; // @dynamic hideStatusBar;
@property(nonatomic) _Bool lockOrientationToPortrait; // @dynamic lockOrientationToPortrait;
@property(retain, nonatomic) YTIModalClientThrottlingRules *modalClientThrottlingRules; // @dynamic modalClientThrottlingRules;
@property(retain, nonatomic) ELMPBCommand *onBackTriggered; // @dynamic onBackTriggered;
@property(readonly) Class superclass;

@end

