//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSString;

@interface IFUsersMyRatingGETRequest : IFNetworkBaseRequest
{
    NSString *_userId;
    NSString *_ratingLevelId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ratingLevelId; // @synthesize ratingLevelId=_ratingLevelId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initWithUserId:(id)arg1 ratingLevelId:(id)arg2;

@end
