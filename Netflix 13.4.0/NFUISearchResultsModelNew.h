//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUISearchResultsModelProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol NFUISearchModelProtocol;

@interface NFUISearchResultsModelNew : NSObject <NFUISearchResultsModelProtocol>
{
    id _listViewModel;
    NSDictionary *_searchResults;
    NSDictionary *_videoResults;
    NSDictionary *_suggestionResults;
    NSMutableDictionary *_resultsMap;
    NSMutableDictionary *_titlesMap;
    NSString *_searchText;
    id <NFUISearchModelProtocol> _model;
}

+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NFUISearchModelProtocol> model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSMutableDictionary *titlesMap; // @synthesize titlesMap=_titlesMap;
@property(retain, nonatomic) NSMutableDictionary *resultsMap; // @synthesize resultsMap=_resultsMap;
@property(retain, nonatomic) NSDictionary *suggestionResults; // @synthesize suggestionResults=_suggestionResults;
@property(retain, nonatomic) NSDictionary *videoResults; // @synthesize videoResults=_videoResults;
@property(retain, nonatomic) NSDictionary *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id listViewModel; // @synthesize listViewModel=_listViewModel;
- (id)currentSuggestionsRequestId;
- (id)currentVideosRequestId;
- (id)suggestionForIndex:(long long)arg1;
- (id)videoForIndex:(long long)arg1;
- (id)sectionTypeFromIndex:(long long)arg1;
- (id)getDictionaryFromFalcorData:(id)arg1 withType:(id)arg2;
- (void)parseResults:(id)arg1 searchModel:(id)arg2;
- (id)generateViewModels:(id)arg1;
- (id)resultsForIndex:(unsigned long long)arg1;
- (id)initWithResults:(id)arg1 searchModel:(id)arg2;

@end
