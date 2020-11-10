//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLoggingService/TLSRollingFileOutputStream.h>

#import <T1Twitter/TDTBugReportAttachmentProvider-Protocol.h>

@class NSSet, NSString;

@interface TFNLoggingCustomFormatRollingFileOutputStream : TLSRollingFileOutputStream <TDTBugReportAttachmentProvider>
{
    NSSet *_channels;
    CDUnknownBlockType _customFormatBlock;
    _Bool _shouldOutputBugReportAttachment;
    _Bool _shouldLogFileOutputEvents;
    NSString *_attachmentFileExtension;
    NSString *_attachmentFileName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldLogFileOutputEvents; // @synthesize shouldLogFileOutputEvents=_shouldLogFileOutputEvents;
@property(nonatomic) _Bool shouldOutputBugReportAttachment; // @synthesize shouldOutputBugReportAttachment=_shouldOutputBugReportAttachment;
@property(copy, nonatomic) NSString *attachmentFileName; // @synthesize attachmentFileName=_attachmentFileName;
@property(copy, nonatomic) NSString *attachmentFileExtension; // @synthesize attachmentFileExtension=_attachmentFileExtension;
- (id)attachmentsWithContext:(id)arg1;
- (id)attachmentFullFileName;
- (void)tls_fileOutputEventFailed:(long long)arg1 info:(id)arg2 error:(id)arg3;
- (void)tls_fileOutputEventFinished:(long long)arg1 info:(id)arg2;
- (void)tls_fileOutputEventBegan:(long long)arg1 info:(id)arg2;
- (void)tls_outputLogInfo:(id)arg1;
- (long long)tls_shouldFilterLevel:(long long)arg1 channel:(id)arg2 contextObject:(id)arg3;
- (id)initWithLogFileDirectoryPath:(id)arg1 logFilePrefix:(id)arg2 maxLogFiles:(unsigned long long)arg3 maxBytesPerLogFile:(unsigned long long)arg4 channels:(id)arg5 customFormatBlock:(CDUnknownBlockType)arg6 error:(out id *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
