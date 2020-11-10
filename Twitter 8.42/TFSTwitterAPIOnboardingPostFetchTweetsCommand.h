//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray, NSString;

@interface TFSTwitterAPIOnboardingPostFetchTweetsCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSString *_subtaskID;
    NSString *_flowToken;
    NSArray *_tweetActionResponses;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tweetActionResponses; // @synthesize tweetActionResponses=_tweetActionResponses;
@property(copy, nonatomic) NSString *flowToken; // @synthesize flowToken=_flowToken;
@property(copy, nonatomic) NSString *subtaskID; // @synthesize subtaskID=_subtaskID;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 subtaskID:(id)arg3 flowToken:(id)arg4 tweetActionResponses:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

