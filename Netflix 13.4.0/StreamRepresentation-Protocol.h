//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFPlaylistGeneration/NSObject-Protocol.h>

@class NSString;

@protocol StreamRepresentation <NSObject>
- (NSString *)downloadableId;
- (long long)encodingProfile;
- (NSString *)encodingProfileName;
- (_Bool)isPreferredTextTrack;
- (_Bool)isTextStream;
- (unsigned long long)audioChannelCount;
- (_Bool)isPreferredAudioTrack;
- (_Bool)isAudioStream;
- (unsigned long long)videoVmaf;
- (unsigned long long)videoWidth;
- (unsigned long long)videoHeight;
- (_Bool)isVideoStream;
@end

