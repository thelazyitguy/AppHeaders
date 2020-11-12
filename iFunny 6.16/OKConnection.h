//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, OKSDKInitSettings, UIViewController;

@interface OKConnection : NSObject
{
    OKSDKInitSettings *_settings;
    NSString *_oauthRedirectScheme;
    NSString *_oauthRedirectUri;
    NSOperationQueue *_queue;
    UIViewController *_safariVC;
    NSString *_accessToken;
    NSString *_accessTokenSecretKey;
    NSString *_sdkToken;
    NSMutableDictionary *_completitionHandlers;
}

+ (id)sdkError:(long long)arg1 format:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *completitionHandlers; // @synthesize completitionHandlers=_completitionHandlers;
@property(retain, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(retain, nonatomic) NSString *accessTokenSecretKey; // @synthesize accessTokenSecretKey=_accessTokenSecretKey;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) __weak UIViewController *safariVC; // @synthesize safariVC=_safariVC;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *oauthRedirectUri; // @synthesize oauthRedirectUri=_oauthRedirectUri;
@property(copy, nonatomic) NSString *oauthRedirectScheme; // @synthesize oauthRedirectScheme=_oauthRedirectScheme;
@property(retain, nonatomic) OKSDKInitSettings *settings; // @synthesize settings=_settings;
- (void)clearAuth;
- (void)shutdown;
- (void)showWidget:(id)arg1 arguments:(id)arg2 options:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 session:(_Bool)arg3 signed:(_Bool)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)saveTokens:(id)arg1;
- (void)handleDidBecomeActive;
- (void)authorizeWithPermissions:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (_Bool)openUrl:(id)arg1;
- (void)openInSafari:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)initWithSettings:(id)arg1;

@end
