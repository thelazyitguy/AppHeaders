//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLyricsV2Configuration, SPTLyricsV2GLUETheme, SPTLyricsV2Model, SPTPlayerTrack, SPTVocalRemovalConfiguration;

@interface SPTLyricsV2SharingFlowCoordinator : NSObject
{
    SPTLyricsV2GLUETheme *_theme;
    SPTPlayerTrack *_track;
    SPTLyricsV2Model *_lyricsModel;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
    CDUnknownBlockType _finishCallback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) SPTLyricsV2Model *lyricsModel; // @synthesize lyricsModel=_lyricsModel;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
- (void)launchLayoutPicker:(id)arg1 navigationController:(id)arg2;
- (void)startSharingFlow;
- (id)initWithTheme:(id)arg1 lyricsModel:(id)arg2 track:(id)arg3 lyricsConfiguration:(id)arg4 vocalRemovalConfiguration:(id)arg5 finishCallback:(CDUnknownBlockType)arg6;

@end

