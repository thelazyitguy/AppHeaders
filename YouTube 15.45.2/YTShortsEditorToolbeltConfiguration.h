//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsEditorToolbeltConfiguration-Protocol.h"

@class NSString, UIImage;

@interface YTShortsEditorToolbeltConfiguration : NSObject <YTShortsEditorToolbeltConfiguration>
{
    _Bool _displayTimeline;
    _Bool _displayTextEditor;
    _Bool _displayAudioPicker;
    _Bool _displayVolumeBalance;
    _Bool _displayAudioScrubber;
    UIImage *_audioPickerImage;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *audioPickerImage; // @synthesize audioPickerImage=_audioPickerImage;
@property(nonatomic) _Bool displayAudioScrubber; // @synthesize displayAudioScrubber=_displayAudioScrubber;
@property(nonatomic) _Bool displayVolumeBalance; // @synthesize displayVolumeBalance=_displayVolumeBalance;
@property(nonatomic) _Bool displayAudioPicker; // @synthesize displayAudioPicker=_displayAudioPicker;
@property(nonatomic) _Bool displayTextEditor; // @synthesize displayTextEditor=_displayTextEditor;
@property(nonatomic) _Bool displayTimeline; // @synthesize displayTimeline=_displayTimeline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

