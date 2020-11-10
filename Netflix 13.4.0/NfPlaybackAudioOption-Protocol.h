//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol NfPlaybackAudioOption <NSObject>
@property(copy, nonatomic) NSString *pairedTrack;
@property(copy, nonatomic) NSArray *disallowedSubtitleTracks;
@property(nonatomic, getter=isNoOffSubtitleTrack) _Bool noOffSubtitleTrack;
@property(nonatomic, getter=isAssistiveAudio) _Bool assistiveAudio;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSArray *trackOptions;
@property(copy, nonatomic) NSString *mediaTrackId;
@property(copy, nonatomic) NSNumber *channels;
@property(copy, nonatomic) NSNumber *kbps;
@property(copy, nonatomic) NSString *optionId;
@property(copy, nonatomic) NSString *bcp47;
@end

