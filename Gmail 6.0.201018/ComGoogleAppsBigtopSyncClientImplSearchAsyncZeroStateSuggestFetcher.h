//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSuggestionImpl_Factory;
@protocol ComGoogleAppsBigtopSyncClientImplSearchNetworkclientNonasyncSearchNetworkClient;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncZeroStateSuggestFetcher : NSObject
{
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleAppsBigtopSyncClientImplSearchNetworkclientNonasyncSearchNetworkClient> searchNetworkClient_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *spanFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSuggestionImpl_Factory *suggestionFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (void)updateZeroStateSuggestionsWithComGoogleAppsBigtopSyncClientImplSearchAsyncZeroStateSuggestionsCache:(id)arg1 withNSString:(id)arg2 withJBTSpan:(id)arg3;

@end
