//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSDate, NSError, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext, TFSTwitterAPIMediaSegmentedUploadInitCommand;
@protocol TFNTwitterMediaAssetPackedSegmentedUploadInitOperationDelegate, TFSTwitterAPICommandCancellable;

@interface TFNTwitterMediaAssetPackedSegmentedUploadInitOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>
{
    id <TFNTwitterMediaAssetPackedSegmentedUploadInitOperationDelegate> _delegate;
    unsigned long long _totalBytes;
    NSString *_resultMediaID;
    NSDate *_resultExpiryDate;
    unsigned long long _resultTotalRequestRetryCount;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    id <TFSTwitterAPICommandCancellable> _commandOperation;
    TFSTwitterAPIMediaSegmentedUploadInitCommand *_command;
    unsigned long long _resultState;
    NSError *_resultError;
}

- (void).cxx_destruct;
@property(retain) NSError *resultError; // @synthesize resultError=_resultError;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
@property(retain, nonatomic) TFSTwitterAPIMediaSegmentedUploadInitCommand *command; // @synthesize command=_command;
@property(retain) id <TFSTwitterAPICommandCancellable> commandOperation; // @synthesize commandOperation=_commandOperation;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property unsigned long long resultTotalRequestRetryCount; // @synthesize resultTotalRequestRetryCount=_resultTotalRequestRetryCount;
@property(retain) NSDate *resultExpiryDate; // @synthesize resultExpiryDate=_resultExpiryDate;
@property(copy) NSString *resultMediaID; // @synthesize resultMediaID=_resultMediaID;
@property unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) __weak id <TFNTwitterMediaAssetPackedSegmentedUploadInitOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel;
- (void)_tfn_main_mediaSegmentedUploadInitCommandDidInitMediaInformation:(id)arg1 error:(id)arg2;
- (void)run;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

