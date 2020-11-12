//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkStrikeService-Protocol.h>

@protocol IFNetworkClient;

@interface IFNetworkStrikeServiceImpl : NSObject <IFNetworkStrikeService>
{
    id <IFNetworkClient> _networkClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IFNetworkClient> networkClient; // @synthesize networkClient=_networkClient;
- (void)postAppealForStrikeId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)setStrikeViewedWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getStrikeWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getAllStrikesWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)banContentForUserId:(id)arg1 reason:(id)arg2 maxDuration:(id)arg3 minDuration:(id)arg4 contentId:(id)arg5 commentId:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)initWithNetworkClient:(id)arg1;

@end
