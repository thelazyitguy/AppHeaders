//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, PLKI18NextOptions;

@interface PLKI18NextLoader : NSObject
{
    PLKI18NextOptions *_optionsObject;
    NSOperationQueue *_backgroundQueue;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_activeConnections;
    NSMutableArray *_errors;
    NSDictionary *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *store; // @synthesize store=_store;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSMutableArray *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) PLKI18NextOptions *optionsObject; // @synthesize optionsObject=_optionsObject;
- (void)dispatchCompleted;
- (void)localLoadLangs:(id)arg1 namespaces:(id)arg2;
- (void)cancel;
- (void)loadLangs:(id)arg1 namespaces:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithOptions:(id)arg1;

@end
