//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchResultsNavigationHelper : NSObject
{
    NSString *searchTerm;
    id _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm;
- (void)firePerformanceManagement;
- (void)fireAnalytics;
- (void)navigateToCorrectViewForSearchResult:(_Bool)arg1 forSearchModel:(id)arg2;
- (void)setSearchModal:(id)arg1;
- (void)searchResultsLoadedWithError:(id)arg1;
- (void)initialSearchFor:(id)arg1;
- (id)init:(id)arg1;

@end

