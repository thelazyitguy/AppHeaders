//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ASWebAuthenticationPresentationContextProviding-Protocol.h"

@interface _TtC6GitHub25LoginSplashViewController : UIViewController <ASWebAuthenticationPresentationContextProviding>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: session
    // Error parsing type: , name: client
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: logoImageView
    // Error parsing type: , name: signInButton
    // Error parsing type: , name: contentStack
    // Error parsing type: , name: legalCopy
    // Error parsing type: , name: legalCopyTextView
    // Error parsing type: , name: state
    // Error parsing type: , name: presentWebAuthControllerFromOwnWindow
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (void)onTapTextViewWithRecognizer:(id)arg1;
- (void)onSignInButton;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
