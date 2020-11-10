//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginWelcomeButtonViewController-Protocol.h"

@class NSMutableArray, NSString, SPTLoginActionButtonManager, SPTLoginMethodLedWelcomeButtonViewModel, SPTLoginTheme, UIView;
@protocol SPTLoginViewWithActionButtonsConfigurable><GLUEStyleable;

@interface SPTLoginMethodLedWelcomeButtonViewController : UIViewController <SPTLoginWelcomeButtonViewController>
{
    SPTLoginTheme *_theme;
    SPTLoginActionButtonManager *_actionButtonManager;
    SPTLoginMethodLedWelcomeButtonViewModel *_viewModel;
    NSMutableArray *_hiddenButtons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hiddenButtons; // @synthesize hiddenButtons=_hiddenButtons;
@property(readonly, nonatomic) SPTLoginMethodLedWelcomeButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTLoginActionButtonManager *actionButtonManager; // @synthesize actionButtonManager=_actionButtonManager;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void)setDelegate:(id)arg1;
- (void)moreButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)addMoreButtonWithStyle:(id)arg1;
- (void)configureAuthOptionButtonsWithStyle:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 actionButtonManager:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<SPTLoginViewWithActionButtonsConfigurable><GLUEStyleable> *view; // @dynamic view;

@end
