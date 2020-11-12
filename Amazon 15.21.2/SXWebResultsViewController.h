//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMIWebViewController.h"

#import "AWTopNavConfig-Protocol.h"
#import "DEXSearchContext-Protocol.h"
#import "SXSearchParameterOverrides-Protocol.h"

@class NSString, SXRSearchQuery, SXRequestContext;

@interface SXWebResultsViewController : AMIWebViewController <AWTopNavConfig, DEXSearchContext, SXSearchParameterOverrides>
{
    _Bool _nonVisualSearchPage;
    SXRSearchQuery *_query;
    SXRequestContext *_requestContext;
    NSString *_overrideKeywords;
}

+ (id)aliasFromPath:(id)arg1;
+ (id)searchResultsForURL:(id)arg1 keywords:(id)arg2;
+ (id)searchResultsForQuery:(id)arg1;
@property(nonatomic) _Bool nonVisualSearchPage; // @synthesize nonVisualSearchPage=_nonVisualSearchPage;
@property(retain, nonatomic) NSString *overrideKeywords; // @synthesize overrideKeywords=_overrideKeywords;
@property(retain, nonatomic) SXRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) SXRSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)handleSearchContextEvent:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) NSString *storeName;
- (id)searchParametersOverrideText;
- (_Bool)searchParametersOverrideShowText;
- (void)dexRefresh;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)applyTopContentInsetsOnFrame:(struct CGRect)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (long long)topNavConfigFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
