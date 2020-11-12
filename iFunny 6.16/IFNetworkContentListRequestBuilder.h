//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IFNetworkContentListRequestBuilder : NSObject
{
    _Bool _isTop;
    long long _contentFeedType;
    NSString *_userId;
    NSString *_channelId;
    NSString *_parentContentId;
    NSString *_path;
    long long _httpMethod;
    NSMutableDictionary *_parameters;
    Class _responseClass;
    NSString *_contentId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *parentContentId; // @synthesize parentContentId=_parentContentId;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long contentFeedType; // @synthesize contentFeedType=_contentFeedType;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
- (id)valueForIsAbusedFilter:(unsigned long long)arg1;
- (id)valueForShotStatusFilter:(unsigned long long)arg1;
- (long long)defaultLimitForContentFeedType:(long long)arg1;
- (long long)httpMethodForContentFeedType:(long long)arg1;
- (id)defaultParametersForContentFeedType:(long long)arg1;
- (Class)responseClassForContentFeedType:(long long)arg1;
- (id)feedURLPathForContentFeedType:(long long)arg1;
- (id)request;
- (void)setIsAbusedFilter:(unsigned long long)arg1;
- (void)setShotStatusFilter:(unsigned long long)arg1;
- (void)setDefaultLimit;
- (void)setBeforeAfterMiddleLimit;
- (void)setMiddleCommentId:(id)arg1;
- (void)setPrevCursor:(id)arg1;
- (void)setNextCursor:(id)arg1;
- (void)setMemCategory:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setFirstContentId:(id)arg1;
- (void)setContentIds:(id)arg1;
- (void)setClusterId:(id)arg1;
- (id)initWithContentFeedType:(long long)arg1 userId:(id)arg2 channelId:(id)arg3;

@end
