//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RailsNetworkSourceFactory : NSObject
{
}

+ (id)sortModelWithRailsContext:(id)arg1;
+ (id)buildSuggestedSortDataProviderWithHistorySubreddit:(id)arg1;
+ (id)suggedestedSortDataModels:(id)arg1;
+ (id)buildSubredditNetworkDataProviderWithQuery:(id)arg1 sort:(id)arg2 time:(id)arg3 queryId:(id)arg4 correlationId:(id)arg5 accountContext:(id)arg6;
+ (id)subredditEmptyModeListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2;
+ (id)defaultListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2 delegate:(id)arg3;
+ (id)arrayByRepeatingObject:(id)arg1 times:(unsigned long long)arg2;
+ (id)topListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2 delegate:(id)arg3;
+ (id)subredditCategoryListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2 delegate:(id)arg3;
+ (id)flairListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2;
+ (id)subredditListingNetworkSourceWithAccountContext:(id)arg1 railsContext:(id)arg2;

@end

