//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestBase.h"

@protocol RecentSearchesRequestDelegate;

@interface RecentSearchesRequest : SCRequestBase
{
    long long _marketplace;
}

@property(nonatomic) long long marketplace; // @synthesize marketplace=_marketplace;
- (void)willFinishLoading;
- (id)domain;
- (id)initRecentSearchesWithQueryString:(id)arg1 httpMethod:(id)arg2 marketplace:(long long)arg3 userAgent:(id)arg4;
- (id)initRecentSearchesWithQuery:(id)arg1 marketplace:(long long)arg2 userAgent:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <RecentSearchesRequestDelegate> delegate;

@end
