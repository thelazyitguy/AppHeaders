//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class TFSTwitterAPICommandService;
@protocol TFSTwitterAPICommandCancellable, TFSTwitterAPICommandContext;

@interface TFNDirectMessageAPICommandOperation : TFSConcurrentOperation
{
    _Bool _allowsLocalOnlyUpdate;
    id <TFSTwitterAPICommandContext> _context;
    TFSTwitterAPICommandService *_service;
    id <TFSTwitterAPICommandCancellable> _request;
}

- (void).cxx_destruct;
@property(retain) id <TFSTwitterAPICommandCancellable> request; // @synthesize request=_request;
@property(readonly, nonatomic) TFSTwitterAPICommandService *service; // @synthesize service=_service;
@property(readonly, nonatomic) id <TFSTwitterAPICommandContext> context; // @synthesize context=_context;
@property _Bool allowsLocalOnlyUpdate; // @synthesize allowsLocalOnlyUpdate=_allowsLocalOnlyUpdate;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (void)updateOptimistically;
- (id)makeCommandWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)run;
- (void)cancel;
- (id)initWithCommandService:(id)arg1 context:(id)arg2;

@end
