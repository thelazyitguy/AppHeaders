//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSArray, NSString, SPTExternalIntegrationDriverDistractionLockscreenDismissalView, SPTExternalIntegrationDriverDistractionLockscreenLogotypesView, UIStackView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTExternalIntegrationDriverDistractionLockscreenView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTExternalIntegrationDriverDistractionLockscreenLogotypesView *_logotypesView;
    SPTExternalIntegrationDriverDistractionLockscreenDismissalView *_dismissalView;
    UIStackView *_containerView;
    NSArray *_layoutConstraints;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) SPTExternalIntegrationDriverDistractionLockscreenDismissalView *dismissalView; // @synthesize dismissalView=_dismissalView;
@property(readonly, nonatomic) SPTExternalIntegrationDriverDistractionLockscreenLogotypesView *logotypesView; // @synthesize logotypesView=_logotypesView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)applyThemeLayout;
- (id)createLayout;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1 dismissible:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

