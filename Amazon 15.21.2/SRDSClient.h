//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SRDSClientConfigDefaults;
@protocol SRDSClientConfigRequired;

@interface SRDSClient : NSObject
{
    struct SRDSClientConfigDefaults *_config;
}

+ (void)saveNetworkTypeCookie:(id)arg1;
+ (id)networkType;
@property(retain, nonatomic) SRDSClientConfigDefaults<SRDSClientConfigRequired> *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)addSRDSRequestSettings:(id)arg1;
- (void)addImageSettings:(id)arg1;
- (void)validateConfig;
- (id)buildGenericRequestWithPath:(id)arg1;
- (id)buildNextSearchRequestWithQuery:(id)arg1;
- (id)buildSimsRequestWithQuery:(id)arg1;
- (id)buildRegionalV2CompletionRequestWithQuery:(id)arg1 clientInfo:(id)arg2;
- (id)buildRegionalCompletionRequestWithQuery:(id)arg1;
- (id)buildV2CompletionRequestWithQuery:(id)arg1 clientInfo:(id)arg2;
- (id)buildCompletionRequestWithQuery:(id)arg1;
- (id)buildRecentSearchesRequestWithQueryString:(id)arg1 httpMethod:(id)arg2;
- (id)buildRecentSearchesRequestWithQuery:(id)arg1;
- (id)buildSuggestionsRequestWithPath:(id)arg1;
- (id)buildAssetsRequest;
- (id)buildCategoriesRequestWithPath:(id)arg1;
- (id)buildSearchRequestWithQuery:(id)arg1 maxResults:(id)arg2;

@end
