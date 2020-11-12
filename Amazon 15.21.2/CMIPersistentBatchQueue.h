//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMIBatchQueue-Protocol.h"

@class CMIPipelineConfiguration, NSFileManager, NSMutableArray, NSString;

@interface CMIPersistentBatchQueue : NSObject <CMIBatchQueue>
{
    long long _totalBytes;
    long long _numOfBatches;
    NSMutableArray *_filenameQueue;
    CMIPipelineConfiguration *_pipelineConfiguration;
    NSFileManager *_fileManager;
}

@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) CMIPipelineConfiguration *pipelineConfiguration; // @synthesize pipelineConfiguration=_pipelineConfiguration;
@property(readonly, nonatomic) NSMutableArray *filenameQueue; // @synthesize filenameQueue=_filenameQueue;
@property(nonatomic) long long numOfBatches; // @synthesize numOfBatches=_numOfBatches;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (void).cxx_destruct;
- (id)getPathToMetricBatchFile:(id)arg1;
- (id)getBatchQueueDirectoryPath;
- (void)trimQueueToCapacity;
- (void)loadPersistedFilenames;
- (id)peek;
- (id)dequeue;
- (void)enqueueMetricBatchData:(id)arg1;
- (id)initWithPipelineConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
