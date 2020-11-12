//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>

@class NSString, PLKFlowContext, PlkoauthlandingView, PlkoauthliftoffView, PlkoauthloadingView, UIButton, UILabel, UITextView, UIView;
@protocol PLKFlowCoordinator;

@interface PLKFlexibleInputOAuthLoadingLiftOffPaneViewController : UIViewController <PLKFlowCoordinated, PLKCustomizable>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    NSString *_institutionName;
    unsigned long long _step;
    UIView *_animationView;
    UIButton *_continueButton;
    UILabel *_headingLabel;
    UITextView *_messageLabel;
    UILabel *_statusLabel;
    PlkoauthloadingView *_loadingView;
    PlkoauthliftoffView *_liftOffView;
    PlkoauthlandingView *_landingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PlkoauthlandingView *landingView; // @synthesize landingView=_landingView;
@property(retain, nonatomic) PlkoauthliftoffView *liftOffView; // @synthesize liftOffView=_liftOffView;
@property(retain, nonatomic) PlkoauthloadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UITextView *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property unsigned long long step; // @synthesize step=_step;
@property(copy, nonatomic) NSString *institutionName; // @synthesize institutionName=_institutionName;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)landing;
- (void)liftOff;
- (void)loading;
- (void)customizeWithConfiguration:(id)arg1;
- (void)didTapContinue;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
