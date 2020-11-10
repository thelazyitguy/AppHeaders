//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIReelCreationMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *cancelButton; // @dynamic cancelButton;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasSaveButton; // @dynamic hasSaveButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitleInput; // @dynamic hasTitleInput;
@property(nonatomic) _Bool hasTitleInputLabel; // @dynamic hasTitleInputLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *saveButton; // @dynamic saveButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIRenderer *titleInput; // @dynamic titleInput;
@property(retain, nonatomic) YTIFormattedString *titleInputLabel; // @dynamic titleInputLabel;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

