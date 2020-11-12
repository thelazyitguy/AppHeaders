//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseAuthViewController.h"

#import "GBTAppleIDPromptViewDelegate-Protocol.h"

@class GBTAppleIDPromptView, NSString;
@protocol GBTAppleIDPromptViewControllerDelegate;

@interface GBTAppleIDPromptViewController : GBTBaseAuthViewController <GBTAppleIDPromptViewDelegate>
{
    id <GBTAppleIDPromptViewControllerDelegate> _delegate;
    GBTAppleIDPromptView *_promptView;
}

- (void).cxx_destruct;
- (id)titleForAppBar:(id)arg1;
- (void)nextButtonTapped;
- (void)backButtonTapped;
- (void)appleIDPromptViewDidOpenHelp;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
