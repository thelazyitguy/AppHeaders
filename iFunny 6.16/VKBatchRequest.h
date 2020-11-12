//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VKObject.h>

@class NSMutableArray;

@interface VKBatchRequest : VKObject
{
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    _Bool _canceled;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _errorBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void)provideError:(id)arg1;
- (void)provideResponse:(id)arg1;
- (void)cancel;
- (void)executeWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)initWithRequestsArray:(id)arg1;
- (id)initWithRequests:(id)arg1;

@end
