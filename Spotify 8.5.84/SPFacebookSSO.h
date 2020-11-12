//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKLoginManager, UIApplication;
@protocol _TtP26FacebookSDKProviderFeature22SPTFacebookSDKProvider_;

@interface SPFacebookSSO : NSObject
{
    id <_TtP26FacebookSDKProviderFeature22SPTFacebookSDKProvider_> _facebookSDKProvider;
    UIApplication *_application;
    FBSDKLoginManager *_facebookLoginManager;
    unsigned long long _facebookAuthKeepAliveBackgroundTask;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long facebookAuthKeepAliveBackgroundTask; // @synthesize facebookAuthKeepAliveBackgroundTask=_facebookAuthKeepAliveBackgroundTask;
@property(retain, nonatomic) FBSDKLoginManager *facebookLoginManager; // @synthesize facebookLoginManager=_facebookLoginManager;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) id <_TtP26FacebookSDKProviderFeature22SPTFacebookSDKProvider_> facebookSDKProvider; // @synthesize facebookSDKProvider=_facebookSDKProvider;
- (void)endAuthBackgroundTask;
- (void)startAuthBackgroundTask;
- (id)accessDeniedErrorWithFacebookError:(id)arg1;
- (id)userCancelledError;
- (id)profilePictureURLFromResponseDictionary:(id)arg1;
- (void)requestFacebookUserInfoForAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestFacebookAccessToken:(CDUnknownBlockType)arg1;
- (void)clearFacebookData;
- (void)attemptFacebookSSOWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFacebookSDKProvider:(id)arg1 application:(id)arg2;

@end
