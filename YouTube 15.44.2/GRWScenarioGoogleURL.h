//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GRWAppSwitchingScenario.h>

@class GRWApp;

@interface GRWScenarioGoogleURL : GRWAppSwitchingScenario
{
    GRWApp *_topApp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GRWApp *topApp; // @synthesize topApp=_topApp;
- (id)promptEvaluation;
- (id)initWithIntentDescriptor:(id)arg1 productsManager:(id)arg2 preferences:(id)arg3 cooldownManager:(id)arg4 impressionCounter:(id)arg5 linkOpenerOptions:(id)arg6;

@end

