//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

@class IDHmiService, NSMutableDictionary;
@protocol IDVoiceRecorderServiceDataSource, IDVoiceRecorderServiceDelegate;

@interface IDVoiceRecorderService : IDService
{
    id <IDVoiceRecorderServiceDataSource> _dataSource;
    id <IDVoiceRecorderServiceDelegate> _delegate;
    unsigned long long _voiceRecorderServiceState;
    IDHmiService *_hmiService;
    long long _sessionIdentifier;
    NSMutableDictionary *_dataChunks;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *dataChunks; // @synthesize dataChunks=_dataChunks;
@property long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) __weak IDHmiService *hmiService; // @synthesize hmiService=_hmiService;
@property unsigned long long voiceRecorderServiceState; // @synthesize voiceRecorderServiceState=_voiceRecorderServiceState;
@property __weak id <IDVoiceRecorderServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDVoiceRecorderServiceDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)validateSequenceNumbers:(id)arg1;
- (id)durationTableDataWithSessionIdentifier:(long long)arg1 duration:(double)arg2;
- (void)record;
- (void)abortExport;
- (void)abortExportAndInformDelegate:(id)arg1;
- (void)finishDataExportAndInformDelegate;
- (void)rejectVoiceRecorderEventExportForSequenceNumber:(long long)arg1;
- (void)acknowledgeVoiceRecorderEventExportForSequenceNumber:(long long)arg1;
- (void)storeDataChunk:(id)arg1 forSequenceNumber:(id)arg2;
- (void)prepareForDataExport;
- (void)session:(id)arg1 voiceRecorderService:(long long)arg2 handleVoiceRecorderEvent:(unsigned long long)arg3 sequence:(long long)arg4 payload:(id)arg5;
- (_Bool)disposeWithError:(id *)arg1;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 handle:(unsigned long long)arg2 hmiService:(id)arg3;

@end

