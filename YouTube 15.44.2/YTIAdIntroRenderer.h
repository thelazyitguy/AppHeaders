//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIAdIntroRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *encryptedVideoId; // @dynamic encryptedVideoId;
@property(nonatomic) _Bool hasEncryptedVideoId; // @dynamic hasEncryptedVideoId;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasNavigationConfidence; // @dynamic hasNavigationConfidence;
@property(nonatomic) _Bool hasSerializedPlayerRequest; // @dynamic hasSerializedPlayerRequest;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(nonatomic) float navigationConfidence; // @dynamic navigationConfidence;
@property(readonly, nonatomic) int playbackDataOneOfCase; // @dynamic playbackDataOneOfCase;
@property(copy, nonatomic) NSData *playerResponse; // @dynamic playerResponse;
@property(copy, nonatomic) NSString *playerVars; // @dynamic playerVars;
@property(copy, nonatomic) NSData *serializedPlayerRequest; // @dynamic serializedPlayerRequest;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

