//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAPipelineThenDelegate-Protocol.h>

@class NSMutableArray, NSString, SMAPipelineThen;
@protocol SMAPipelineDelegate;

@interface SMAPipeline : NSObject <SMAPipelineThenDelegate>
{
    id <SMAPipelineDelegate> _delegate;
    NSMutableArray *_steps;
    SMAPipelineThen *_currentThen;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onCompleteBlock; // @synthesize onCompleteBlock=_onCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(retain, nonatomic) SMAPipelineThen *currentThen; // @synthesize currentThen=_currentThen;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(nonatomic) __weak id <SMAPipelineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)then:(id)arg1 finishedWithError:(id)arg2 associatedObject:(id)arg3;
- (void)then:(id)arg1 finishedWithResult:(id)arg2;
- (void)runNextThenWithResult:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType run;
@property(readonly, nonatomic) CDUnknownBlockType onComplete;
@property(readonly, nonatomic) CDUnknownBlockType onError;
@property(readonly, nonatomic) CDUnknownBlockType thenInBackground;
@property(readonly, nonatomic) CDUnknownBlockType thenOnMain;
@property(readonly, nonatomic) CDUnknownBlockType then;
@property(readonly, nonatomic) CDUnknownBlockType just;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

