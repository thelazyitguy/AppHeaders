//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitChangingView.h"

@class SPTLoginLoadingActionButton, UIView;

@interface SPTLoginLoadingView : SPTLoginTraitChangingView
{
    SPTLoginLoadingActionButton *_submitButton;
    UIView *_loadingOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(readonly, nonatomic) SPTLoginLoadingActionButton *submitButton; // @synthesize submitButton=_submitButton;
- (void)showLoadingUI;
- (void)hideLoadingUI;

@end

