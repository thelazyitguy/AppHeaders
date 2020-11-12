//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CMIPipelineConfiguration;
@protocol CMIBatchQueue;

@interface CMIPurgeBatchesOperation : NSOperation
{
    id <CMIBatchQueue> _batchQueue;
    CMIPipelineConfiguration *_pipelineConfiguration;
}

@property(readonly, nonatomic) CMIPipelineConfiguration *pipelineConfiguration; // @synthesize pipelineConfiguration=_pipelineConfiguration;
@property(readonly, nonatomic) id <CMIBatchQueue> batchQueue; // @synthesize batchQueue=_batchQueue;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBatchQueue:(id)arg1 pipelineConfiguration:(id)arg2;

@end
