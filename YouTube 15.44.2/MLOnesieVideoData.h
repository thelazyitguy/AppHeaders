//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLAudioDecoderFactory, MLCachePinHandle, MLOnesieFormatData, MLVideoDecoderFactory, NSMutableArray, NSSet, NSString, YTIHamplayerHotConfig, YTIOnesieHotConfig;
@protocol HAMAudioDecoderFactory, HAMVideoDecoderFactory, MLOnesieVideoDataQOEErrorDelegate, OS_dispatch_queue;

@interface MLOnesieVideoData : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    YTIOnesieHotConfig *_onesieHotConfig;
    YTIHamplayerHotConfig *_hamplayerHotConfig;
    MLAudioDecoderFactory *_audioDecoderFactory;
    MLVideoDecoderFactory *_videoDecoderFactory;
    _Bool _decoderFactoryRequested;
    MLOnesieFormatData *_videoFormatData;
    _Bool _videoBufferExhausted;
    MLOnesieFormatData *_audioFormatData;
    _Bool _audioBufferExhausted;
    NSMutableArray *_QOEErrors;
    NSString *_videoID;
    id <MLOnesieVideoDataQOEErrorDelegate> _QOEErrorDelegate;
    NSObject<OS_dispatch_queue> *_playerQueue;
    NSSet *_onesieItagWhitelist;
    NSString *_onesieTargetHostname;
    NSSet *_onesieItagsForHostnameChange;
    MLCachePinHandle *_cachePinHandle;
    long long _lastRequestNumber;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastRequestNumber; // @synthesize lastRequestNumber=_lastRequestNumber;
@property(retain, nonatomic) MLCachePinHandle *cachePinHandle; // @synthesize cachePinHandle=_cachePinHandle;
@property(readonly, nonatomic) NSSet *onesieItagsForHostnameChange; // @synthesize onesieItagsForHostnameChange=_onesieItagsForHostnameChange;
@property(readonly, nonatomic) NSString *onesieTargetHostname; // @synthesize onesieTargetHostname=_onesieTargetHostname;
@property(retain, nonatomic) NSSet *onesieItagWhitelist; // @synthesize onesieItagWhitelist=_onesieItagWhitelist;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) __weak id <MLOnesieVideoDataQOEErrorDelegate> QOEErrorDelegate; // @synthesize QOEErrorDelegate=_QOEErrorDelegate;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void)performFormatDataBlock:(CDUnknownBlockType)arg1 forFormatKey:(id)arg2;
- (void)createPlayerQueue;
- (void)createVideoDecoderFactoryWithFormatDescription:(id)arg1;
- (void)createAudioDecoderFactoryWithFormatDescription:(id)arg1;
- (void)recordQOEError:(id)arg1;
- (void)setOnesieTargetHostname:(id)arg1 forItags:(id)arg2;
- (_Bool)hasOnesieTargetHostnameForItag:(int)arg1;
- (id)dataBufferForFormatKey:(id)arg1;
- (id)formatDataForFormatKey:(id)arg1;
- (void)setFormatDescription:(id)arg1 mediaChunkIndex:(id)arg2 initDataEndOffset:(long long)arg3 forFormatKey:(id)arg4;
- (void)setDoneAppendingMediaData;
- (void)setDoneAppendingMediaDataForFormatKey:(id)arg1;
- (void)prepareBufferForFormatKey:(id)arg1;
- (void)appendMediaData:(id)arg1 forFormatKey:(id)arg2;
- (void)appendMediaData:(id)arg1 offset:(long long)arg2 forFormatKey:(id)arg3;
- (_Bool)hasDataForFormatKey:(id)arg1;
- (_Bool)hasData;
@property(readonly, nonatomic) id <HAMVideoDecoderFactory> videoDecoderFactory;
@property(readonly, nonatomic) id <HAMAudioDecoderFactory> audioDecoderFactory;
- (void)dealloc;
- (id)initWithVideoID:(id)arg1 onesieHotConfig:(id)arg2 hamplayerHotConfig:(id)arg3;
- (void)dataBuffer:(id)arg1 recordNonFatalQOEError:(id)arg2;
- (void)dataBufferExhausted:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@end

