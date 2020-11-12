//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVInteractiveModalViewController.h>

#import <PeriscopeSDK/PTVChatWarningModalViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVInteractiveModal-Protocol.h>

@class NSObject, NSString;
@protocol PTVChatWarningModalViewControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVChatWarningModalViewController : PTVInteractiveModalViewController <PTVInteractiveModal, PTVChatWarningModalViewDelegate>
{
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    id <PTVChatWarningModalViewControllerDelegate> _delegate;
    NSString *_messageBody;
    NSString *_keyboardLanguage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(nonatomic) __weak id <PTVChatWarningModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1 messageBody:(id)arg2 keyboardLanguage:(id)arg3 loggedInUser:(id)arg4;
- (_Bool)interactiveModalShouldDismiss;
- (void)chatWarningViewDidPressDontSendMessage;
- (void)chatWarningViewDidPressSendMessage;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
