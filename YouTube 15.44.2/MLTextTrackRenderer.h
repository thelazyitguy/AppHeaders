//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMBaseTrackRenderer.h>

#import <Module_Framework/HAMMediaSourceDelegate-Protocol.h>
#import <Module_Framework/MLTextTrackRenderer-Protocol.h>

@class GIMMe, MLCaptionBuffer, NSString;
@protocol HAMFormat, HAMRootMediaSource, HAMTrackRendererDelegate, MLCaptionBufferSource, MLCaptionDisplayController, MLTextTrackRendererProductionTimeDelegate;

@interface MLTextTrackRenderer : HAMBaseTrackRenderer <HAMMediaSourceDelegate, MLTextTrackRenderer>
{
    id <MLCaptionBufferSource> _source;
    struct MLTextTrackRendererConfiguration _configuration;
    id <HAMFormat> _lastScheduledFormat;
    double _lastScheduledEndTime;
    MLCaptionBuffer *_savedCaptionBuffer;
    id <MLCaptionDisplayController> _captionDisplayController;
    id <MLTextTrackRendererProductionTimeDelegate> _productionTimeDelegate;
    GIMMe *_gimme;
    CDStruct_576a8307 _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <MLTextTrackRendererProductionTimeDelegate> productionTimeDelegate; // @synthesize productionTimeDelegate=_productionTimeDelegate;
@property(retain, nonatomic) id <MLCaptionDisplayController> captionDisplayController; // @synthesize captionDisplayController=_captionDisplayController;
- (void)displayCaptionBuffer:(id)arg1;
- (void)processCaptionBuffer:(id)arg1;
- (void)enableIfSeeking;
- (void)mediaSource:(id)arg1 didFailWithError:(id)arg2;
- (void)mediaSource:(id)arg1 setCurrentTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)internalDoWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)internalSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)internalSetRate:(float)arg1;
- (void)internalTerminate;
- (_Bool)internalDisableAndReturnError:(id *)arg1;
- (_Bool)internalStopAndReturnError:(id *)arg1;
- (_Bool)internalStartAndReturnError:(id *)arg1;
- (_Bool)internalPrimeAndReturnError:(id *)arg1;
- (_Bool)internalEnableAndReturnError:(id *)arg1;
- (_Bool)internalPrepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) _Bool allowsBackgroundPlayback;
@property(readonly, nonatomic) int mediaContentType;
@property(readonly, nonatomic) CDStruct_576a8307 currentTime; // @synthesize currentTime=_currentTime;
- (void)setCurrentTime:(CDStruct_576a8307)arg1;
- (id)initWithContext:(id)arg1 rootMediaSource:(id)arg2 configuration:(struct MLTextTrackRendererConfiguration)arg3 captionBufferSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HAMTrackRendererDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) float rate;
@property(readonly, nonatomic) id <HAMRootMediaSource> rootMediaSource;
@property(readonly, nonatomic) CDStruct_e83c9415 seekableTimeRange;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;

@end
