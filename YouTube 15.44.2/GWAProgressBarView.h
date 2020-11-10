//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GWADependencyGraphComponent-Protocol.h>
#import <Module_Framework/GWATriggerComponent-Protocol.h>

@class GWADependencyGraph, GWALabel, NSMutableArray, NSString, OAStackView, OrchProgressBar;

@interface GWAProgressBarView : UIView <GWADependencyGraphComponent, GWATriggerComponent>
{
    GWADependencyGraph *_dependencyGraph;
    GWALabel *_headerLabel;
    NSMutableArray *_triggers;
    OAStackView *_mainStackView;
    OrchProgressBar *_proto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OrchProgressBar *proto; // @synthesize proto=_proto;
- (id)mainStackView;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (id)initWithProgressBar:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

