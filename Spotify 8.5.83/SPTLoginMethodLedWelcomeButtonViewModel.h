//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginActionButtonsViewModel-Protocol.h"
#import "SPTLoginThirdPartyLoginControllerDelegate-Protocol.h"

@class NSArray, NSString, SPTLoginButtonActionHandler, SPTLoginMethodLedWelcomeButtonViewLogger, SPTLoginWelcomeModel;
@protocol SPTLoginThirdPartyLoginHandlerDelegate;

@interface SPTLoginMethodLedWelcomeButtonViewModel : NSObject <SPTLoginThirdPartyLoginControllerDelegate, SPTLoginActionButtonsViewModel>
{
    SPTLoginButtonActionHandler *_actionButtonHandler;
    NSArray *_actionButtons;
    id <SPTLoginThirdPartyLoginHandlerDelegate> _delegate;
    SPTLoginWelcomeModel *_model;
    SPTLoginMethodLedWelcomeButtonViewLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginMethodLedWelcomeButtonViewLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTLoginWelcomeModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(readonly, nonatomic) SPTLoginButtonActionHandler *actionButtonHandler; // @synthesize actionButtonHandler=_actionButtonHandler;
- (id)contextViewControllerForThirdPartyLoginController:(id)arg1;
- (void)controllerDidFinishThirdPartyLogin:(id)arg1;
- (void)controllerDidStartThirdPartyLogin:(id)arg1;
- (void)logUserDidTapMoreButton;
- (_Bool)shouldHideButtonForIndex:(long long)arg1;
- (_Bool)shouldShowMoreButton;
- (id)moreButtonA11yIdentifier;
- (id)moreButtonTitle;
- (void)performActionForButtonAtIndex:(long long)arg1;
- (id)initWithActionButtons:(id)arg1 actionButtonHandler:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

