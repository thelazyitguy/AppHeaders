//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKSFamilyLifeCycleURLs : NSObject
{
    _Bool _debugUnobfuscatedMode;
    NSString *_experimentsDescription;
    NSString *_familyLifeCycleURLPrefix;
    NSString *_accountCreationURLString;
}

+ (id)additionalGAIAFlowOpenInBrowserUrls;
+ (id)openInBrowserUrls;
+ (id)parametersToOverride;
+ (id)accountCreationURLForEnvironment:(long long)arg1;
+ (id)dayIDForEnvironment:(long long)arg1;
+ (id)familyLifeCycleURLPrefixForEnvironment:(long long)arg1;
+ (_Bool)isGAIAFlowOpenInBrowserURL:(id)arg1;
+ (_Bool)isAnOpenInBrowserURL:(id)arg1;
+ (id)familyLifeCycleURLsWithEnvironment:(long long)arg1 experimentsDescription:(id)arg2 debugUnobfuscatedMode:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accountCreationURLString; // @synthesize accountCreationURLString=_accountCreationURLString;
@property(readonly, copy, nonatomic) NSString *familyLifeCycleURLPrefix; // @synthesize familyLifeCycleURLPrefix=_familyLifeCycleURLPrefix;
@property(readonly, nonatomic, getter=isDebugUnobfuscatedMode) _Bool debugUnobfuscatedMode; // @synthesize debugUnobfuscatedMode=_debugUnobfuscatedMode;
@property(readonly, copy, nonatomic) NSString *experimentsDescription; // @synthesize experimentsDescription=_experimentsDescription;
- (id)basicQueryItems;
- (id)familyLifeCycleURLForPage:(long long)arg1 withChildID:(id)arg2;
- (id)familyLifeCycleURLForPage:(long long)arg1;
- (id)initWithEnvironment:(long long)arg1 experimentsDescription:(id)arg2 debugUnobfuscatedMode:(_Bool)arg3;

@end
