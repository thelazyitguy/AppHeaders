//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GPBMessage, NSString, YTICommand;
@protocol YTResponder;

@interface YTInterstitialElementsLoggingController : NSObject <YTResponder, YTGraftingViewController>
{
    YTICommand *_navEndpoint;
    GPBMessage *_response;
    _Bool _interactionLoggingStarted;
}

- (void).cxx_destruct;
- (void)setupNavEndpointForInteractionLogging;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (id)navEndpoint;
- (void)startCounterfactualLogging;
- (void)endScreenLogging;
- (void)startScreenLogging;
- (id)initWithResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

