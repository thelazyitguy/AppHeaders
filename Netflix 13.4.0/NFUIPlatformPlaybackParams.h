//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFUIPlayerFoundation/NFUIPlaybackParams.h>

@class NSNumber, NSString;

@interface NFUIPlatformPlaybackParams : NFUIPlaybackParams
{
    _Bool _branching;
    _Bool _uiWillAutoPlay;
    _Bool _supplemental;
    _Bool _downloaded;
    _Bool _inlinePlayback;
    _Bool _useHttpsStream;
    _Bool _useQuickPlayLicense;
    NSNumber *_trackId;
    NSString *_uiLabel;
    NSString *_offlineTransactionId;
    NSString *_webVTTPlistLocation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *webVTTPlistLocation; // @synthesize webVTTPlistLocation=_webVTTPlistLocation;
@property(nonatomic) _Bool useQuickPlayLicense; // @synthesize useQuickPlayLicense=_useQuickPlayLicense;
@property(nonatomic) _Bool useHttpsStream; // @synthesize useHttpsStream=_useHttpsStream;
@property(copy, nonatomic) NSString *offlineTransactionId; // @synthesize offlineTransactionId=_offlineTransactionId;
@property(nonatomic, getter=isInlinePlayback) _Bool inlinePlayback; // @synthesize inlinePlayback=_inlinePlayback;
@property(nonatomic, getter=isDownloaded) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic, getter=isSupplemental) _Bool supplemental; // @synthesize supplemental=_supplemental;
@property(nonatomic) _Bool uiWillAutoPlay; // @synthesize uiWillAutoPlay=_uiWillAutoPlay;
@property(copy, nonatomic) NSString *uiLabel; // @synthesize uiLabel=_uiLabel;
@property(copy, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
@property(nonatomic) _Bool branching; // @synthesize branching=_branching;
- (id)uiPlayContext;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

