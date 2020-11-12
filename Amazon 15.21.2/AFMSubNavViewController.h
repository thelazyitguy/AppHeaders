//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBarComponentViewController.h"

#import "SXPopoverControllerDelegate-Protocol.h"
#import "SXSubNavDelegate-Protocol.h"

@class NSString, SXPopoverController, SXSubNavView, UIViewController;
@protocol ANXBarComponentRequester;

@interface AFMSubNavViewController : ANXBarComponentViewController <SXPopoverControllerDelegate, SXSubNavDelegate>
{
    _Bool _visible;
    UIViewController *_currentController;
    SXSubNavView *_subNav;
    SXPopoverController *_subNavPopoverController;
    id <ANXBarComponentRequester> _requester;
    UIViewController *_barViewController;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIViewController *barViewController; // @synthesize barViewController=_barViewController;
@property(nonatomic) __weak id <ANXBarComponentRequester> requester; // @synthesize requester=_requester;
@property(retain, nonatomic) SXPopoverController *subNavPopoverController; // @synthesize subNavPopoverController=_subNavPopoverController;
@property(retain, nonatomic) SXSubNavView *subNav; // @synthesize subNav=_subNav;
@property(retain, nonatomic) UIViewController *currentController; // @synthesize currentController=_currentController;
- (void).cxx_destruct;
- (void)relayoutForSubnavHeightChange;
- (void)subNavViewWillCollapse:(id)arg1 withDuration:(double)arg2;
- (void)subNavWillUpdate;
- (void)subNavView:(id)arg1 displayBrowsePath:(id)arg2;
- (void)subNavView:(id)arg1 displayUrl:(id)arg2;
- (void)subNavView:(id)arg1 presentPopover:(id)arg2 fromView:(id)arg3;
- (void)subnavUpdateWithSearchContext;
- (_Bool)isInFreshSearch:(id)arg1;
- (id)createStateWithVisible:(_Bool)arg1;
- (void)removeSubNavView;
- (id)willShowViewController:(id)arg1 previousViewController:(id)arg2 animationDuration:(double)arg3;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (void)updateContent;
- (id)barRegistered:(id)arg1 currentViewController:(id)arg2;
- (id)initWithBarTag:(id)arg1 initialState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
