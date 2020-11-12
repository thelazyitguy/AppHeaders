//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSearchSession_Builder-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchFactory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchWarmUp, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchSessionBuilderImpl : NSObject <JBTSearchSession_Builder>
{
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchFactory *searchFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchWarmUp *warmUp_;
    int initialSuggestions_;
    int initialResults_;
    _Bool useSearchAsYouType_;
    int maxSnippetLength_;
    _Bool built_;
}

- (void)dealloc;
- (int)getMaxSnippetLength;
- (_Bool)getUseSearchAsYouType;
- (int)getNumberOfInitialSuggestions;
- (int)getNumberOfInitialSearchResults;
- (id)build;
- (id)setMaxSnippetLengthWithInt:(int)arg1;
- (id)setUseSearchAsYouTypeWithBoolean:(_Bool)arg1;
- (id)setInitialNumberOfSearchResultsWithInt:(int)arg1;
- (id)setInitialNumberOfQuerySuggestionsWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
