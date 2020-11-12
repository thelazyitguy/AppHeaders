//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSString;

@interface IFNetworkBanContentRequest : IFNetworkBaseRequest
{
    NSString *_userId;
    NSString *_reason;
    NSString *_maxDuration;
    NSString *_minDuration;
    NSString *_contentId;
    NSString *_commentId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *minDuration; // @synthesize minDuration=_minDuration;
@property(copy, nonatomic) NSString *maxDuration; // @synthesize maxDuration=_maxDuration;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)parameters;
- (id)responseMapper;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initWithUserId:(id)arg1 reason:(id)arg2 maxDuration:(id)arg3 minDuration:(id)arg4 contentId:(id)arg5 commentId:(id)arg6;

@end
