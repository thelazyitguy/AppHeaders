//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNTwitterCoreServicesConfiguration-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface TFNTwitterCoreServicesConfiguration : NSObject <TFNTwitterCoreServicesConfiguration, NSCopying>
{
    long long _shortenedURLLengthSecure;
    NSSet *_excludedEmailDomains;
    double _typeaheadUserPrefetchRateInSeconds;
    NSSet *_nonUsernamePaths;
    long long _scribeAPISampleSize;
    long long _scribeAPIErrorSampleSize;
    NSSet *_excludedWebViewDomains;
    NSNumber *_coreServices2TNLForegroundIdleTimeout;
    NSNumber *_coreServices2TNLBackgroundIdleTimeout;
    unsigned long long _maxNumberDiscountedURLs;
    CDUnknownBlockType _actionServiceIntegrationEnabledProvider;
    CDUnknownBlockType _actionServiceLoggedOutIntegrationEnabledProvider;
}

+ (id)_queue;
+ (void)updateConfiguration:(id)arg1;
+ (id)currentConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionServiceLoggedOutIntegrationEnabledProvider; // @synthesize actionServiceLoggedOutIntegrationEnabledProvider=_actionServiceLoggedOutIntegrationEnabledProvider;
@property(copy, nonatomic) CDUnknownBlockType actionServiceIntegrationEnabledProvider; // @synthesize actionServiceIntegrationEnabledProvider=_actionServiceIntegrationEnabledProvider;
@property(nonatomic) unsigned long long maxNumberDiscountedURLs; // @synthesize maxNumberDiscountedURLs=_maxNumberDiscountedURLs;
@property(retain, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout; // @synthesize coreServices2TNLBackgroundIdleTimeout=_coreServices2TNLBackgroundIdleTimeout;
@property(retain, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout; // @synthesize coreServices2TNLForegroundIdleTimeout=_coreServices2TNLForegroundIdleTimeout;
@property(copy, nonatomic) NSSet *excludedWebViewDomains; // @synthesize excludedWebViewDomains=_excludedWebViewDomains;
@property(nonatomic) long long scribeAPIErrorSampleSize; // @synthesize scribeAPIErrorSampleSize=_scribeAPIErrorSampleSize;
@property(nonatomic) long long scribeAPISampleSize; // @synthesize scribeAPISampleSize=_scribeAPISampleSize;
@property(copy, nonatomic) NSSet *nonUsernamePaths; // @synthesize nonUsernamePaths=_nonUsernamePaths;
@property(nonatomic) double typeaheadUserPrefetchRateInSeconds; // @synthesize typeaheadUserPrefetchRateInSeconds=_typeaheadUserPrefetchRateInSeconds;
@property(copy, nonatomic) NSSet *excludedEmailDomains; // @synthesize excludedEmailDomains=_excludedEmailDomains;
@property(nonatomic) long long shortenedURLLengthSecure; // @synthesize shortenedURLLengthSecure=_shortenedURLLengthSecure;
@property(readonly, nonatomic, getter=isActionServiceLoggedOutIntegrationEnabled) _Bool actionServiceLoggedOutIntegrationEnabled;
@property(readonly, nonatomic, getter=isActionServiceIntegrationEnabled) _Bool actionServiceIntegrationEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
