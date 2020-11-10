//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ZipUtilities/NOZSyncStepOperation.h>

@class NOZCompressRequest, NOZCompressResult, NOZZipper;
@protocol NOZCompressDelegate;

@interface NOZCompressOperation : NOZSyncStepOperation
{
    NOZZipper *_zipper;
    id <NOZCompressDelegate> _strongDelegate;
    id <NOZCompressDelegate> _weakDelegate;
    NOZCompressRequest *_request;
    double _startTime;
    long long _totalUncompressedBytes;
    long long _finishedUncompressedBytes;
    struct {
        unsigned int delegateUpdatesProgress:1;
    } _flags;
    NOZCompressResult *_result;
}

+ (id)operationCancelledError;
- (void).cxx_destruct;
@property(readonly, nonatomic) NOZCompressResult *result; // @synthesize result=_result;
- (void)handleFinishing;
- (void)handleProgressUpdated:(float)arg1;
- (_Bool)runStep:(unsigned long long)arg1 error:(out id *)arg2;
- (long long)weightForStep:(unsigned long long)arg1;
- (unsigned long long)numberOfSteps;
- (void)main;
- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) NOZCompressRequest *request;
@property(readonly, nonatomic) __weak id <NOZCompressDelegate> delegate;
- (id)init;
- (void)private_didCompressBytes:(long long)arg1;
- (id)private_addEntry:(id)arg1;
- (id)private_closeFile;
- (id)private_addEntries;
- (id)private_openFile;
- (id)private_prepareProgress;

@end

