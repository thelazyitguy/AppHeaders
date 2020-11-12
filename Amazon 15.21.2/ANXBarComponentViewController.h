//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ANXBarComponentState, NSMapTable, NSString;
@protocol ANXBarComponentRequester;

@interface ANXBarComponentViewController : UIViewController
{
    NSString *_barTag;
    NSMapTable *_recentStates;
    ANXBarComponentState *_initialState;
    id <ANXBarComponentRequester> _requester;
}

@property(nonatomic) __weak id <ANXBarComponentRequester> requester; // @synthesize requester=_requester;
@property(retain, nonatomic) ANXBarComponentState *initialState; // @synthesize initialState=_initialState;
@property(retain, nonatomic) NSMapTable *recentStates; // @synthesize recentStates=_recentStates;
@property(retain, nonatomic) NSString *barTag; // @synthesize barTag=_barTag;
- (void).cxx_destruct;
- (id)barComponentStateForMenuContext:(unsigned long long)arg1 forCurrentViewController:(id)arg2;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (id)willShowViewController:(id)arg1 previousViewController:(id)arg2 animationDuration:(double)arg3;
- (id)barRegistered:(id)arg1 currentViewController:(id)arg2;
- (void)barStateUpdated:(id)arg1 forViewController:(id)arg2;
- (id)initWithBarTag:(id)arg1 initialState:(id)arg2;

@end
