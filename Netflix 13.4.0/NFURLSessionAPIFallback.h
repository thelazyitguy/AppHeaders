//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFURLSession/NFAddressTranslationProvider-Protocol.h>

@class NSString;

@interface NFURLSessionAPIFallback : NSObject <NFAddressTranslationProvider>
{
    _Bool configuredToRetryRequests;
    _Bool translationEnabled;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isTranslationEnabled) _Bool translationEnabled; // @synthesize translationEnabled;
@property(readonly, nonatomic, getter=isConfiguredToRetryRequests) _Bool configuredToRetryRequests; // @synthesize configuredToRetryRequests;
- (unsigned long long)retryDelayInMillisecondsForPreviousTryHistory:(id)arg1;
- (id)translatedUrlString:(id)arg1 withPreviousTryHistory:(id)arg2;
- (_Bool)shouldRetryForResponse:(id)arg1 forTask:(id)arg2 previousTryHistory:(id)arg3 withError:(id)arg4;
- (_Bool)configuredToRetryRequests;
- (_Bool)translationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
