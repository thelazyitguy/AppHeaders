//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFRouterProtocol-Protocol.h>

@class NSObject, _TtC25FCFuncorpNetworkingiFunny25GlobalVendorsListResponse;
@protocol SocialLoginDelegate;

@protocol IFProfileSettingsRouterProtocol <IFRouterProtocol>
- (void)close;
- (void)disconnectSocialMediaWithHandler:(void (^)(UIAlertAction *))arg1;
- (void)connectOKWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)connectVKWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)connectGooglePlusWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)connectTwitterWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)connectAppleWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)connectFacebookWithDelegate:(NSObject<SocialLoginDelegate> *)arg1;
- (void)showGdprPrivacyPolicyPopup:(_TtC25FCFuncorpNetworkingiFunny25GlobalVendorsListResponse *)arg1 onAccept:(void (^)(void))arg2;
- (void)showPrivacySplash:(unsigned long long)arg1 onAccept:(void (^)(void))arg2;
- (void)showPrivacyPolicyPopup:(void (^)(void))arg1;
- (void)showEmailNotificationSettings;
- (void)showTextMessagingSettings;
- (void)showPrivacySettings;
- (void)showActivityFilter;
- (void)showNotificationSettings;
- (void)showContentPreferences;
- (void)changePhoneNumber;
- (void)addPhoneNumber;
- (void)changeEmail;
@end
