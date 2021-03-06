//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIUploadInfo, YTIUploadTaskInfo;

@interface YTIUploadFrontendEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int abandonmentProcessorReason; // @dynamic abandonmentProcessorReason;
@property(nonatomic) unsigned long long copiedBytes; // @dynamic copiedBytes;
@property(nonatomic) unsigned long long copyFileOffsetByte; // @dynamic copyFileOffsetByte;
@property(nonatomic) unsigned long long copyFileTimeToFirstByteMs; // @dynamic copyFileTimeToFirstByteMs;
@property(nonatomic) unsigned long long copyFileTotalTimeMs; // @dynamic copyFileTotalTimeMs;
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) int failureProcessorReason; // @dynamic failureProcessorReason;
@property(nonatomic) int failureProcessorType; // @dynamic failureProcessorType;
@property(nonatomic) float feedbackProgressbarState; // @dynamic feedbackProgressbarState;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(nonatomic) _Bool hasAbandonmentProcessorReason; // @dynamic hasAbandonmentProcessorReason;
@property(nonatomic) _Bool hasCopiedBytes; // @dynamic hasCopiedBytes;
@property(nonatomic) _Bool hasCopyFileOffsetByte; // @dynamic hasCopyFileOffsetByte;
@property(nonatomic) _Bool hasCopyFileTimeToFirstByteMs; // @dynamic hasCopyFileTimeToFirstByteMs;
@property(nonatomic) _Bool hasCopyFileTotalTimeMs; // @dynamic hasCopyFileTotalTimeMs;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasFailureProcessorReason; // @dynamic hasFailureProcessorReason;
@property(nonatomic) _Bool hasFailureProcessorType; // @dynamic hasFailureProcessorType;
@property(nonatomic) _Bool hasFeedbackProgressbarState; // @dynamic hasFeedbackProgressbarState;
@property(nonatomic) _Bool hasFilename; // @dynamic hasFilename;
@property(nonatomic) _Bool hasPrecheckCopyrightDurationSeconds; // @dynamic hasPrecheckCopyrightDurationSeconds;
@property(nonatomic) _Bool hasResumingTransferSavedBytes; // @dynamic hasResumingTransferSavedBytes;
@property(nonatomic) _Bool hasSecondsWithoutFeedbackUpdate; // @dynamic hasSecondsWithoutFeedbackUpdate;
@property(nonatomic) _Bool hasSentBytes; // @dynamic hasSentBytes;
@property(nonatomic) _Bool hasTotalBytes; // @dynamic hasTotalBytes;
@property(nonatomic) _Bool hasUploadFlowAttemptNumber; // @dynamic hasUploadFlowAttemptNumber;
@property(nonatomic) _Bool hasUploadFlowSource; // @dynamic hasUploadFlowSource;
@property(nonatomic) _Bool hasUploadInfo; // @dynamic hasUploadInfo;
@property(nonatomic) _Bool hasUploadIntentSource; // @dynamic hasUploadIntentSource;
@property(nonatomic) _Bool hasUploadTaskInfo; // @dynamic hasUploadTaskInfo;
@property(retain, nonatomic) NSMutableArray *nsErrorsArray; // @dynamic nsErrorsArray;
@property(readonly, nonatomic) unsigned long long nsErrorsArray_Count; // @dynamic nsErrorsArray_Count;
@property(nonatomic) unsigned int precheckCopyrightDurationSeconds; // @dynamic precheckCopyrightDurationSeconds;
@property(nonatomic) unsigned long long resumingTransferSavedBytes; // @dynamic resumingTransferSavedBytes;
@property(nonatomic) unsigned int secondsWithoutFeedbackUpdate; // @dynamic secondsWithoutFeedbackUpdate;
@property(nonatomic) unsigned long long sentBytes; // @dynamic sentBytes;
@property(nonatomic) unsigned long long totalBytes; // @dynamic totalBytes;
@property(nonatomic) unsigned int uploadFlowAttemptNumber; // @dynamic uploadFlowAttemptNumber;
@property(nonatomic) int uploadFlowSource; // @dynamic uploadFlowSource;
@property(retain, nonatomic) YTIUploadInfo *uploadInfo; // @dynamic uploadInfo;
@property(copy, nonatomic) NSString *uploadIntentSource; // @dynamic uploadIntentSource;
@property(retain, nonatomic) YTIUploadTaskInfo *uploadTaskInfo; // @dynamic uploadTaskInfo;

@end

