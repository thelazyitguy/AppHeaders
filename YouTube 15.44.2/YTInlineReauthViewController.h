//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTInlineReauthViewDelegate-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, LAContext, NSString, SSOIdentity, YTIAccountItemRenderer, YTIPasswordBiometricAuthRenderer, YTInlineReauthView, YTThumbnailController;
@protocol SSOAuthorization, SSOService, YTResponder;

@interface YTInlineReauthViewController : UIViewController <YTInlineReauthViewDelegate, YTPageStyleProvider, YTResponder>
{
    SSOIdentity *_identity;
    YTInlineReauthView *_reauthView;
    CDUnknownBlockType _successBlock;
    id <SSOAuthorization> _ssoAuthorization;
    YTIAccountItemRenderer *_accountItemRenderer;
    id <SSOService> _ssoService;
    YTThumbnailController *_thumbnailController;
    LAContext *_context;
    YTIPasswordBiometricAuthRenderer *_passwordBiometricAuthRenderer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)biometricAuthDidFinish:(_Bool)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)inlineReauthViewDidTapForgotPassword:(id)arg1;
- (void)inlineReauthView:(id)arg1 didTapNextWithPassword:(id)arg2;
- (double)headerHeightForInlineReauthView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setPasswordBiometricRenderer:(id)arg1;
- (id)initWithAuthorization:(id)arg1 accountItemRenderer:(id)arg2 parentResponder:(id)arg3 successBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

