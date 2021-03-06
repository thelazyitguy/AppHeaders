//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMADebugProperties, AMAdConfiguration, NSArray;

@interface AMALinkUtility : NSObject
{
    AMADebugProperties *_sharedDebugProperties;
    AMAdConfiguration *_sharedConfiguration;
    NSArray *_browserSchemes;
    NSArray *_amazonSchemes;
    NSArray *_appStoreHosts;
    NSArray *_appleSchemes;
}

+ (id)urlActionToString:(long long)arg1;
+ (id)sharedLinkUtility;
@property(retain, nonatomic) NSArray *appleSchemes; // @synthesize appleSchemes=_appleSchemes;
@property(retain, nonatomic) NSArray *appStoreHosts; // @synthesize appStoreHosts=_appStoreHosts;
@property(retain, nonatomic) NSArray *amazonSchemes; // @synthesize amazonSchemes=_amazonSchemes;
@property(retain, nonatomic) NSArray *browserSchemes; // @synthesize browserSchemes=_browserSchemes;
@property(retain, nonatomic) AMAdConfiguration *sharedConfiguration; // @synthesize sharedConfiguration=_sharedConfiguration;
@property(retain, nonatomic) AMADebugProperties *sharedDebugProperties; // @synthesize sharedDebugProperties=_sharedDebugProperties;
- (void).cxx_destruct;
- (_Bool)isBrowserScheme:(id)arg1;
- (_Bool)isAppleURLScheme:(id)arg1;
- (_Bool)isOpenExternalBrowserRequest:(id)arg1;
- (id)appStoreIdFromURL:(id)arg1;
- (id)parametersFromURL:(id)arg1;
- (long long)schemeForURL:(id)arg1;
- (long long)actionForURL:(id)arg1;
- (id)init;

@end

