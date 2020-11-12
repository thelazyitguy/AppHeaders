//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, PageInfo, RedditService;

@interface Listing : NSObject <NSCopying>
{
    _Bool _isFetching;
    _Bool _didLastFetchFail;
    _Bool _removeDuplicates;
    NSArray *_objects;
    long long _pageSize;
    PageInfo *_pageInfo;
    RedditService *_service;
    NSString *_queryName;
    NSDictionary *_variables;
    NSString *_resourceKeyPath;
    CDUnknownBlockType _parseObjectBlock;
}

+ (id)keyPathsForValuesAffectingHasFetched;
+ (id)keyPathsForValuesAffectingHasNextPage;
+ (id)removeDuplicateObjectsFromArray:(id)arg1 existingObjects:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType parseObjectBlock; // @synthesize parseObjectBlock=_parseObjectBlock;
@property(copy, nonatomic) NSString *resourceKeyPath; // @synthesize resourceKeyPath=_resourceKeyPath;
@property(copy, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(copy, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(readonly, nonatomic) _Bool removeDuplicates; // @synthesize removeDuplicates=_removeDuplicates;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) PageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) _Bool didLastFetchFail; // @synthesize didLastFetchFail=_didLastFetchFail;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)tags;
- (id)debugDescription;
@property(readonly, nonatomic) _Bool hasFetched;
@property(readonly, nonatomic) _Bool hasNextPage;
- (void)parsePageInfo:(id)arg1;
- (id)createVariables;
- (void)fetchNextPage:(CDUnknownBlockType)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithService:(id)arg1 queryName:(id)arg2 variables:(id)arg3 resourceKeyPath:(id)arg4 removeDuplicates:(_Bool)arg5 parseObjectBlock:(CDUnknownBlockType)arg6;

@end
