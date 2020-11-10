//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDictionary, NSNumber;
@protocol GTLRObjectClassResolver, OS_dispatch_queue;

@interface GTLRServiceExecutionParameters : NSObject <NSCopying>
{
    NSNumber *_maxRetryInterval;
    NSNumber *_retryEnabled;
    CDUnknownBlockType _retryBlock;
    NSNumber *_shouldFetchNextPages;
    id <GTLRObjectClassResolver> _objectClassResolver;
    CDUnknownBlockType _testBlock;
    NSDictionary *_ticketProperties;
    CDUnknownBlockType _uploadProgressBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(copy) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy) NSDictionary *ticketProperties; // @synthesize ticketProperties=_ticketProperties;
@property(copy) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(retain) id <GTLRObjectClassResolver> objectClassResolver; // @synthesize objectClassResolver=_objectClassResolver;
@property(retain) NSNumber *shouldFetchNextPages; // @synthesize shouldFetchNextPages=_shouldFetchNextPages;
@property(copy) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(retain, getter=isRetryEnabled) NSNumber *retryEnabled; // @synthesize retryEnabled=_retryEnabled;
@property(retain) NSNumber *maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property(readonly, nonatomic) _Bool hasParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

