//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPOTAppSwitchUtil : NSObject
{
}

+ (id)redirectURLHostAndPath;
+ (id)actionFromURLAction:(id)arg1;
+ (_Bool)isValidURLAction:(id)arg1;
+ (void)redirectURLsForCallbackURLScheme:(id)arg1 withReturnURL:(id *)arg2 withCancelURL:(id *)arg3;
+ (id)URLAction:(id)arg1 callbackURLScheme:(id)arg2 payload:(id)arg3;
+ (id)URLAction:(id)arg1 targetAppURLScheme:(id)arg2 callbackURLScheme:(id)arg3 payload:(id)arg4;
+ (id)parseQueryString:(id)arg1;
+ (id)protocolFromTargetAppURLScheme:(id)arg1;
+ (_Bool)isCallbackURLSchemeValid:(id)arg1;
+ (id)bundleName;
+ (id)bundleId;

@end
