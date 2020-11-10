//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CORenewableObject.h"

@class NSString;

@interface NFIFeaturesEntity : CORenewableObject
{
    _Bool _ipp;
    _Bool _playbackGraph;
    _Bool _videoMoments;
    _Bool _playerFutureChoicesNone;
    _Bool _interrupterExempt;
    _Bool _postPlay;
    _Bool _battlePostPlayTimer;
    _Bool _hideDetailedDurations;
    _Bool _shiftImageSubs;
    _Bool _prePlay;
    _Bool _interactiveAppUpdateDialogue;
    _Bool _resetUserState;
    _Bool _choicePointDebugMenu;
    NSString *_mainfeatureIdentifier;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mainfeatureIdentifier; // @synthesize mainfeatureIdentifier=_mainfeatureIdentifier;
@property(readonly, nonatomic) _Bool choicePointDebugMenu; // @synthesize choicePointDebugMenu=_choicePointDebugMenu;
@property(readonly, nonatomic) _Bool resetUserState; // @synthesize resetUserState=_resetUserState;
@property(readonly, nonatomic) _Bool interactiveAppUpdateDialogue; // @synthesize interactiveAppUpdateDialogue=_interactiveAppUpdateDialogue;
@property(readonly, nonatomic) _Bool prePlay; // @synthesize prePlay=_prePlay;
@property(readonly, nonatomic) _Bool shiftImageSubs; // @synthesize shiftImageSubs=_shiftImageSubs;
@property(readonly, nonatomic) _Bool hideDetailedDurations; // @synthesize hideDetailedDurations=_hideDetailedDurations;
@property(readonly, nonatomic) _Bool battlePostPlayTimer; // @synthesize battlePostPlayTimer=_battlePostPlayTimer;
@property(readonly, nonatomic) _Bool postPlay; // @synthesize postPlay=_postPlay;
@property(readonly, nonatomic) _Bool interrupterExempt; // @synthesize interrupterExempt=_interrupterExempt;
@property(readonly, nonatomic) _Bool playerFutureChoicesNone; // @synthesize playerFutureChoicesNone=_playerFutureChoicesNone;
@property(readonly, nonatomic) _Bool videoMoments; // @synthesize videoMoments=_videoMoments;
@property(readonly, nonatomic) _Bool playbackGraph; // @synthesize playbackGraph=_playbackGraph;
@property(readonly, nonatomic) _Bool ipp; // @synthesize ipp=_ipp;
- (_Bool)enabled;
- (void)mutatePlaybackRequest:(id)arg1;

@end

