//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseSettingsViewController.h"

@class GBTAddAccountHeaderView, GBTVisualElement, NSString, UILabel;
@protocol GBTViewControllerWithBackButtonDelegate;

@interface GBTGmailifyRecoveryCompleteViewController : GBTBaseSettingsViewController
{
    id <GBTViewControllerWithBackButtonDelegate> _delegate;
    NSString *_emailForVisualElement;
    NSString *_externalAddress;
    GBTAddAccountHeaderView *_headerView;
    NSString *_message;
    UILabel *_messageView;
    GBTVisualElement *_parentVisualElement;
}

- (void).cxx_destruct;
- (void)backButtonTapped;
- (id)titleForAppBar:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithExternalAddress:(id)arg1 message:(id)arg2 parentVisualElement:(id)arg3 emailForVisualElement:(id)arg4 delegate:(id)arg5;

@end
