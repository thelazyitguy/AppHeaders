//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/IFModelProtocol-Protocol.h>
#import <Funny/IFProfileSettingsModelProtocol-Protocol.h>

@class FNROUserSocial, NSString, UIView;
@protocol IFModelProtocol, IFNetworkSocialAuthService, IFProfileSettingsControllerProtocol, IFProfileSettingsModelDelegate, IFRouterProtocol, IFViewProtocol, _TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_;

@interface IFProfileSettingsModel : NSObject <IFModelProtocol, IFControllerProtocol, IFProfileSettingsModelProtocol>
{
    UIView<IFViewProtocol> *view;
    id <IFModelProtocol> model;
    id <IFRouterProtocol> router;
    NSObject<IFProfileSettingsModelDelegate> *_delegate;
    NSObject<IFProfileSettingsControllerProtocol> *_controller;
    id <_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_> _accountManager;
    id <IFNetworkSocialAuthService> _socialAuthRestManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IFNetworkSocialAuthService> socialAuthRestManager; // @synthesize socialAuthRestManager=_socialAuthRestManager;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_> accountManager; // @synthesize accountManager=_accountManager;
@property(nonatomic) __weak NSObject<IFProfileSettingsControllerProtocol> *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak NSObject<IFProfileSettingsModelDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IFRouterProtocol> router; // @synthesize router;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
@property(retain, nonatomic) UIView<IFViewProtocol> *view; // @synthesize view;
- (void)connectOKAccountWithAuthInfo:(id)arg1;
- (void)connectVKAccountWithAuthInfo:(id)arg1;
- (void)connectAppleAccountWithAuthInfo:(id)arg1;
- (void)connectGoogleAccountWithAuthInfo:(id)arg1;
- (void)connectTwitterAccountWithAuthInfo:(id)arg1;
- (void)connectFacebookAccountWithAuthInfo:(id)arg1;
- (void)disconnectGooglePlusAccount;
- (void)disconnectTwitterAccount;
- (void)disconnectFacebookAccount;
- (void)disconnectAppleAccount;
- (void)disconnectVKAccount;
- (void)disconnectOKAccount;
@property(readonly, nonatomic) FNROUserSocial *social;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *email;
- (void)connectGoogleSocialAccountForPath:(id)arg1 authInfo:(id)arg2;
- (void)connectSocialAccountForSocialName:(id)arg1 authInfo:(id)arg2;
- (void)resetPassword;
- (void)disconnectSocialAccountForSocialNetworkName:(id)arg1;
- (void)updateUserInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
