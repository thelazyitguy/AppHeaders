//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaJsonObject.h"

@class NSArray, NSString;

@interface PisaModifiedKeywordSearch : PisaJsonObject
{
    _Bool _isModifiedKeywordSearch;
    NSString *_keywords;
    NSArray *_results;
}

+ (id)searchDisplayStringAllTerms:(id)arg1 usedTerms:(id)arg2 usedTermsFont:(id)arg3 unusedTermsFont:(id)arg4;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) _Bool isModifiedKeywordSearch; // @synthesize isModifiedKeywordSearch=_isModifiedKeywordSearch;
- (void).cxx_destruct;
- (id)initFromJsonDictionary:(id)arg1;

@end
