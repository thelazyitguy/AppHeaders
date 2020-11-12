//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SendBirdSDK/SBDSerializable-Protocol.h>

@class NSArray, NSString, SBDUser;

@interface SBDGroupChannelListQuery : NSObject <SBDSerializable>
{
    _Bool _includeEmptyChannel;
    _Bool _includeMemberList;
    _Bool _hasNext;
    _Bool _loading;
    unsigned long long _limit;
    long long _order;
    long long _queryType;
    NSString *_customTypeFilter;
    long long _memberStateFilter;
    NSArray *_channelUrlsFilter;
    NSString *_channelNameFilter;
    unsigned long long _superChannelFilter;
    unsigned long long _publicChannelFilter;
    NSString *_customTypeStartsWithFilter;
    NSArray *_customTypesFilter;
    NSString *_nicknameContainsFilter;
    NSString *_channelNameContainsFilter;
    unsigned long long _unreadChannelFilter;
    NSString *_metaDataOrderKeyFilter;
    unsigned long long _channelHiddenStateFilter;
    NSString *_searchQuery;
    unsigned long long _searchFields;
    NSString *_token;
    SBDUser *_user;
    NSArray *_userIdsFilterExactMatch;
    NSArray *_userIdsFilterLikeMatch;
}

+ (id)buildFromSerializedData:(id)arg1;
@property(copy, nonatomic) NSArray *userIdsFilterLikeMatch; // @synthesize userIdsFilterLikeMatch=_userIdsFilterLikeMatch;
@property(copy, nonatomic) NSArray *userIdsFilterExactMatch; // @synthesize userIdsFilterExactMatch=_userIdsFilterExactMatch;
@property(retain, nonatomic) SBDUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned long long searchFields; // @synthesize searchFields=_searchFields;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property unsigned long long channelHiddenStateFilter; // @synthesize channelHiddenStateFilter=_channelHiddenStateFilter;
@property(copy, nonatomic) NSString *metaDataOrderKeyFilter; // @synthesize metaDataOrderKeyFilter=_metaDataOrderKeyFilter;
@property(nonatomic) unsigned long long unreadChannelFilter; // @synthesize unreadChannelFilter=_unreadChannelFilter;
@property(copy, nonatomic) NSString *channelNameContainsFilter; // @synthesize channelNameContainsFilter=_channelNameContainsFilter;
@property(copy, nonatomic) NSString *nicknameContainsFilter; // @synthesize nicknameContainsFilter=_nicknameContainsFilter;
@property(copy, nonatomic) NSArray *customTypesFilter; // @synthesize customTypesFilter=_customTypesFilter;
@property(copy, nonatomic) NSString *customTypeStartsWithFilter; // @synthesize customTypeStartsWithFilter=_customTypeStartsWithFilter;
@property(nonatomic) unsigned long long publicChannelFilter; // @synthesize publicChannelFilter=_publicChannelFilter;
@property(nonatomic) unsigned long long superChannelFilter; // @synthesize superChannelFilter=_superChannelFilter;
@property(retain, nonatomic) NSString *channelNameFilter; // @synthesize channelNameFilter=_channelNameFilter;
@property(copy, nonatomic) NSArray *channelUrlsFilter; // @synthesize channelUrlsFilter=_channelUrlsFilter;
@property(nonatomic) long long memberStateFilter; // @synthesize memberStateFilter=_memberStateFilter;
@property(retain, nonatomic) NSString *customTypeFilter; // @synthesize customTypeFilter=_customTypeFilter;
@property long long queryType; // @synthesize queryType=_queryType;
@property _Bool hasNext; // @synthesize hasNext=_hasNext;
@property long long order; // @synthesize order=_order;
@property _Bool includeMemberList; // @synthesize includeMemberList=_includeMemberList;
@property _Bool includeEmptyChannel; // @synthesize includeEmptyChannel=_includeEmptyChannel;
@property unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)loadNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setSearchFilter:(id)arg1 fields:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *userIdsExactFilter;
- (void)setUserIdsIncludeFilter:(id)arg1 queryType:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *userIdsIncludeFilter;
- (void)setUserIdsFilter:(id)arg1 exactMatch:(_Bool)arg2;
- (void)setLoadingState:(_Bool)arg1;
- (_Bool)isLoading;
- (id)serialize;
- (id)_toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
