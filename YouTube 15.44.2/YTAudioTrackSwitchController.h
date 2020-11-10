//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTActionSheetControllerDelegate-Protocol.h>
#import <Module_Framework/YTSingleVideoAudioFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoSelectableAudioFormatsObserver-Protocol.h>

@class NSArray, NSHashTable, NSString, YTActionSheetController;
@protocol YTAudioTrackSwitchDelegate, YTSingleVideoObservable;

@interface YTAudioTrackSwitchController : NSObject <YTActionSheetControllerDelegate, YTSingleVideoAudioFormatSelectionObserver, YTSingleVideoSelectableAudioFormatsObserver>
{
    NSArray *_availableAudioTracks;
    NSString *_lastSelectedAudioTrackName;
    id <YTSingleVideoObservable> _video;
    NSHashTable *_observers;
    YTActionSheetController *_actionSheetController;
    id <YTAudioTrackSwitchDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTAudioTrackSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyObserversWithAudioTrack:(id)arg1;
- (void)switchToAudioTrack:(id)arg1;
- (void)updateCurrentAudioTrack;
- (void)setUserSelectableFormats:(id)arg1;
- (id)createActionSheetController;
- (_Bool)shouldDisplayActionSheet;
- (void)singleVideo:(id)arg1 selectableAudioFormatsDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 didSelectAudioFormat:(id)arg2;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)removeUIObserver:(id)arg1;
- (void)addUIObserver:(id)arg1;
- (void)showMenuFromView:(id)arg1;
- (void)reset;
- (void)setActiveVideo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
