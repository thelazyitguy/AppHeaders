//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLShanYanSDKManager : NSObject
{
}

+ (id)clShanYanSDKVersion;
+ (void)setCLShanYanSDKManagerDelegate:(id)arg1;
+ (void)printConsoleEnable:(_Bool)arg1;
+ (void)hideLoading;
+ (void)setCheckBoxValue:(_Bool)arg1;
+ (void)finishAuthControllerAnimated:(_Bool)arg1 Completion:(CDUnknownBlockType)arg2;
+ (void)finishAuthControllerCompletion:(CDUnknownBlockType)arg1;
+ (void)quickAuthLoginWithConfigure:(id)arg1 openLoginAuthListener:(CDUnknownBlockType)arg2 oneKeyLoginListener:(CDUnknownBlockType)arg3;
+ (void)mobileCheckWithLocalPhoneNumberComplete:(CDUnknownBlockType)arg1;
+ (void)forbiddenFullLogReport:(_Bool)arg1;
+ (void)quickAuthLoginWithConfigure:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)preGetPhonenumber:(CDUnknownBlockType)arg1;
+ (void)setPreGetPhonenumberTimeOut:(double)arg1;
+ (void)setInitTimeOut:(double)arg1;
+ (long long)clSDKQuickLoginPrepareStutas;
+ (void)sdkInit:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)initWithAppId:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end
