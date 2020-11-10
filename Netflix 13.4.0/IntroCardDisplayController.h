//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IntroCardFlowControlDelegate-Protocol.h"

@class NSString;
@protocol IntroCardFlowControlDelegate;

@interface IntroCardDisplayController : NSObject <IntroCardFlowControlDelegate>
{
    _Bool _hasSeenIntroCardForSession;
    id <IntroCardFlowControlDelegate> _flowControlDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IntroCardFlowControlDelegate> flowControlDelegate; // @synthesize flowControlDelegate=_flowControlDelegate;
@property(nonatomic) _Bool hasSeenIntroCardForSession; // @synthesize hasSeenIntroCardForSession=_hasSeenIntroCardForSession;
- (_Bool)cardEnabledForAutomation;
- (void)presentIntroCard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)hasSeenIntroCardWithIdentifier:(id)arg1;
- (id)downloadsLolomoRequest;
- (void)introCardForSession:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowIntroCardWithAutomation:(_Bool)arg1 linkOrMessage:(_Bool)arg2 isKidsProfile:(_Bool)arg3;
- (void)showIntroCardIfNeededWithAutomation:(_Bool)arg1 linkOrMessage:(_Bool)arg2 isKidsProfile:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showIntroCardIfNeeded;
- (id)initWithFlowControlDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
