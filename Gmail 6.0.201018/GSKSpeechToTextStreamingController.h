//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKAudioLevelSource-Protocol.h"
#import "GSKSpeechRecognizerDelegate-Protocol.h"

@class GSKLanguage, GSKSpeechRecognizerClient, GSKSpeechSessionConfig, GSKStreamingTextView, NSString;
@protocol GSKSpeechToTextStreamingControllerDelegate, GSKSpeechVolumeStream, GSKSpeechVolumeStreamFactory, GSKVoiceSearchAnalytics;

@interface GSKSpeechToTextStreamingController : NSObject <GSKSpeechRecognizerDelegate, GSKAudioLevelSource>
{
    GSKSpeechRecognizerClient *_speechRecognizer;
    GSKSpeechSessionConfig *_speechSessionConfig;
    unsigned long long _controllerState;
    id <GSKSpeechVolumeStreamFactory> _speechVolumeStreamFactory;
    _Bool _hasReceivedStreamingText;
    id <GSKSpeechToTextStreamingControllerDelegate> _delegate;
    id <GSKVoiceSearchAnalytics> _analyticsLogger;
    NSString *_recognitionResult;
    NSString *_entireCurrentResult;
    GSKStreamingTextView *_streamingTextView;
    id <GSKSpeechVolumeStream> _speechVolumeStream;
    NSString *_stickyText;
    GSKLanguage *_lastRecognizedLanguage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GSKLanguage *lastRecognizedLanguage; // @synthesize lastRecognizedLanguage=_lastRecognizedLanguage;
@property(readonly, nonatomic) NSString *stickyText; // @synthesize stickyText=_stickyText;
@property(readonly, nonatomic) id <GSKSpeechVolumeStream> speechVolumeStream; // @synthesize speechVolumeStream=_speechVolumeStream;
@property(readonly, nonatomic) GSKStreamingTextView *streamingTextView; // @synthesize streamingTextView=_streamingTextView;
@property(readonly, copy, nonatomic) NSString *entireCurrentResult; // @synthesize entireCurrentResult=_entireCurrentResult;
@property(readonly, copy, nonatomic) NSString *recognitionResult; // @synthesize recognitionResult=_recognitionResult;
@property(retain, nonatomic) id <GSKVoiceSearchAnalytics> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <GSKSpeechToTextStreamingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTextViewWithStablePrefix:(id)arg1 unstableSuffix:(id)arg2 shouldAnimate:(_Bool)arg3;
- (void)showListeningTextIfNecessary;
- (void)hideSpeakNowTextIfNecessary;
- (void)cancelDelayedTextUpdatesIfCould;
- (void)scheduleDelayedTextUpdates;
- (void)startWorkingState;
- (void)delayedShowWorkingState;
- (void)textStreamingDidFailWithError:(id)arg1;
- (void)textStreamingDidRecognizedWithResult:(id)arg1;
- (void)textStreamingDidRecognizePartialResultWithStablePrefix:(id)arg1 unstableSuffix:(id)arg2;
- (void)textStreamingDidContainHotword:(_Bool)arg1;
- (void)sessionDidFinishForRecognizer:(id)arg1;
- (void)recognizer:(id)arg1 didReceiveResponse:(id)arg2;
- (void)recognitionDidFail:(id)arg1 withError:(id)arg2;
- (void)recognitionTimedOutOrFailed:(id)arg1 withError:(id)arg2 afterInterval:(double)arg3;
- (void)captureDidFinish:(id)arg1;
- (void)captureDidFailToStart:(id)arg1;
- (void)captureDidStart:(id)arg1;
- (void)captureDidRecordData:(id)arg1;
- (void)recognitionWasCanceled:(id)arg1;
- (double)currentAudioLevel;
- (void)stopSpeechRecognition;
- (void)stopVoiceSearch;
- (void)pauseVoiceSearch;
- (void)startVoiceSearch;
@property(readonly, nonatomic) _Bool isPerformingVoiceSearch;
@property(readonly, nonatomic) _Bool canPerformVoiceSearch;
- (void)dealloc;
- (id)initWithSpeechSessionConfig:(id)arg1 speechRecognizer:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4;
- (id)initWithSpeechSessionConfig:(id)arg1 audioCapture:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4 encoderQuality:(long long)arg5 encoderDenoisingEnabled:(_Bool)arg6 endpointerTimeout:(double)arg7;
- (id)initWithSpeechSessionConfig:(id)arg1 audioCapture:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4 endpointingGracePeriod:(id)arg5;
- (id)initWithSpeechSessionConfig:(id)arg1 audioCapture:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4;
- (id)initWithSpeechSessionConfig:(id)arg1 audioRecordPath:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4 endpointingGracePeriod:(id)arg5;
- (id)initWithSpeechSessionConfig:(id)arg1 audioRecordPath:(id)arg2 speechVolumeStreamFactory:(id)arg3 stickyText:(id)arg4;
- (id)initWithSpeechSessionConfig:(id)arg1 audioRecordPath:(id)arg2 speechVolumeStreamFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
